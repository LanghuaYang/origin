

/*
#include "MyProject.h"
#include <iostream>
#include <string>
using namespace std;


//inheritance
class A {

public:
	static int s;
	int x;
	int i;
	int j = 12;
	A(int m) :i(m) { cout << "A base constructor" << endl; }
	void f()const { } //means this is a const
};
class B {

public:
	//static int s;
	int x;
	int i;
	int j = 12;
	B(int m) :i(m) { cout << "B base constructor" << endl; }

};

void test(int k, int j) {}

void main()
{
	A a = 12; //
	const A a = 12;
	A *r = &a;
	A & b = *r; //OK  b means *(q) 
	r++;
	cout << sizeof(b) << endl;
	A const *pc = &a; //*p = b error p++ OK 	A & b = *p; //error
	A * const qc = &a; //q++ error *q = b OK 
	A & b = *qc; //OK  b means *(q) 
	cout << sizeof(A) << " " << sizeof(B) << endl;
	int x = 12;
	int *p = &x; //ָ������Ҫ��ָ������ʼ��
				 //int *q = & p; //Ϊ�˷�ָֹ�����޵ݹ飬 ������ָ���ָ������ʼ��ָ����
				 //p ������Ϊint *�� ��&p������Ϊint**�� ������int**��������ʼ��int*���� Ҳ����˵�����Է��ʵ�int**��
	const int i = 10;
	cout << &p << p << *p << &x << x << endl;
	cout << &(A::f) << endl;//���Ϊ1 
	cout << &test << endl;
	int j;
	cin >> j;
}
*/