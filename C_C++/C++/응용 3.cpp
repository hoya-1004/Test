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
	CStud(){}; //일단은 생성해라
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
	cout<<"이름  : " <<name<<endl;
	cout<<"핸드폰 : " <<hphone<<endl;
	cout<<"이메일 : " <<email<<endl;
}

void CStud::prn_cnt()
{
	cout<<"\n현재까지 등록된 인원수 : " <<cnt<<"\n\n";
}

void prn (CStud *pStu)
{
	int i;
	int cnt=0;
	
	while(cnt<2)
	{
		cout << "등록 : 1, 출력 : 2 => ";
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
			cout << "출력합니다";
			break;
		}

		else if(cnt==2)
		{
			cout << "최대인원수 : "<< i <<"를 넘었습니다";
			break;
		}

		else
		{
			cout << "잘못된값입니다";
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

	cout<<"\n클래스의 할당된 메모리 사이즈 : " <<sizeof(CStud);
	cout<<"\n";

//	delete p1;
}





