//#include <iostream>
//#include <string>
////˳������
//#include <vector>
//#include <list>
//#include <deque>
//#include <stack>
//#include <queue> //priority_queue
////��������
//#include <set>//multiset
//#include <map>//mulmap
//using namespace std;
//
////1,vectorʵ���Ƕ�̬���飬�����������(�±����).ֻ�ܴ�β��push/popԪ��
////2.listʵ����˫������������������ʣ�����ɾ��Ч�ʸ�. ���Դ�ͷβ����push/popԪ��
////3,deque��vector��list�Ľ�ϣ�֧��������ʺͿ��ٲ���ɾ�������Դ�ͷβ����push/popԪ��
////4,map��key/value�ɶԵģ�����key�������С���������first��key��second��value��
//void main()
//{
//	/*************************************Vector***************************************/
//	//1.����ͳ�ʼ��
//	vector<int> vec1;    //Ĭ�ϳ�ʼ����vec1Ϊ��
//	vector<int> vec2(vec1);  //ʹ��vec1��ʼ��vec2
//	vector<int> vec3(vec1.begin(), vec1.end());//ʹ��vec1��ʼ��vec2
//	vector<int> vec4(10);    //10��ֵΪ��Ԫ��
//	vector<int> vec5(10, 4);  //10��ֵΪ��Ԫ��
//
//							  //2.���ò�������
//	vec1.push_back(100);            //���Ԫ��
//	int size = vec1.size();         //Ԫ�ظ���
//	bool isEmpty = vec1.empty();    //�ж��Ƿ�Ϊ��
//	cout << vec1[0] << endl;        //ȡ�õ�һ��Ԫ��
//	vec1.insert(vec1.end(), 5, 3);    //��vec1.backλ�ò����ֵΪ��Ԫ��
//	vec1.pop_back();              //ɾ��ĩβԪ��
//	vec1.erase(vec1.begin(), vec1.end());//ɾ��֮���Ԫ�أ�����Ԫ��ǰ��
//	cout << (vec1 == vec2) ? true : false;  //�ж��Ƿ����==����=��>=��<=...
//	vector<int>::iterator iter = vec1.begin();    //��ȡ�������׵�ַ
//												  //vec1.clear();                 //���Ԫ��
//												  //vec1.reserve(vec1.size());    //��ת
//
//												  //3.����
//												  //�±귨
//	int length = vec1.size();
//	for (int i = 0; i<length; i++)
//	{
//		cout << vec1[i];
//	}
//	cout << endl << endl;
//
//	//��������
//	vector<int>::iterator iterator;
//	for (iterator = vec1.begin(); iterator != vec1.end(); iterator++)
//	{
//		cout << *iterator;
//	}
//
//	/*************************************List***************************************/
//	//1.����ͳ�ʼ��
//	list<int> lst1;          //������list
//	list<int> lst2(3);       //������������Ԫ�ص�list
//	list<int> lst3(3, 2); //������������Ԫ�ص�list
//	list<int> lst4(lst2);    //ʹ��lst2��ʼ��lst4
//	list<int> lst5(lst2.begin(), lst2.end());  //ͬlst4
//
//											   //2.���ò�������
//	lst1.assign(lst2.begin(), lst2.end());  //����ֵ
//	lst1.push_back(10);                    //���ֵ
//	lst1.push_front(11);
//	lst1.pop_back();                   //ɾ��ĩβֵ
//	lst1.pop_front();
//	lst1.begin();                      //������ֵ�ĵ�����
//	lst1.end();                            //����βֵ�ĵ�����
//	lst1.clear();                      //���ֵ
//	bool isEmpty1 = lst1.empty();          //�ж�Ϊ��
//	lst1.erase(lst1.begin(), lst1.end());                        //ɾ��Ԫ��
//	lst1.front();                      //���ص�һ��Ԫ�ص�����
//	lst1.back();                       //�������һ��Ԫ�ص�����
//	lst1.insert(lst1.begin(), 3, 2);         //��ָ��λ�ò����
//	lst1.rbegin();                         //���ص�һ��Ԫ�ص�ǰ��ָ��
//	lst1.remove(2);                        //��ͬ��Ԫ��ȫ��ɾ��
//	lst1.reverse();                        //��ת
//	lst1.size();                       //����Ԫ�ظ���
//	lst1.sort();                       //����
//	lst1.unique();                         //ɾ�������ظ�Ԫ��
//
//										   //3.����
//										   //��������
//	for (list<int>::const_iterator iter = lst1.begin(); iter != lst1.end(); iter++)
//	{
//		cout << *iter;
//	}
//
//	/*************************************deque***************************************/
//	//1.����ͳ�ʼ��
//	deque<int> deq1;
//	deque<int> deq2(10);
//	deque<int> deq3(10, 4);
//	deque<int> deq4(deq2);    //ʹ��deq2��ʼ��deq4
//	deque<int> deq5(deq2.begin(), deq2.end());  //ͬdeq4
//
//												//2.���ò�������
//	deq1.push_back(10);
//	deq1.push_front(10);
//	deq1.insert(deq1.begin(), 10, 2);
//	deq1.pop_back();
//	deq1.pop_front();
//
//	//3������
//	//�±귨
//	for (int i = 0; i < deq1.size(); i++)
//	{
//		cout << deq1[i];
//	}
//	cout << endl << endl;
//
//	//��������
//	deque<int>::iterator listiter = deq1.begin();
//	for (; listiter != deq1.end(); listiter++)
//	{
//		cout << *listiter;
//	}
//
//	/************************************* Map ***************************************/
//	//1.����ͳ�ʼ��
//	map<int, string> map1;                  //��map
//
//											//2.���ò�������
//	map1[3] = "Saniya";                    //���Ԫ��
//	map1.insert(map<int, string>::value_type(2, "Diyabi"));//����Ԫ��
//	map1.insert(pair<int, string>(1, "Siqinsini"));
//	map1.insert(make_pair<int, string>(4, "V5"));
//	string str = map1[3];                  //����keyȡ��value��key�����޸�
//	map<int, string>::iterator iter_map = map1.begin();//ȡ�õ������׵�ַ
//	int key = iter_map->first;             //ȡ��eky
//	string value = iter_map->second;       //ȡ��value
//	map1.erase(iter_map);                  //ɾ������������
//	map1.erase(3);                         //����keyɾ��value
//	map1.size();                       //Ԫ�ظ���
//	map1.empty();                       //�жϿ�
//	map1.clear();                      //�������Ԫ��
//
//									   //3.����
//	for (map<int, string>::iterator mapiter = map1.begin(); mapiter != map1.end(); mapiter++)
//	{
//		cout << mapiter->first << " " << mapiter->second;
//	}
//	cout << endl;
//	int i;
//	cin >> i;
//}
