//#include <iostream>
//using namespace std;
////
//////ͬ������
////class A {
////public:
////	 virtual void f() { cout << "A" << endl; }
////	//int f() {}
////	//int f(int x) {}
////	//void f(int x) {}
////	//void f() { cout << "a"; }
////	//static void f(int x) { i = 2; cout << "static"; }
////	//void f() const { cout << "const"; }
////	//const void f() {}
////
////};
////class B : public A {
////public:
////	void  f(int x) { cout << "B" << endl; }
////	//using A::f;
////	//void f(int x) { cout << "B" << endl; }
////	//int f() { cout << "B" << endl; return 0; }
////	//void f(int x) { cout << "B" << endl;  }
////};
////
////struct A {
////	A(const std::string & s) {}
////};
////
////void func(const A & a) {
////}
////
////void main()
////{
////	func("one");                  // error
////	func(A("two"));	        // ok
////	func(string("three"));   // ok
////	int i; 
////	cin >> i;
////}
//
///*
//* Complete the function below.
//*/
//void StairCase(int n) {
//	int i, j, k;
//	for (i = 0; i< n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (k = j; k < n; k++)
//		{
//			printf("#");
//		}
//		printf("\n");
//	}
//}
//
//long sumOfIntegers(int arr_size, int* arr)
//{
//	long sum = 0;
//	for (int i = 0; i < arr_size; i++)
//	{
//		sum += (long)*(arr + i);
//	}
//	return sum;
//}
//
//class A {
//public:
//	int x;
//	A(int xx) : x(xx) {}
//	A(const A & a) { x = a.x; x++; }
//	void operator =(const A &a) { x = a.x; x--; }
//	//void f(char a[]) { cout << "array" << endl; }
//	void f(char *a) { cout << "pointer of first element" << endl; }
//};
////1.����������ָ�룬�����ǿ�����ʽת��Ϊָ��
////2.��������һ����������ݽṹ�����Եó�����Ĵ�С
////3.����������Ϊ�βν���ֵ����ʱ����ʧȥ������������ݽṹ
////4.��������һ������
//void main()
//{
//	A kelasi(5);
//	char A[] = { 'A','B','C','D','E','F' };//û��\0������
//	char B[] = { "ABCDEF" };//��\0������
//	char * B1 = &B[0];
//	cout << strlen(A) << strlen(B) << endl;//strlen����\0ֹͣ���Ҳ�����\0.
//	char * C = new char[7];
//	cout << B << endl;
//	cout << B1 << endl;
//	cout << (int *)B1 << endl;
//	cout << *B1 << endl;
//	kelasi.f(B);
//	int  a[4] = { 0,1,2,3 };
//	char b[4] = { '0' };
//	int(*p)[4] = &a;
//	cout << sizeof(a) << " " << sizeof(b) << typeid (p).name() << " " << p << " " << sizeof(*p) << " " << (*p)[1] << endl;
//	int i;
//	cin >> i;
//}
