//#include <iostream>
//using namespace std;
//
//int leftchild(int index)
//{
//	return index * 2 + 1;
//}
//void AdjustDown(int A[], int i, int len)
//{
//	int temp = A[i]; // �ݴ�A[i] 
//
//	for (int largest = leftchild(i); largest<len; largest = leftchild(largest))
//	{
//		if (largest != len - 1 && A[largest + 1]>A[largest])
//			++largest;     // ������ӽ��� 
//		if (temp < A[largest])
//		{
//			A[i] = A[largest];
//			i = largest;     //��¼�������λ�� 
//		}
//		else
//			break;
//	}
//	A[i] = temp;  // ��ɸѡ����ֵ��������λ�� 
//}
//
//void BuildMaxHeap(int A[], int len)
//{
//	for (int i = len / 2 - 1; i >= 0; --i) // ���һ����Ҷ�ӽڵ� 
//		AdjustDown(A, i, len);
//}
//void HeapSort(int A[], int n)
//{
//	BuildMaxHeap(A, n);    // ��ʼ���� 
//	for (int i = n - 1; i>0; --i) // n-1�˵Ľ����ͽ��ѹ���  
//	{
//		// ������ĶѶ�Ԫ�أ��Ͷѵ�Ԫ�ؽ����� 
//		A[0] = A[0] ^ A[i];
//		A[i] = A[0] ^ A[i];
//		A[0] = A[0] ^ A[i];
//		// ��������ʣ���n-1��Ԫ������ɶ� 
//		AdjustDown(A, 0, i);
//	}
//}
//void fun()
//{
//	cout << "test function pointer" << endl;
//}
//int main()
//{
//	int a[10] = { 4,1,3,2,16,9,10,14,8,7 };
//	BuildMaxHeap(a, 10);
//	HeapSort(a, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	//void(*f)(void);
//	//f = &fun;
//	//f();
//	//cout << sizeof("abcdef") << endl;
//	//cout << sizeof(char *) << endl;
//	int i;
//	cin >> i;
//	return 0;
//}