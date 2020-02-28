#include <iostream>
using namespace std;

class Complex
{

private :
	int real;
	int image;

public :
	void SetComplex()
	{
		real=2;
		image=5;
	}

	void ShowComplex(); //class에 멤버함수를 정의하면 자동 인라인 함수가 된다.

};

inline void Complex::ShowComplex() //예약어 inline을 사용해 인라인 함수를 정의
{
	cout<<" ( " <<real <<" + " <<image << "i )" <<endl;
}

void main()
{
	Complex x;

	x.SetComplex();
	x.ShowComplex();
}
