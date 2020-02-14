#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	Complex(int r=0, int i=0);
	void ShowComplex();
	//두 복소수의 합을 일반함수로 구할 경우 private 멤버변수를 사용하기 위해 프렌드 함수로 구현
	friend Complex Sum(Complex leftHand, Complex rightHand);
};

void Complex::ShowComplex()
{
	cout<<"( " <<real<<"+"<<image <<"i)"<<endl;
}

Complex::Complex(int r, int i)
{
	real=r;
	image=i;
}

Complex Sum(Complex leftHand, Complex rightHand) //멤버함수와 비교시 달라진 것은 매개변수가 두 개
{
	Complex res;
	res.real = leftHand.real + rightHand.real;
	res.image = leftHand.image + rightHand.image;
	return res;
}

void main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	z = Sum(x, y); //두 복소수를 더하는 프렌드 함수 작성

	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
}