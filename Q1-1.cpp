/**********************************************************
��Ŀ������
�ж�һ���ַ������Ƿ�û���ظ����ַ���ֻ��ʹ�û��������ݽṹ
Date��2014-03-15
**********************************************************/
#define MAX 26
#include<iostream>
#include<cstring>
using namespace std;

/*
�ж��Ƿ����ظ��ַ�
*/
bool unqString(string s)
{
	unsigned int i;
	unsigned int len = s.length();
	unsigned int arr[MAX];
	memset(arr,0,sizeof(arr));
	//���ζ��ַ���Ӧ������λ���ϵ�ֵ�����ж�
	//0��ʾ��û�г��ָ��ַ�,1��ʾ�����˸��ַ�
	//����Ѿ�Ϊ1�ˣ��ٴγ��ָ��ַ�����˵���������ظ�
	for(i=0;i<len;i++)
	{
		unsigned int index = s[i] - 'a';
		if(arr[index] == 0)
			arr[index] = 1;
		else
			return false;
	}
	return true;
}

int main()
{
	string s1 = "abcdef";
	string s2 = "advcgbdfrvst";
	if(unqString(s1))
		cout<<"s1->yes"<<endl;	
	else
		cout<<"s1->no"<<endl;
	if(unqString(s2))
		cout<<"s2->yes"<<endl;	
	else
		cout<<"s2->no"<<endl;
	return 0;
}