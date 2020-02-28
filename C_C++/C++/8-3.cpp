#include <iostream>
using namespace std;

class Complex
{

private:
	int real;
	int image;

public:
	void SetComplex();
	void ShowComplex();
	void SetReal(int r);
	void SetImage(int i);

};

void Complex::SetComplex()
{
	real = 2;
	image = 5;
}

void Complex::ShowComplex()
{
	cout << "( " <<real <<" + "<<image << "i )" <<endl;
}

void Complex::SetReal(int r) //private 멤버변수 real 매개변수인 r이 전달받아 실수부를 저장
{
	real = r;
}

void Complex::SetImage(int i) //private 멤버변수 image 매개변수인 i가 전달받아 허수부를 저장
{
	image = i;
}

/*private멤버를 다루기 위한 멤버함수(SetReal,SetImage)*/

void main()
{
	Complex x;
	x.SetReal(5);
	x.SetImage(10);
	x.ShowComplex();
}

