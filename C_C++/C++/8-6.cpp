#include <iostream>
using namespace std;

void printstr(char *); //���ڿ��� �Ű������� �޴� 
void printstr(char, int); //���Ϲ��ڿ� ������ �Ű������� �޴�

/*�Լ��� �����ε��� �Լ��� �̸��� �����ϰ� �Ͽ� ���� �� �����ε��ϵ� �Լ���
ȣ�� �� �� ��ȣ���� �ʵ��� �ϱ� ���ؼ� �Ű������� ������ �Ű������� �ڷ����� �ٸ��� �ִ� ���� �ǹ�*/
void main()
{
	printstr("I'm Sorry"); 
	printstr('a',3);
}

void printstr(char *string)
{
	cout << string << endl;
}

void printstr(char ch, int cnt)
{
	for(int i = 0; i<cnt; i++)
	{
		cout << ch;
	}
	cout << endl;
}
