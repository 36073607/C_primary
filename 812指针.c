#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.指针是什么
//Ⅰ.指针是内存中一个最小单元的编号，也就是地址
//Ⅱ.平时口语中说的指针，通常指的是指针变量，是用来存放内存地址的变量
//总结：指针就是地址，口语中说的指针通常指的是指针变量；指针就是内存单元的编号
//指针变量是用来存放地址的一个变量
//指针变量里面存放的是地址，而通过这个地址，就可以找到一个内存单元
int main()
{
	int a = 10;//在内存中开辟一块空间
	int* p = &a;//这里我们对变量a，取出他的地址，可以用&
	//a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量中，p就是一个指针变量

	return 0;
}

//指针的大小在32位平台是4个字节，在64位平台是8个字节

//2.指针和指针类型
int main()
{
	char* pc = NULL;
	short* ps = NULL;
	int* pi = NULL;
	double* pd = NULL;

	//sizeof返回的值的类型是无符号整型 unsigned int
	printf("%zu\n", sizeof(pc));//%zu 专门给sizeof用的
	printf("%zu\n", sizeof(ps));
	printf("%zu\n", sizeof(pi));
	printf("%zu\n", sizeof(pd));


	return 0;
}
//指针类型的意义
//结论一：指针类型决定了指针在被解引用的时候访问几个字节
//如果是int*指针，解引用访问4个字节
//如果是char*指针，解引用访问1个字节
//推广：如果是double*指针，解引用访问8个字节

//结论二：指针的类型决定了指针+/- 1 操作的时候，跳过几个字节（决定了指针的步长）
//char*指针+1跳过一个字节
//int*指针+1跳过4个字节
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = (char*)&a;

	printf("pa = %p\n", pa);
	printf("pa+1=%p\n", pa + 1);

	printf("pc=%p\n", pc);
	printf("pc+1=%p\n", pc + 1);

	return 0;
}
//推广：一个char*指针+2，指跳过两个字节
//一个int*指针+2，指跳过两个整型

//辨析：指针变量和指针变量里面存放的地址所指向的空间
//指针变量是用来存放地址的；地址又是指向内存单元的
//指针类型才决定指针变量能够访问几个字节

//结论二注：
int main()
{
	int a = 0;
	int* pi = &a;//pi 解引用访问4个字节,pi+1也是跳过4个字节
	float* pf = &a;//pf 解引用访问4个字节，pf+1也是跳过4个字节
	//但由于二者对内存的解读方式存在差异，int 以整型存储，float以浮点型存储
	//故 二者不能相互通用
	*pi = 100;
	*pf = 100.0;

	return 0;
}

//3.野指针
//概念：野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）

//3.1野指针的成因
//1.指针未初始化
int main()
{
	int* p;
	//p没有初始化，就意味着没有明确的指向
	//一个局部变量不初始化的话，放的是随机值：0xcccccccc
	*p = 10;//非法访问内存了，这里的p就是野指针

	return 0;
}
//2.指针越界访问
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		*(p++) = i;//当指针指向的范围超出数组arr的范围时，p就是野指针
	//上述写法展开：
		//*p = i;
		//p++;
	}

	return 0;
}
//3.指针指向的空间释放
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();

	return 0;
}
//由于a是局部变量，出了函数后自动销毁，但p保留了a的地址，却无法访问

//3.2 如何尽可能地避免野指针
int main()
{
	//错误示例：指针没有具体指向的内容
	int* p1 = NULL;
	*p1 = 100;

	//正确示例：
	int* p2 = NULL;
	if (p2 != NULL)
	{
		*p2 = 100;
	}


	return 0;
}

