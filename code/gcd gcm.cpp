
#include "MyProject.h"
#include <iostream>
using namespace std;

int gcd(int v1, int v2);  //�����Լ�� greatest common divisor
int gcm(int v1, int v2);  //�����Լ�� greatest common divisor

int gcd(int v1, int v2)  //�����Լ�� greatest common divisor
{
	while (v2)
	{
		int temp = v2;
		v2 = v1%v2;
		v1 = temp;
	}
	/*
	if(v2 != 0)
	gcd(v2, v1%v2);//�ݹ�ʵ��
	*/
	return v1;
}

int gcm(int v1, int v2) //����С������ smallest common multipler
{
	int m = 0, t = gcd(v1, v2);
	m = v1*v2 / t;
	return m;
}