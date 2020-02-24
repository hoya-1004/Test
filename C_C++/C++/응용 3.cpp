#include <iostream>
#include <string>
using namespace std;

class CStud
{
	char name[30];
	char hphone[20];
	char email[30];
	static int cnt;

public:
	CStud(){}; //�ϴ��� �����ض�
	void prn();
	static void prn_cnt();
	CStud(char *n, char *h, char *e);
	friend void prn(CStud *pStu);
	~CStud();
};

int CStud::cnt=0;

CStud::CStud(char *n, char *h, char *e)
{
	strcpy(name, n);
	strcpy(hphone, h);
	strcpy(email, e);
	cnt++;
}

CStud::~CStud()
{
	cnt--;
}

void CStud::prn()
{
	cout<<"�̸�  : " <<name<<endl;
	cout<<"�ڵ��� : " <<hphone<<endl;
	cout<<"�̸��� : " <<email<<endl;
}

void CStud::prn_cnt()
{
	cout<<"\n������� ��ϵ� �ο��� : " <<cnt<<"\n\n";
}

void prn (CStud *pStu)
{
	int i;
	int cnt=0;
	
	while(cnt<2)
	{
		cout << "��� : 1, ��� : 2 => ";
		cin >> i;

		if(i==1)
		{
			cin >> pStu[cnt].name;
			cin >> pStu[cnt].hphone;
			cin >> pStu[cnt].email;
			cin >> pStu[cnt].cnt;
		}

		else if(i==2)
		{
			cout << "����մϴ�";
			break;
		}

		else if(cnt==2)
		{
			cout << "�ִ��ο��� : "<< i <<"�� �Ѿ����ϴ�";
			break;
		}

		else
		{
			cout << "�߸��Ȱ��Դϴ�";
			continue;
		}
		cnt++;
	}
}

void main()
{
	CStud::prn_cnt();
	CStud arr[2];
	prn(arr);

	//CStud* p1 = new CStud();

	cout<<"\nŬ������ �Ҵ�� �޸� ������ : " <<sizeof(CStud);
	cout<<"\n";

//	delete p1;
}





