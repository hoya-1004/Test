#include <iostream>
using namespace std;

class Complex
{
private :
	int real;
	int image;

public :
	Complex(int real=0, int image=0);
	void ShowComplex() const;
};

/*서로 다른 객체가 하나의 멤버함수를 호출해 사용하면 그 함수 내의 멤버변수들이 어떤 객체의 멤버변수인지 구분*/
Complex::Complex(int real, int image)
{
	this->real=real;
	this->image=image;
}

void Complex::ShowComplex() const
{
	cout << " ( " << this->real << " + " << this->image << "i ) " <<endl;
}

void main()
{
	Complex x(10, 20);
	x.ShowComplex();
}