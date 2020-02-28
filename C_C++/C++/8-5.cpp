#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	void SetComplex();
	void ShowComplex() const; //ShowComplex 함수 내부에서 멤버변수 값이 변경되지 말아야 하므로 함수 뒤에 const정의
};
/*멤버함수 내에서 어떠한 멤버변수 값도 변경하지 못하도록 할 수 있다.*/

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