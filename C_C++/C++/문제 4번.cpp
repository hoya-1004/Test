#include<iostream>
using namespace std;

class Storage
{
private:
	int nData;
	int strg[20];
public:
	Storage(int nsize);
	void set_strg(int n, int size);
	int get_strg(int i);
	int get_nData();
	void showList();
	int add_Strg(Storage s2);
};
Storage::Storage(int nsize)
{
	nData=nsize;
}
void Storage::set_strg(int n, int size)
{
	strg[size]=n;
}
int Storage::get_strg(int i)
{
	return strg[i];
}
int Storage::get_nData()
{
	return nData;
}
void Storage::showList()
{
	for(int j=0;j<nData;j++)
	{
		cout<<get_strg(j)<<" ";
	}
}
int Storage::add_Strg(Storage s2)
{
	int n;
	int n1;
	int a=0;
	for(int i=0;i<nData;i++)
	{
		n=get_strg(i);
		set_strg(n,i);
		
	}
	nData=nData+s2.get_nData();
	for(int j=i;j<nData;j++)
	{
		n1=s2.get_strg(a);
		set_strg(n1,a);
		a++;
	}
	if(nData>20)
	{
		cout<<"������ ������ �� ����";
		return 0;
	}
	return nData;
}
void main(void)
{
	int n;

	Storage s1(4); // 4���� �ڷ��Է�
	cout<<"4���� �ڷ� �Է� :";
	for(int i=0;i<s1.get_nData();i++)
	{
		cin>>n;
		s1.set_strg(n,i);
	}
	Storage s2(10); // �ڷ� 10�� �Է�
	cout<<"10���� �ڷ� �Է� :";
	for(int j=0;j<s2.get_nData();j++)
	{
		cin>>n;
		s2.set_strg(n,j);
	}
	s1.add_Strg(s2);
	s1.showList();
	cout<<endl;
}


