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
void ggbin::list_input()//�����Է�
{
	cout << " ���ڿ� ���� : " ;
	cin >> input;

	cout<<"���� �Է� :";
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
			if(ch==A.cstring[j])//�迭�� ī��Ʈ����
			{
				count[i]++;
			}
		}
	}
	max=count[0];//�ִ밪
	for(i=0; i<x; i++)
	{
		if(ndata<count[i])
		{
			max=count[i];
			ndata=i;
		}
		cout<<count[i]<<" ";
	}
	cout<<"\n���� ���� ���ڴ� :"<<A.cstring[ndata]<<"\n�󵵼��� :"<<(max+1)<<endl;

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
 
void com::init()      //���� ���� ���� �Է�
{
   int i;
   cout<<"�迭�� �Է��� ���� ���� ũ�� : ";
   cin >> size;
   for(i=0;i<size;i++)
   {
      cout<<"Cstrg["<<i<<"] : ";
      cin >> Cstrg[i];
   }
 
}
void com::listinput()      //1)����
{
   int i;
   cout << "���� �迭 : ";
   for(i=0;i<size;i++)
   {
      cout << Cstrg[i];
   }
   cout <<endl;
   cout << "�Էµ� ������ ���� : "<<size<<endl;
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
   cout <<"Ư�� ���� �Է� : ";
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
   cout <<"Ư�� ������ �󵵼��� : "<<num<<endl;
}*/
				