//注：
//其一：
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	if (p != NULL)//这种手段对于【第三类野指针的成因】无效
	{
		printf("%d\n", *p);//10
		//最终能够成功打印的原因：虽然局部变量的空间被销毁，但由于这块空间没有被覆盖，里面放的还是10，p找过去的时候打印出来是正常的；但不代表永远都是10
	}
	//这里的“销毁”指的是内存空间不属于当前程序，并不是真的销毁
	return 0;
}
//其二：
int test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	printf("hehe\n");
	if (p != NULL)
	{
		printf("%d\n", *p);
	}
	//hehe
	//随机值

	//解释：起先的函数栈帧被a覆盖，a销毁后栈帧被空出来，后来又被"hehe"覆盖，10就可能是其他值了

	return 0;
}
//总结：
//1.指针初始化 2.小心指针越界 3.指针指向空间释放及时置NULL 4.避免返回局部变量的地址 5.指针使用之前检查有效性

//4.指针运算
//4.1 指针 +/- 整数
#define N_VALUES 5
int main()
{
	float values[N_VALUES];//float values[5];
	float* vp;

	for (vp = &values[0]; vp < &values[N_VALUES];)//注意此处没有调整，直接进入下一轮判断
	{
		*vp++ = 0;

	//此写法展开：
	//*vp = 0;
	//vp++;
	}

	//最终结果为：该数组全部元素初始化为0

	return 0;
}
//辨析：*vp++ 和 (*vp)++
//*vp++ -> 第一步：*vp;
//         第二步：vp++;
//
//(*vp)++ ->vp解引用指向的对象++

//示例：
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	///写法一
	for (i = 0; i < sz; i++)
	{
		arr[i] = 1;
	}
	//写法二
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		*p = 1;
		p++;
	}
	//写法三
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}

//4.2 指针 - 指针
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);//9
	printf("%d\n", &arr[0] - &arr[9]);//-9

	return 0;
}
//|指针-指针|（二者的绝对值）得到的是指针和指针之间的元素的个数
//不是所有的指针都能相减，指向同一块空间的2个指针才能相减！

int my_strlen(char* str)
{
	char* tmp = str;//表示第一个元素的地址
	while (*str != '\0')
	{
		str++;
	}
	if (*str == '\0')
	{
		return str - tmp;
	}
	//也可以不用if直接写 return str - tmp; 
}

int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);

	printf("%d\n", ret);

	return 0;
}

//4.3 指针的关系运算(比较大小)
//示例：
#define nige 5
float value[nige];
float* vp;
//写法一：
int main()
{
	for (vp = &value[nige]; vp > &value[0];)
	{
		*--vp = 0;
	}
	return 0;
}
//写法二：
int main()
{
	for (vp = &value[nige]; vp > &value[0]; vp--)
	{
		*vp = 0;
	}
	return 0;
}
//实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行

//标准规定：允许 指向数组元素的指针 与 指向数组最后一个元素后面的那个内存位置的指针 比较，但是不允许与 指向第一个元素之前的那个内存位置的指针 进行比较

//5 指针和数组
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		/*printf("%d ", *(p + i));*/

		printf("%p ----- %p\n", &arr[i], p + i);
	}

	return 0;
}
//printf("%d ",arr[i]);
//printf("%d ",*(p+i));
//printf("%d ",*(arr+i));

//6.二级指针
int main()
{
	int a = 0;
	int* pa = &a;//pa是一个指针变量，一级指针变量
	int** ppa = &pa;//ppa是一个二级指针变量

	*pa = 20;
	*ppa = 20;

	printf("%d\n", a);//20

	return 0;
}
//加深理解：
//一：int* pa;
//int * pa
//* --> pa是指针变量
//int --> pa这个变量指向的那个a的类型为int
//
//二：int** ppa;
//* --> ppa是指针变量
//int* --> ppa指向的对象是 int* 类型

//总结：二级指针变量 是用来存放 (一级指针变量 的地址) 的


//7.指针数组:存放指针的数组就是指针数组
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	
	int arr[10];


	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	
	int* parr[10] = { &a,&b,&c };//parr就是存放指针的数组


	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *parr[i]);
	}

	return 0;
}
//利用指针数组模拟二维数组
int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };

	int* parr[3] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
//Q:为什么不解引用
//A: [] 相当于解引用
//   arr[i] ==> *(arr+i)
