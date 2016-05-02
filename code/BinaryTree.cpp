//#include <iostream>
//
//using namespace std;
//
////������������ǰ��յݹ�ķ�ʽ����ģ���˵ݹ���㷨�ڶ�������صı��������зǳ���Ч
////�����ķ���Ҳ����
//struct BiTreeNode
//{
//	char data;
//	struct BiTreeNode *lchild, *rchild;
//};
////					A
////		B						C
////	D		E           F				G
////H		I       K            M
////����ǰ�������������һ����
//
////����ABDH  I  E K  CF M  G  ����������ͼ����
////Լ������ǰ������ķ�ʽ������
//void CreateTree(BiTreeNode * &T)
//{
//	char c;
//	c = cin.get();
//	if (' ' == c)
//		T = NULL;
//	else
//	{
//		T = new BiTreeNode;
//		T->data = c;
//		CreateTree(T->lchild);
//		CreateTree(T->rchild);
//	}
//}
////ǰ�������
//void PreOrderTraverse(BiTreeNode * &T)
//{
//	if (T)
//	{
//		//visit(T);
//		cout << T->data << " ";
//		PreOrderTraverse(T->lchild);
//		PreOrderTraverse(T->rchild);
//	}
//}
////���������
//void MidOrderTraverse(BiTreeNode * &T)
//{
//	if (T)
//	{
//		MidOrderTraverse(T->lchild);
//		cout << T->data << " ";
//		MidOrderTraverse(T->rchild);
//	}
//}
////���������
//void BackOrderTraverse(BiTreeNode * &T)
//{
//	if (T)
//	{
//		BackOrderTraverse(T->lchild);
//		BackOrderTraverse(T->rchild);
//		cout << T->data << " ";
//	}
//}
////����������Ľڵ���
//int CountNode(BiTreeNode * &T)
//{
//	if (!T) return 0;
//	else
//	{
//		int L = CountNode(T->lchild);
//		int R = CountNode(T->rchild);
//		return L + R + 1;
//	}
//}
//
////��������������
//int Depth(BiTreeNode * &T)
//{
//	if (!T) return 0;
//	else
//	{
//		int L = Depth(T->lchild);
//		int R = Depth(T->rchild);
//		return L>R ? (L + 1) : (R + 1);
//	}
//}
////ɾ����
//void DeleteTree(BiTreeNode * &T)
//{
//	if (T)
//	{
//		DeleteTree(T->lchild);
//		DeleteTree(T->rchild);
//		delete T;
//		T = NULL;
//	}
//}
//
//void main()
//{
//	BiTreeNode *Root;
//	CreateTree(Root);
//	PreOrderTraverse(Root);
//	cout << endl;
//	MidOrderTraverse(Root);
//	cout << endl;
//	BackOrderTraverse(Root);
//	cout << endl;
//	cout << CountNode(Root) << endl;
//	cout << Depth(Root) << endl;
//	DeleteTree(Root);
//	int i;
//	cin >> i;
//}