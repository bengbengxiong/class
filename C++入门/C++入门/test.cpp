#include <iostream>
#include <time.h>
using namespace std;

//ȱʡ�������������庯��ʱΪ�����Ĳ���ָ��һ��Ĭ��ֵ���ڵ��øú���ʱ�����û��ָ��ʵ������ø�Ĭ
//��ֵ������ʹ��ָ����ʵ�Ρ�
void TestFunc1(int a = 0)
{
cout << a << endl;
}
//1. ��ȱʡ������������������������������ܼ���Ÿ�
//2. ȱʡ���������ں��������Ͷ�����ͬʱ����
//3. ȱʡֵ�����ǳ�������ȫ�ֱ���
void TestFunc2(int a, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
//��������
int Add(int left, int right)
{
	return left + right;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}
double Add(double left, double right)
{
	return left + right;
}
long Add(long left, long right)
{
	return left + right;
}

short Add(short left, short right)
{
	return left + right;
}

int Add(double left, int right)
{
	return left + right;
}


//int Add(int left, int right);

//extern "C" int Add(int left, int right);

//void TestFunc(int a = 10)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//void TestFunc1(int a)
//{
//	cout << "void TestFunc(int)" << endl;
//}


//void TestRef()
//{
//	int a = 10;
//	int& ra = a;//<====������������
//	printf("%p\n", &a);
//	printf("%p\n", &ra);
//}

//void TestRef()
//{
//	int a = 10;
//	// int& ra; // ����������ʱ�����
//	int& ra = a;
//	int& rra = a;
//	printf("%p %p %p\n", &a, &ra, &rra);
//}

//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}


//struct A
//{
//	int a[10000];
//};
//void TestFunc1(A a)
//{}
//void TestFunc2(A& a)
//{}struct A
//{
//	int a[10000];
//};
//A a;
//A TestFunc1()
//{
//	return a;
//}
//A& TestFunc2()
//{
//	return a;
//}
//void TestReturnByRefOrValue()
//{
//	// ��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		//TestFunc1();
//	size_t end1 = clock();
//	// ��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// �������������������֮���ʱ��
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//void TestRefAndValue()
//{
//	A a;
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(int*)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
//}



int main()
{
	/*TestFunc1();
	TestFunc1(10);*/


	//TestFunc2();
	

	Add(10, 20);
	Add(10.0, 20.0);
	//Add(10L, 20L);
	//Add(10, 20);
	
	
	/*Add(1.0, 2);
	cout << "sum=" << Add(1,2) << endl;*/
	
	//TestFunc();
	//TestFunc1();


	//TestRef();


	/*int& ret = Add(1, 2);
	Add(3, 4);
	cout << "Add(1,2) is :" << ret << endl;*/


	/*for (int i = 0; i < 10; ++i)
	{
		TestRefAndValue();
	}*/


	/*for (int i = 0; i < 10; ++i)
		TestReturnByRefOrValue();*/
	system("pause");
	return 0;


}