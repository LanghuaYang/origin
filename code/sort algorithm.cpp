//
//#include <iostream>
//#include <vector>
//using namespace std;
////bubble sort �㷨���Ӷ�ΪO(n^2)
////����С��������a[0]λ�ã��ٽ�ʣ����С�ķ���a[1]λ�� ����λ�ý���
//void bubblesort(int a[], int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = N - 1; j > i; j--)
//		{
//			if (a[j] < a[j - 1])
//			{
//				swap(a[j], a[j - 1]);
//			}
//		}
//	}
//}
////select sort �㷨���Ӷ�ΪO(n^2)
////����С��������a[0]λ�ã��ٽ�ʣ����С�ķ���a[1]λ�� 
////ÿ�ֶ���a[i]Ԥ��Ϊ��С�ģ����������н���������a[i]���жԱȣ�����
//void selectsort(int a[], int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		int & min = a[i];
//		for (int j = N - 1; j > i; j--)
//		{
//			if (a[j] < min)
//			{
//				swap(a[j], min);
//			}
//		}
//	}
//}
////insert sort �㷨���Ӷ�O(n^2)
////��a[1]��ʼ��������֮ǰ��a[0]�Ƚϲ����뵽���ʵ�λ��
////֮���a[2]��0-1������Ѱ�Һ��ʵ�λ�ò���
////��֤a[n]֮ǰ��a[0]-a[n-1]������ģ�����ֻ��Ҫ��a[n]���뵽�±���С��һ�����������ǰ�档
//void insertsort(int a[], int N)
//{
//	int j = 0;
//	for (int i = 1; i < N; i++)
//	{
//		int  current = a[i];
//		j = i;
//		while (j > 0 && a[j - 1] > current)//ֻ����������Ż��loop����������a[0]-a[j-1]������ģ���֤��current��λ����ȷ
//		{
//			a[j] = a[j - 1];//ÿ�ν���current(current���Ǵ�ʱ��a[j])��ѭ����a[j-1]��λ��
//			a[j - 1] = current;
//			j--;
//		}
//	}
//}
////mergesort �鲢���� �㷨���Ӷ�O(nlogn)
////������ݹ���۰���� ���շ�Ϊ��С����
////��С������������midΪ�磬�������ߵ����������
////�����������������merge��temp�����У��������ԭ����a��
//void mergearray(int a[], int low, int mid, int high, int temp[])
//{
//	int i = low, j = mid + 1;
//	int m = mid, n = high;
//	int k = 0;
//
//	while (i <= m && j <= n)
//	{
//		if (a[i] <= a[j])
//			temp[k++] = a[i++];
//		else
//			temp[k++] = a[j++];
//	}
//
//	while (i <= m)
//		temp[k++] = a[i++];
//
//	while (j <= n)
//		temp[k++] = a[j++];
//
//	for (i = 0; i < k; i++)
//		a[low + i] = temp[i];
//}
//void Partition(int a[], int low, int high, int temp[])
//{
//	if (low < high)
//	{
//		int mid = (low + high) / 2;
//		Partition(a, low, mid, temp);
//		Partition(a, mid + 1, high, temp);
//		mergearray(a, low, mid, high, temp);
//	}
//}
//void mergesort(int a[], int N)
//{
//	int *temp = new int[N];
//	int low = 0, high = N - 1;
//	Partition(a, low, high, temp);
//	delete[]temp;
//}
////quick sort �㷨���Ӷ�ΪO(nlogn)
////���ڿ����������ܽ�
////1��i =L; j = R; ����׼���ڳ��γɵ�һ����a[i]��
////2��j--�ɺ���ǰ�ұ���С�������ҵ����ڳ�������ǰһ����a[i]�С�
////3��i++��ǰ����ұ�����������ҵ���Ҳ�ڳ������ǰһ����a[j]�С�
////4�����ظ�ִ��2��3������ֱ��i==j������׼������a[i]�С�
//
//int partition(int a[], int low, int high)
//{
//	int i = low, j = high, x = a[low];//���Ƚ���׼���ڳ����г�һ����
//	while (i < j)
//	{
//		while (i < j && a[j] >= x) j--;	// ���������ҵ�һ��С��x����
//		if (i < j) a[i] = a[j];			//�����С��x��������ǰһ������
//		while (i < j && a[i]< x) i++;	// ���������ҵ�һ�����ڵ���x����
//		if (i < j) a[j] = a[i];			//��������ڵ���x��������ǰһ������
//	}
//	a[i] = x;						//��i==jʱ������׼������a[i]��
//	return i;
//}
//
//void quick_sort(int a[], int low, int high)
//{
//	if (low < high)
//	{
//		int k = partition(a, low, high);
//		quick_sort(a, low, k - 1);
//		quick_sort(a, k + 1, high);
//	}
//}
////Radix�����ֳ�ΪͰ����
////�ӵ�λ����λ����ÿһ�����Ž�0-9��Ͱ��
////��Ͱ�����������������
////ֱ��ֻ��0��Ͱ�������֣� ����
////void Radixsort(int a[], int N)
////{
////	int d = 0;//���λ��
////	for (int b = 0; b < d; b++) //λ��
////	{
////		for (int i = 0; i < 10; i++)//Ͱ����
////		{
////			vector<int> bucket;//����Ͱ
////			for (int j = 0; j < N; j++)//��������
////			{
////				if ((a[j] / 10^b) % 10 == i) //�ж�a[j]�����ĸ�Ͱ��
////				{
////					bucket.push_back = a[j]; //��a[j]�Ž�Ͱ��
////				}
////			}
////		}
////		for (int i = 0; i < 10; i++)//��Ͱ������ݵ�������
////		{
////			a[i] = bucket;//��ʮ��Ͱ�������������a��
////		}
////	}
////}
//void foo(char a[], int N)
//{
//	static int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		char &current = a[i];
//		for (int j = 0; j < N; j++)
//		{
//			if (i != j)
//			{
//				swap(current, a[j]);
//				count++;
//				cout << count << ":" << endl;
//				for (int k = 0; k < N; k++)
//				{
//					cout << a[k] << " ";
//				}
//				swap(current, a[j]);
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 67,23,89,35,2,9,78,98,28,90,10 };
//	//bubble(a, 11);
//	//selectsort(a, 11);
//	//insertsort(a, 11);
//	//quick_sort(a, 0, 11);
//	//mergesort(a, 11);
//	//for (int i = 0; i < 11; i++)
//	//cout << a[i] << " ";
//	char s[] = { 'a','b','c' };
//	foo(s, 3);
//	int i;
//	cin >> i;
//}