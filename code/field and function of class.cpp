/*
#include "MyProject.h"
#include <iostream>
using namespace std;



field ָ��Ա����
1) private������������Բ�ͬ���࣬��ͬһ����˵����ͬ��instance֮����Ի������private�ĳ�Ա����
2)auto default constructor�Ǳ��������ģ�default constructorָ�����Լ�д�Ĳ��������Ĺ��캯��
3�����еĳ�Ա��������һ��hidden parameter����this
4��field�������instance�� ��Ա�����������౾��



1)new-delete mech table��һ����������heap�ڴ�����ͷŵı�������new�������ڴ���׵�ַ�ͳ���
2����Ҫdeleteʱ�Ҳ�����Ӧ���׵�ַ���ͻ����
3��delete�����͵��ڴ�ʱ���ȵ���destructor



1)friend could be a class/struct, a member function or a global function
2) decaleration of a function : void fun(parameter 1, .. , parameter n);
3)friend could access the private field of a class

class B {
public:
	void fun();
};
class A {
	int i;
public:
	int s;
	A() { i = 0; cout << "default constructor" << endl; }//default constructor
	A(int a) :i(a) { cout << "initializer list constructor" << endl; }//constructor
	~A() { cout << "destructor s=" << endl; }//destructor
	void f(A *b);
	friend B;//class as a friend
	friend void B::fun(); //member function as a friend
	friend int testfriendglobal(A *a);//global function as a friend
};


int testfriendglobal(A *a);

int testfriendglobal(A *a)
{
	cout << "test global" << a->i << endl;
	return 0;
}
void B::fun()
{
	A a;
	cout << a.i << endl; //��������classBΪA��friend�������ܷ���A��private field
}
void A::f(A *b)
{
	i = 10; //i means this->i
	cout << "i = " << i << endl;
	this->i = 20; // all functions of a class has a hidden parameter "this" this means &a, the pointer of the instance
	cout << "i = " << i << endl;
	b->i = 16; //����b��a����class A���͵ģ� ����a���Է���b��private��Ա����
	cout << b->i << endl; // ����ͨ��member function������ͬһ�����һ��instance��private field i
}

int main()
{
	A.f();// using f() you should has a instance of class A because the &a is a hidden parameter
	{
		A a(2);
		A b;
		a.i; //can not access i because i is a private field of class A
		a.f(&b);
		testfriendglobal(&a);
	}

	{
	A c;
	c.f(&b);
	}

	 c.f(&a);//error {}is a scope ������c����������ֻ��{}�ڲ�
	int * arr = new int[10];
	arr++;
	delete[]arr;//no error in compile, but can not find the arr in the new-delete mech table, so will have run-time error

	A * classarr = new A[10];
	for (int i = 0; i < 10; i++)
	{
	classarr[i].s = i;//set s
	}
	delete classarr; //��������classarr[0]����������
	delete[] classarr;
	int hold;
	cin >> hold;
}
*/
