#include <iostream>
using namespace std;

class Complex
{

private :
	int real;
	int image;

public :
	void SetComplex();
	void ShowComplex();

};

void Complex::SetComplex()
{
	real = 2;
	image = 5;
}

void Complex::ShowComplex()
{
	cout << "( " <<real <<" + " <<image << "i )" <<endl;
}

void main()
{
	Complex x;
	x.SetComplex();
	//x.image = 10; private 접근 지정자이기 때문에 못쓴다.
	x.ShowComplex();
}