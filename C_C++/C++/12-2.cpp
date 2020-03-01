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
	Calc *CalcPtr; //파생 클래스로 인스턴스 생성 
	CalcPtr = new Add(3, 5); //업 캐스팅
	CalcPtr -> CalcPrn();
	// CalcPtr->Sum(); Calc 클래스로 선언된 포인터 변수이므로 Add클래스 Sum멤버함수를 호출할 수 없다.

	Add *AddPtr; //Add클래스 포인터 변수 선언
	AddPtr = (Add *)CalcPtr; //다운 캐스팅(강제로 형변환)
	AddPtr->CalcPrn();
	AddPtr->Sum(); //Sum 멤버함수를 호출할 수 있는 방법은 Add 클래스로 다운 캐스팅해서 호출 
	AddPtr->AddPrn();
}

