//#include <iostream>
//using namespace std;
//
////��ģ��������<typename> ���γ�������
////��ģ�岻����
////ͨ�õ���ģ��
//template<typename T>
//class Test {
//public:
//	T m_x;
//	T m_y;
//	Test(T x, T y) :m_x(x), m_y(y) {}
//	Test(Test<T> const & that) :m_x(that.m_x), m_y(that.m_y) {}
//	Test<T>& operator =(Test<T> *that)
//	{
//		if (this != that)
//		{
//			this->m_x = that->m_x;
//			this->m_y = that->m_y;
//		}
//		return *this;
//	}
//	T max(void)
//	{
//		return m_x > m_y ? m_y : m_x;
//	}
//};
////���ػ���Ա����
//template<>
//char const * Test<char const *>::max(void) {
//	return strcmp(m_x, m_y) < 0 ? m_y : m_x;
//}
////��ģ����ػ� ȫ���ػ�
////template<>
////class Test<char const*> {
////public:
////	char const* m_x;
////	char const* m_y;
////	Test(char const*x, char const *y) :m_x(x), m_y(y) {}
////	char const* max(void) const {
////		return strcmp(m_x, m_y) < 0 ? m_y : m_x;
////	}
////};
//
//void main()
//{
//	Test<int> c1(123, 456);
//	Test<int> c2(c1);
//	cout << c2.m_x << c2.m_y << endl;
//	Test<int> c3(789, 12);
//	c2 = c3;
//	cout << c2.m_x << c2.m_y << endl;
//	int i;
//	cin >> i;
//}