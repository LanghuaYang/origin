//#include <iostream>
//using namespace std;
////�˻ʺ����� DFS
////int a[n];
////��ʼ������a[]�Ȳ���
////...
////void dfs(int cur)
////{
////	int i;
////	if (cur>n)
////		//ͳ�ơ���������;  
////	else
////	{
////		for (i = �½�; i <= �Ͻ�; ++i)  // ö��i���п��ܵ�·��  
////		{
////			if (fun(cur, i))                 // �����޽纯����Լ������  
////			{
////				a[cur] = i;
////				...                 // ��������,���ñ�־��  
////					dfs(cur + 1);
////				//����ǰ������������a[cur]�ÿ�ֵ,��־��0�ȣ�;  
////			}
////		}
////	}
////}
//int queen[8];//��ռ� �±�Ϊ������ֵΪ����
//int count1;
//
////��֦����  
//bool IsSafe(int col, int row)
//{
//	for (int i = 0; i < col; i++)
//	{
//		//�ж��Ƿ���ͬһ�л�ͬһб��  
//		if (queen[i] == row
//			|| abs(col - i) == abs(row - queen[i])) return false;
//	}
//	return true;
//}
////DFS�㷨
//void DFS(int cur)
//{
//	if (cur == 8)
//	{
//		count1++;
//		//print queen[];
//	}
//	else
//	{
//		for (int i = 0; i < 8; i++)
//		{
//			if (IsSafe(cur, i))
//			{
//				queen[cur] = i;
//				DFS(cur + 1);
//			}
//		}
//	}
//}
//
//int main()
//{
//	DFS(0);
//	cout << count1 << endl;
//	int i;
//	cin >> i;
//	return 0;
//}