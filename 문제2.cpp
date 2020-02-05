#include<iostream>
#include<conio.h>
using namespace std;

class ggbin
{
private:
	char cstring[30];
	int input;
public:
	void list_input();
	friend void cntachar(ggbin A,int x);
};
void ggbin::list_input()//문자입력
{
	cout << " 문자열 길이 : " ;
	cin >> input;

	cout<<"문자 입력 :";
	for(int i=0; i<input; i++)
	{
		cin>>cstring[input];
	}
}

void cntachar(ggbin A)
{
	int i,j;
	int ndata;
	int max;
	int count[30]={0};
	char ch;
	for(i=0;i<A.input;i++)
	{
		ch=A.cstring[i];
		for(j=0;j<A.input;j++)
		{
			if(ch==A.cstring[j])//배열에 카운트해줌
			{
				count[i]++;
			}
		}
	}
	max=count[0];//최대값
	for(i=0; i<x; i++)
	{
		if(ndata<count[i])
		{
			max=count[i];
			ndata=i;
		}
		cout<<count[i]<<" ";
	}
	cout<<"\n제일 많은 문자는 :"<<A.cstring[ndata]<<"\n빈도수는 :"<<(max+1)<<endl;

}

void main()
{
	ggbin A;
	
	A.list_input();
	cntachar(A);
}

/*#include <iostream>
#include <string.h>
using namespace std;
 
class com
{
private :
   char Cstrg[30];
   int size;
public :
   void init();
   void listinput();
   int set();
   char get(int i);
};
 
void com::init()      //문자 수와 문자 입력
{
   int i;
   cout<<"배열에 입력할 문자 수의 크기 : ";
   cin >> size;
   for(i=0;i<size;i++)
   {
      cout<<"Cstrg["<<i<<"] : ";
      cin >> Cstrg[i];
   }
 
}
void com::listinput()      //1)문제
{
   int i;
   cout << "문자 배열 : ";
   for(i=0;i<size;i++)
   {
      cout << Cstrg[i];
   }
   cout <<endl;
   cout << "입력된 문자의 수는 : "<<size<<endl;
}
 
int com::set()
{
   return size;
}
char com::get(int i)
{
   return Cstrg[i];
}
 
int cntchar(com a)
{
 
   char k;
   int i,count=0;
   cout <<"특정 문자 입력 : ";
   cin >> k;
 
   for(i=0;i<a.set();i++)
   {
      if(k == a.get(i)){
         count++;
      }
   }
   return count;
}
 
 
 
void main()
{
   int num;
   com x;
   x.init();
   x.listinput();
   num = cntchar(x);
   cout <<"특정 문자의 빈도수는 : "<<num<<endl;
}*/
				

