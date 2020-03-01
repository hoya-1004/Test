#include <iostream>
using namespace std;

class Calc
{
protected:
	int a;
	int b;

public:
	Calc();
	Calc(int new_A, int new_B);
	void CalcPrn();
};

Calc::Calc()
{
	a=0;
	b=0;
}

Calc::Calc(int new_A, int new_B)
{
	a=new_A;
	b=new_B;
}

void Calc::CalcPrn()
{
	cout << "--- Calc::CalcPrn ---" <<endl;
	cout<<a<<"\t"<<b<<endl;
}

class Add : public Calc // Calc를 상속받는 클래스 Add정의
{
protected:
	int c;

public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void AddPrn();
};

Add::Add() : Calc()
{
}

Add::Add(int new_A, int new_B) : Calc(new_A, new_B)
{
	a=new_A;
	b=new_B;
	c=0;
}

void Add::Sum()
{
	c=a+b;
}

void Add::AddPrn()
{
	cout<<"--- Add::AddPrn ---" <<endl;
	cout<<a<<" + "<<b<<" = "<<c<<endl;
}
//업 캐스팅은 컴파일러에 의해서 자동 형 변환
void main()
{
	Add AddObj(3, 5); //Add 객체 생성 -> Add클래스로 부터 상속받은 영역과 Calc 클래스가 가지고 있는 영역에 대해 메모리 할당
	Add *AddPtr; //Add로 포인터 변수 선언
	AddPtr = &AddObj; //Add로 생성한 객체는 Add로 선언된 포인터 변수
	AddPtr -> Sum(); //상속받은 멤버함수 호출 가능
	AddPtr -> AddPrn(); //자신의 멤버함수 호출 가능  

	Calc *CalcPtr; //Calc로 포인터 변수 선언
	CalcPtr = &AddObj; //업 캐스팅 : Add 포인터 값 -> Calc 포인터 변수에 저장 (문제점은 참조하는 영역에 제한이 생긴다)
	//CalcPtr->Sum(); Add의 멤버함수인 Sum을 Calc의 포인터로 접근(X), 업 캐스팅 후 Calc 포인터는 상속받은 멤버만 호출할 수 있기 때문에
	CalcPtr->CalcPrn();
}