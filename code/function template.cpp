//#include <iostream>
//using namespace std;
//#define MAX(T) \
//T max_##T (T x, T y) { \
//return x < y?y:x;\
//}
//MAX(int)
//MAX(double)
//MAX(string)
//
////template<class T> //��ʽд�����������ϼ��ݣ������Ȼ������ �������ײ������
//template<typename T>
//T max(T x, T y)
//{
//	return x < y ? y : x;
//}
//
//template<typename T>
//void foo(T const &x)
//{
//	cout << typeid (x).name() << endl;
//}
//template<typename T>
//void fun(T x)
//{
//	cout << typeid (x).name() << endl;
//}
//template<typename R, typename T>
//R bar(T x, T y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i;
//	cout << typeid (i).name() << endl;
//	char e[256];
//	foo(e);//T const &x  e������������
//	fun(e);//T x         e���������һ��Ԫ�صĵ�ַ
//	i = bar<int, int>(i, i);
//	i = bar<int>(i, i);//��������
//	cin >> i;
//	return 0;
//}