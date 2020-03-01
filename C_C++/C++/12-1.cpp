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

class Add : public Calc // Calc�� ��ӹ޴� Ŭ���� Add����
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
//�� ĳ������ �����Ϸ��� ���ؼ� �ڵ� �� ��ȯ
void main()
{
	Add AddObj(3, 5); //Add ��ü ���� -> AddŬ������ ���� ��ӹ��� ������ Calc Ŭ������ ������ �ִ� ������ ���� �޸� �Ҵ�
	Add *AddPtr; //Add�� ������ ���� ����
	AddPtr = &AddObj; //Add�� ������ ��ü�� Add�� ����� ������ ����
	AddPtr -> Sum(); //��ӹ��� ����Լ� ȣ�� ����
	AddPtr -> AddPrn(); //�ڽ��� ����Լ� ȣ�� ����  

	Calc *CalcPtr; //Calc�� ������ ���� ����
	CalcPtr = &AddObj; //�� ĳ���� : Add ������ �� -> Calc ������ ������ ���� (�������� �����ϴ� ������ ������ �����)
	//CalcPtr->Sum(); Add�� ����Լ��� Sum�� Calc�� �����ͷ� ����(X), �� ĳ���� �� Calc �����ʹ� ��ӹ��� ����� ȣ���� �� �ֱ� ������
	CalcPtr->CalcPrn();
}