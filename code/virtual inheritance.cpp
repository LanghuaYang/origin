//#include <iostream>
//
//using namespace std;
//int count1 = 0;
//
//class Base {
//public:
//	//int value;
//	Base()
//	{
//		count1++;
//		//value = count1; 
//		cout << count1 << this << "Base constructed\n";
//	}
//	void f() {
//		//cout <<this->value <<"Base\n";
//	}
//	void g() {
//		//cout <<this->value <<"Base\n";
//	}
//};
//class Derived1 : virtual public Base {
//public:
//	void f() {
//		cout << "Derived1\n";
//	}
//};
//
//class Derived2 :virtual public Base {
//public:
//	void f() {
//		cout << "Derived2\n";
//	}
//};
//
//class Derived11 :public Derived1, public Derived2 {
//public:
//	void f() {
//		cout << "Derived11\n";
//	}
//	void d() {
//		cout << "Derived11\n";
//	}
//};
//void main()
//{
//	Derived11 c;
//	c.Base::f();//��ʯ����ֻ��Գ�Ա��������Ա�����Ļ����������ʹ�õ�һ�������this��Ϊhidden parameter
//				//c.value; //��������ȷӦ��ʹ���ĸ�value 
//	cout << sizeof(Base) << endl;
//	cout << sizeof(Derived1) << endl;
//	cout << sizeof(Derived2) << endl;
//	cout << sizeof(Derived11) << endl;
//	int q;
//	cin >> q;
//}