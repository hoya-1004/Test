#include <iostream>

using namespace std;

struct namecard 
{
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

struct person
{
	char name[20];
	int age;
	int num;
	char address[30];
	int enter;
};

void main()
{
	struct namecard man;
	struct person a;

	cout << " �̸��� �Է��ϼ��� => ";
	cin>>man.name;
	cout << " ������ �Է��ϼ��� => ";
	cin>>man.job;
	cout << " ����ó�� �Է��ϼ��� => ";
	cin>>man.tel;
	cout << " �̸����� �Է��ϼ��� => ";
	cin>>man.email;

	cout << " �̸� �Է� : ";
	cin>>a.name;
	cout << " ���� �Է� : ";
	cin>>a.age;
	cout << " �й� �Է� : ";
	cin>>a.num;
	cout << " �ּ� �Է� : ";
	cin>>a.address;
	cout << " ���г⵵ �Է� : ";
	cin>>a.enter;

	cout <<"\n �Է¹��� �����͸� ����մϴ�. ";
	cout <<"\n �̸� \t ���� \t ����ó  \t �̸���";
	cout <<"\n =================================================";
	cout <<"\n "<<man.name<<"\t "<<man.job << "\t "<<man.tel <<"\t" << man.email;
	cout <<"\n ==================================================";
	cout <<"\n sizeof(namecard) => "<< sizeof(namecard);
	cout <<"\n ����ü ������ �޸� ������ => "<<sizeof(namecard)<<"\n";

	cout <<"\n �̸� \t ���� \t �й� \t �ּ� \t ���г⵵";
	cout <<"\n "<<a.name<<"\t"<<a.age<< "\t" <<a.num << "\t" <<a.address << "\t" <<a.enter <<"\n";
}
