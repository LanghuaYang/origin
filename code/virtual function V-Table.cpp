//#include <iostream>
//using namespace std;
//
//class base1
//{
//public:
//	virtual void f()
//	{
//		cout << "This is base1's f()" << endl;
//	}
//	virtual void g()
//	{
//		cout << "This is base1's g()" << endl;
//	}
//};
//
//class base2
//{
//public:
//	virtual void j()
//	{
//		cout << "This is base2's j()" << endl;
//	}
//	virtual void k()
//	{
//		cout << "This is base2's k()" << endl;
//	}
//};
//
//class dev_class : public base1, public base2
//{
//public:
//	virtual void f()
//	{
//		cout << "This is derive's f()" << endl;
//	}
//	virtual void j()
//	{
//		cout << "This is derive's j()" << endl;
//	}
//	virtual void q()
//	{
//		cout << "This is derive's q()" << endl;
//	}
//};
//
//int main()
//{
//	dev_class d;
//	typedef void(*Fun_Ptr)(); //����Fun_Ptr����
//
//
//							  //V-Table 1
//	Fun_Ptr *fp = NULL; //Fun_Ptr���͵�ָ�룬ָ����
//	fp = &d.f; //����ָ��ĸ�ֵ
//	cout << &d << endl;//ȡd�ĵ�ַ
//	cout << (int *)&d << endl;//����ַǿ��ת��Ϊint *����
//	cout << *(int *)&d << endl;//ȡ��ַ�е����ݣ���V-Table
//	cout << (int*)*(int*)&d + 0 << endl;//��V-Table�еĵ�һ������ָ�룬ǿ��ת��Ϊint *����
//	fp = (Fun_Ptr *)(int*)*(int*)&d + 0;//�����������ַǿ������ת���󣬸�ֵ��fp
//	(*fp)();
//
//	//V-Table 2
//	Fun_Ptr *fp2 = NULL;
//	cout << &d << endl;//ȡd�ĵ�ַ
//	cout << ((int *)&d) + 1 << endl;//����ַǿ��ת��Ϊint *����,�ټ�1����ָ��vtable2��ָ��
//	cout << *(((int *)&d) + 1) << endl;//ȡ��ַ�е����ݣ���V-Table2
//	cout << (int*)*(((int *)&d) + 1) + 0 << endl;//��V-Table2�еĵ�һ������ָ�룬ǿ��ת��Ϊint *����
//	fp2 = (Fun_Ptr *)(int*)*(((int *)&d) + 1) + 0;//�����������ַǿ������ת���󣬸�ֵ��fp
//	(*fp2)();
//	fp2 = (Fun_Ptr *)(int*)*(((int *)&d) + 1) + 1;//�����������ַǿ������ת���󣬸�ֵ��fp
//	(*fp2)();
//	cout << *((int*)*(((int *)&d) + 1) + 2) << endl;//��ӡ������־��0��
//
//	int i;
//	cin >> i;
//	return 0;
//}