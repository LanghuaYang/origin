/*
#include <iostream> 
#include <vector>
//#include <hashmap>
using namespace std;

//quick sort
���ڿ����������ܽ�
1��i =L; j = R; ����׼���ڳ��γɵ�һ����a[i]��
2��j--�ɺ���ǰ�ұ���С�������ҵ����ڳ�������ǰһ����a[i]�С�
3��i++��ǰ����ұ�����������ҵ���Ҳ�ڳ������ǰһ����a[j]�С�
4�����ظ�ִ��2��3������ֱ��i==j������׼������a[i]�С�

int partition(int a[], int low, int high)
{
	int i = low, j = high, x = a[low];//���Ƚ���׼���ڳ����г�һ����
	while (i < j)
	{
		while (i < j && a[j] >= x) // ���������ҵ�һ��С��x����  
			j--;
		if (i < j)
			a[i] = a[j];//�����С��x��������ǰһ������
		while (i < j && a[i]< x) // ���������ҵ�һ�����ڵ���x����  
			i++;
		if (i < j)
			a[j] = a[i];//��������ڵ���x��������ǰһ������
	}
	a[i] = x; //��i==jʱ������׼������a[i]��
	return i;
}

void quick_sort1(int a[], int low, int high)
{
	if (low < high)
	{
		int k = partition(a, low, high);
		quick_sort1(a, low, k - 1);
		quick_sort1(a, k + 1, high);
	}
}
int main()
{
	int a[] = { 67,23,89,35,28,90,10 };
	vector<int> v;
	//hashmap<int> h;
	v.push_back(1);
	quick_sort1(a, 0, 6);
	for (int i = 0; i < 7; i++)
		cout << a[i] << " " << endl;
	int i;
	cin >> i;
}*/