//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
////�������ֵ������������´��ڼ̳й�ϵ�������Խ�����һ�������������
////��        Input iterators �ṩ�����ݵ�ֻ�����ʡ�ֻ����֧��++��==����=
////
////��        Output iterators �ṩ�����ݵ�ֻд���� ֻд��֧��++��
////
////��        Forward iterators �ṩ��д������������ǰ�ƽ��������� ��д��֧��++��==����=��
////
////��        Bidirectional iterators�ṩ��д������������ǰ������������д��֧��++��--����
////
////��        Random access iterators�ṩ��д����������������������ƶ�����д��֧��++��--��[n]��-n��<��<=��>��>=
//
//#define SIZE 100
//int iarray[SIZE];
//
//
//vector<int> intVector(100);
//
//void main()
//{
//	//ָ�������
//	iarray[20] = 50;
//	int* ip = find(iarray, iarray + SIZE, 50);
//	if (ip == iarray + SIZE)
//		cout << "50 not found in array" << endl;
//	else
//		cout << *ip << " found in array" << endl;
//
//	//�����Լ�����ĵ�����
//	intVector[20] = 50;
//	vector<int>::iterator intIter =
//		find(intVector.begin(), intVector.end(), 50);
//	if (intIter != intVector.end())
//		cout << "Vector contains value " << *intIter << endl;
//	else
//		cout << "Vector does not contain 50" << endl;
//
//	//����������
//	vector<int>::iterator first;
//	first = intVector.begin();
//	*first = 123;
//
//
//	//	���������������ͨ�����͡�
//	//	��������������ܹ�ʹ�� == �� != �����Ƿ���ȣ�ʹ��*���������ݣ�ʹ��++���������Ƶ���������һ��Ԫ�ػ򵽴�past - the - end ֵ��
//	//	Ϊ������������STL���������ʹ�����ǵģ���������һ��find()ģ�庯���Ķ��壺
//
//	//	template <class InputIterator, class T>
//	//	InputIterator find(InputIterator first, InputIterator last, const T& value) 
//	//	{
//	//		while (first != last && *first != value) ++first;
//	//		return first;
//	//	}
//	vector<int>::iterator result;
//	int value = 50;
//	result = find(intVector.begin(), intVector.end(), value);
//	cout << typeid (result).name() << endl;
//
//
//	//	���������
//	//	���������ȱʡֻд��ͨ�����ڽ����ݴ�һ��λ�ÿ�������һ��λ�á�
//	//	��������������޷���ȡ��������㲻�����κ������������㷨��ʹ����
//
//	double darray[10] =
//	{ 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9 };
//	vector<double> vdouble(10);
//
//	vector<double>::iterator outputIterator = vdouble.begin();
//	copy(darray, darray + 10, outputIterator);
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//  ǰ�Ƶ�����
//	//	ǰ�Ƶ������ܹ���д����ֵ�����ܹ���ǰ�ƽ�����һ��ֵ������û���ݼ���replace()�㷨��ʾ��ǰ�Ƶ�������ʹ�÷�����
//
//	//	template <class ForwardIterator, class T>
//	//	void replace(ForwardIterator first,
//	//	ForwardIterator last,
//	//	const T& old_value,
//	//	const T& new_value);
//	replace(vdouble.begin(), vdouble.end(), 1.5, 3.14159);
//	outputIterator = vdouble.begin();
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//	˫�������
//	//	˫�������Ҫ���ܹ���������reverse()�㷨Ҫ������˫���������Ϊ����:
//
//	//	template <class BidirectionalIterator>
//	//	void reverse(BidirectionalIterator first,
//	//	BidirectionalIterator last);
//	reverse(vdouble.begin(), vdouble.end());
//	outputIterator = vdouble.begin();
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//	������ʵ�����
//	//	������ʵ������ܹ�������˳��������ݣ��������ڶ�д���ݣ�����const��C++ָ��Ҳ��������ʵ���������
//	//	STL���������������ʹ��������ʵ�������������ʵ���������ʹ�ù�ϵ���������Ƚϡ�
//	//	template <class RandomAccessIterator>
//	//	void random_shuffle(RandomAccessIterator first,
//	//	RandomAccessIterator last);
//	random_shuffle(vdouble.begin(), vdouble.end());
//	outputIterator = vdouble.begin();
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//	���������
//	//	������������ڽ�ֵ���뵽�����С�����Ҳ������������
//	//	��Ϊ���ǽ����������ת��Ϊһ����������������copy()�������㷨�С����磬һ����������һ�������һ��ʸ������:
//
//	int i;
//	cin >> i;
//}