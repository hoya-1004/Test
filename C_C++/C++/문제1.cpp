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
int sum_odd(Storage A)  //홀수의 합 반환
{
	int hap=0;
	int n;
	for(int i=0;i<A.get_nData();i++)
	{
		if(A.get_strg(i)%2==1)
		{
			n=A.get_strg(i);
			hap+=n;
		}
	}
	return hap;
}
void main(void)
{
	int n;
	Storage s1(4); // 4개의 자료입력
	cout<<"4개의 자료 입력 :";
	for(int i=0;i<s1.get_nData();i++)
	{
		cin>>n;
		s1.set_strg(n,i);
	}
	cout<<s1.get_nData()<<" : ";
	s1.showList();
	cout<<endl;
	cout<<"홀수의 합 :";
	cout<<sum_odd(s1)<<endl;
	

	Storage s2(10); // 자료 10개 입력
	cout<<"10개의 자료 입력 :";
	for(int j=0;j<s2.get_nData();j++)
	{
		cin>>n;
		s2.set_strg(n,j);
	}
	cout<<s2.get_nData()<<" : ";
	s2.showList();
	cout<<endl;
	cout<<"홀수의 합 :";
	cout<<sum_odd(s2)<<endl;
}