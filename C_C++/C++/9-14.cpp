#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	Complex(int r=0, int i=0);
	void ShowComplex() const;
};

Complex::Complex (int r, int i) : real(r), image(i)
{
}

void Complex::ShowComplex() const
{
	cout<<" ( " <<real <<" + " <<image<< "i )" <<endl;
}

void prn (Complex *pCom) //함수는 전달받은 객체배열의 각 요소의 멤버함수를 참조
{
	for(int i=0; i<4; i++)
		pCom[i].ShowComplex();
}

void main()
{
	Complex arr[4] = {
		Complex(2, 4),
		Complex(4, 3),
		Complex(2, 1),
		Complex(),
	};

	prn(arr); //객체배열의 이름을 줌
}
