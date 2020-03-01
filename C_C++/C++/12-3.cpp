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
	cout << "--- Calc::CalcPrn ---"<<endl;
	cout <<a<<"\t"<<b<<endl;
}

class Add : public Calc
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
	cout<< "--- Add::AddPrn ---"<<endl;
	cout<<a<< " + " <<b << " = " <<c<<endl;
}

void main()
{
	Calc Obj(3, 5); //Calc 객체 인스턴스 생성
	Add *AddPtr; //Add 클래스 포인터 변수를 선언
	//AddPtr = &Obj; Add클래스 포인터 변수에 Calc클래스 포인터 값을 대입하면 컴파일 에러 발생
	AddPtr = (Add *)&Obj; //다운 캐스팅을 명시적으로 해주어야 한다.
	AddPtr->CalcPrn();  //컴파일 에러 방지하기 위해 강제 형변환
	AddPtr->Sum(); 
}