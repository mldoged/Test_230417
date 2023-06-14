#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<search.h>
//求二进制数补码中1的个数
//int Count_bit1(unsigned int a)		//求模取余法求个数
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int Count_bit2(int a)					//移位法求个数
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int Count_bit3(int a)					//（余n-1赋值n）法求个数
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()										//求二进制数补码中1的个数
//{
//	int a = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	printf("请输入一个数>:");
//	scanf("%d", &a);
//	count1 = Count_bit1(a);
//	count2 = Count_bit2(a);
//	count3 = Count_bit3(a);
//	printf("1.补码中'1'的个数>: %d\n", count1);
//	printf("2.补码中'1'的个数>: %d\n", count2);
//	printf("3.补码中'1'的个数>: %d\n", count3);
//	return 0;
//}


//将字符串顺序调换后输出，不可使用库函数
//int My_strlen(char* arr)			//自定义strlen函数
//{
//	int sz = 0;
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		sz++;
//	}
//	return sz;
//}
//void String_reverse(char* arr)	//反转函数
//{
//	int sz = My_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[sz - 1];
//	arr[sz - 1] = '\0';
//	if(My_strlen(arr + 1) >= 2)
//	{ 
//		String_reverse(arr + 1);
//	}
//	arr[sz - 1] = tmp;
//}
//int main()
//{
//	char arr[] = { "abcdefg" };
//	int sz = My_strlen(arr);
//	String_reverse(arr);
//	printf("%s\n", arr);
//	printf("%d ", sz);
//	return 0;
//}
//int Check_sys(void)						//大小端测试
//{
//	int i = 1;
//	return *(char*)&i;
//	//输出1为小端，输出0为大端
//}
//int main()								//大小端测试
//{
//	int i = 0x11223344;
//	int ret = Check_sys();
//	if (ret = 1)
//		printf("小端模式\n");
//	else
//		printf("大端模式\n");
//	assert(&i != NULL);
//
//	return 0;
//	//char* (*pa)[5]
//}

//函数指针数组计算器
//void menu()
//{
//	printf("*******计算器********\n");
//	printf("**1、加法   2、减法**\n");
//	printf("**3、乘法   4、除法**\n");
//	printf("*******0、退出*******\n");
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*calc[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	menu();
//	do
//	{
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input < 0 || input>4)
//			printf("选择错误，重新输入!\n");
//		else if (input == 0)
//		{
//			printf("退出！\n");
//			break;
//		}
//		else
//		{
//			printf("请输入参数x:>");
//			scanf("%d", &x);
//			printf("请输入参数y:>");
//			scanf("%d", &y);
//			printf("%d\n", calc[input](x, y));
//		}
//	} while (input);
//	return 0;
//}

//qsort测试
//struct stu
//{
//char name[30];
//int age;
//};
//int cmp_int(void* x,void* y)
//{
//	return *(int*)x -*(int*)y;
//}
//int cmp_float(void* x, void* y)
//{
//	return *(float*)x - *(float*)y;
//}
//int cmp_StructS(void* x, void* y)
//{
//	return strcmp(((struct stu*)x)->name, ((struct stu*)y)->name);
//}
//int main()
//{
//	int a = 0;
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	float farr[10] = { 10.0,9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz2 = sizeof(farr) / sizeof(farr[0]);
//	struct stu sarr[3] = { {"tansisi",28},{"huangshun", 26} ,{"aa",1} };
//	int sz3 = sizeof(sarr) / sizeof(sarr[0]);
//	qsort(arr, sz1, sizeof(arr[0]), cmp_int);
//	for (a = 0; a < sz1; a++)
//	{
//		printf("%d ",arr[a]);
//	}
//	printf("\n");
//	qsort(farr, sz2, sizeof(farr[0]), cmp_float);
//	for (a = 0; a < sz2; a++)
//	{
//		printf("%f ", farr[a]);
//	}
//	printf("\n");
//	qsort(sarr, sz3, sizeof(sarr[0]), cmp_StructS);
//	//int* arr[3] = {&a};
//	return 0;
//}
//6.13  p36
int main()
{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//加上"\n"为7字节
// 
//p37
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//4*12 数组名单独放入括号内部，计算数组总大小
	//printf("%d\n", sizeof(a[0][0]));//4 计算第一个元素的字节大小
	//printf("%d\n", sizeof(a[0]));//16 计算第一行元素的字节大小
	//printf("%d\n", sizeof(a + 1));//8 没有sizeof(a),也没有&(a),所以此表达式中a仅代表首元素地址
	////在二维数组中，第一行整行为首元素，所以此表达式为第二行的地址
	//printf("%d\n", sizeof(*(a + 1)));//16，第二行所有元素的字节大小
	//printf("%d\n", sizeof(&a[0] + 1));//8，第二行的地址
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16，第二行所有元素的字节大小
	//printf("%d\n", sizeof(a[3]));//16，sizeof内表达式不参与运算，仅根据数据类型计算结果

	//int a[5] = { 1,2,3,4,5 };
	//int* ptr = (int*)(&a + 1);
	//printf("%d,&d\n", *(a + 1), *(ptr - 1));//2,5

	//struct Test
	//{
	//	int num;
	//	char* pcName;
	//	short sDate;
	//	char cha[2];
	//	short sBa[4];
	//}*p;//指针类型为struct Test *,结构体大小为24个字节
	//p = (struct Test*)0x100000;
	//printf("%p\n", p);
	//printf("%p\n", p + 0x1);//+(0x1*指针类型大小)
	//printf("%p\n", (unsigned long)p + 0x1);//转换为十进制整数后+1
	//printf("%p\n", (unsigned int*)p + 0x1);
	printf("%d\n", sizeof(char*));
	return 0;
}
