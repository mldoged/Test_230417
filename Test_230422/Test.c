#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<search.h>
//���������������1�ĸ���
//int Count_bit1(unsigned int a)		//��ģȡ�෨�����
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
//int Count_bit2(int a)					//��λ�������
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int Count_bit3(int a)					//����n-1��ֵn���������
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()										//���������������1�ĸ���
//{
//	int a = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	printf("������һ����>:");
//	scanf("%d", &a);
//	count1 = Count_bit1(a);
//	count2 = Count_bit2(a);
//	count3 = Count_bit3(a);
//	printf("1.������'1'�ĸ���>: %d\n", count1);
//	printf("2.������'1'�ĸ���>: %d\n", count2);
//	printf("3.������'1'�ĸ���>: %d\n", count3);
//	return 0;
//}


//���ַ���˳����������������ʹ�ÿ⺯��
//int My_strlen(char* arr)			//�Զ���strlen����
//{
//	int sz = 0;
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		sz++;
//	}
//	return sz;
//}
//void String_reverse(char* arr)	//��ת����
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
//int Check_sys(void)						//��С�˲���
//{
//	int i = 1;
//	return *(char*)&i;
//	//���1ΪС�ˣ����0Ϊ���
//}
//int main()								//��С�˲���
//{
//	int i = 0x11223344;
//	int ret = Check_sys();
//	if (ret = 1)
//		printf("С��ģʽ\n");
//	else
//		printf("���ģʽ\n");
//	assert(&i != NULL);
//
//	return 0;
//	//char* (*pa)[5]
//}

//����ָ�����������
//void menu()
//{
//	printf("*******������********\n");
//	printf("**1���ӷ�   2������**\n");
//	printf("**3���˷�   4������**\n");
//	printf("*******0���˳�*******\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input < 0 || input>4)
//			printf("ѡ�������������!\n");
//		else if (input == 0)
//		{
//			printf("�˳���\n");
//			break;
//		}
//		else
//		{
//			printf("���������x:>");
//			scanf("%d", &x);
//			printf("���������y:>");
//			scanf("%d", &y);
//			printf("%d\n", calc[input](x, y));
//		}
//	} while (input);
//	return 0;
//}

//qsort����
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
//	printf("%d\n", sizeof(arr));//����"\n"Ϊ7�ֽ�
// 
//p37
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//4*12 �������������������ڲ������������ܴ�С
	//printf("%d\n", sizeof(a[0][0]));//4 �����һ��Ԫ�ص��ֽڴ�С
	//printf("%d\n", sizeof(a[0]));//16 �����һ��Ԫ�ص��ֽڴ�С
	//printf("%d\n", sizeof(a + 1));//8 û��sizeof(a),Ҳû��&(a),���Դ˱��ʽ��a��������Ԫ�ص�ַ
	////�ڶ�ά�����У���һ������Ϊ��Ԫ�أ����Դ˱��ʽΪ�ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(a + 1)));//16���ڶ�������Ԫ�ص��ֽڴ�С
	//printf("%d\n", sizeof(&a[0] + 1));//8���ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16���ڶ�������Ԫ�ص��ֽڴ�С
	//printf("%d\n", sizeof(a[3]));//16��sizeof�ڱ��ʽ���������㣬�������������ͼ�����

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
	//}*p;//ָ������Ϊstruct Test *,�ṹ���СΪ24���ֽ�
	//p = (struct Test*)0x100000;
	//printf("%p\n", p);
	//printf("%p\n", p + 0x1);//+(0x1*ָ�����ʹ�С)
	//printf("%p\n", (unsigned long)p + 0x1);//ת��Ϊʮ����������+1
	//printf("%p\n", (unsigned int*)p + 0x1);
	printf("%d\n", sizeof(char*));
	return 0;
}
