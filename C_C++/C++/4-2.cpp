#include <iostream>

using namespace std;

struct person
{
	struct name b; //���� �����Ѱ��� ����ü �ȿ� ����ü�� ����ٰ� �����ߴµ�, ���⼭�� ���� �ϰ�
	               //�ؿ� ����ü�� �����.
	int age;
	int num;
	char address[30];
	int enter;	
};

struct name 
{
	char first_name[14];
	char last_name[6];
};

void main()
{
	struct person a;

	cout << " �� �Է� : ";
	cin>>a.b.first_name; //�����Ҷ� a�� �ִ� ����ü���� b�� �ִ� ���� �̸��� �Է�
	cout << " �̸� �Է� : ";
	cin>>a.b.last_name;

	cout << " ���� �Է� : ";
	cin>>a.age;
	cout << " �й� �Է� : ";
	cin>>a.num;
	cout << " �ּ� �Է� : ";
	cin>>a.address;
	cout << " ���г⵵ �Է� : ";
	cin>>a.enter;

	cout <<"\n �� \t �̸� \t ���� \t �й� \t �ּ� \t ���г⵵";
	cout <<"\n "<<a.b.first_name <<"\t" <<a.b.last_name <<"\t"<<a.age<< "\t" <<a.num << "\t" <<a.address << "\t" <<a.enter <<"\n";
}
