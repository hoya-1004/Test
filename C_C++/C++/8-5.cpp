#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	void SetComplex();
	void ShowComplex() const; //ShowComplex �Լ� ���ο��� ������� ���� ������� ���ƾ� �ϹǷ� �Լ� �ڿ� const����
};
/*����Լ� ������ ��� ������� ���� �������� ���ϵ��� �� �� �ִ�.*/

void Complex::SetComplex()
{
	real=2;
	image=5;
}

void Complex::ShowComplex() const
{
	cout<<" ( " <<real <<" + " <<image << "i ) " <<endl;
}

void main()
{
	Complex x;
	x.SetComplex();
	x.ShowComplex();
}