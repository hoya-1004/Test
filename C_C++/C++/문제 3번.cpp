#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class UnderGradStudent
{
protected:
	char name[20];
	char department[20];
	int grade;
};

class DormStudent
{
protected:
	char building[20];
	int roomNumber;
};

class UnderGrad_Dorm : public UnderGradStudent, public DormStudent
{
public:
	void modify(UnderGrad_Dorm arr[])
	{
		int i;
		ifstream fin;
		fin.open("student.txt");

		if(fin.fail())
		{
			cout<<"���� ���� ����"<<endl;
			return;
		}

		for(i=0; i<15; i++)
		{
			fin>>arr[i].name>>arr[i].department>>arr[i].grade>>arr[i].building>>arr[i].roomNumber;
		}

		ofstream fout;
		fout.open("student.txt");

		if(fout.fail())
		{
			cout<<"���� ��� ����"<<endl;
			return;
		}

		char modify_name[20];

		cout<<"������ �̸� : ";
		cin>>modify_name;

		for(i=0; i<15; i++)
		{
			if(!strcmp(arr[i].name, modify_name))
			{
				cout<<"name : ";
				cin>>arr[i].name;

				cout<<"depart : ";
				cin>>arr[i].department;

				cout<<"grade : ";
				cin>>arr[i].grade;

				cout<<"build : ";
				cin>>arr[i].building;

				cout<<"room : ";
				cin>>arr[i].roomNumber;

				for(i=0; i<15; i++)
				{
						fout<<arr[i].name<<" "<<arr[i].department<<" "<<arr[i].grade<<" "<<arr[i].grade<<" "<<arr[i].building<<" "<<arr[i].roomNumber<<endl;
				}
				return;
			}
		}
		for(i=0; i<15; i++)
		{
			fout<<arr[i].name<<" "<<arr[i].department<<" "<<arr[i].grade<<" "<<arr[i].grade<<" "<<arr[i].building<<" "<<arr[i].roomNumber<<endl;
		}
		
		fout.close();
		fin.close();
	}
};

void main()
{
	UnderGrad_Dorm cInfo[15];
	cInfo[15].modify(cInfo);
}


