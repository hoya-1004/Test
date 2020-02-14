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

	Complex AddOnePrefix(); //객체 변수가 자신의 값을 1 증가시키되 선행처리하도록 하는 함수
	Complex AddOnePostfix(); 
};

Complex::Complex(int r, int i)
{
	real=r;
	image=i;
}

void Complex::ShowComplex()
{
	cout<<"(" <<real<<" + "<<image <<" i )"<<endl;
}

Complex Complex::AddOnePrefix()
{
	//AddOnePrefix 함수를 호출할 때 앞에 기술한 객체 x의 주소를 내부 포인터 this가 저장

	++this->real; //this로 접근해 객체의 멤버변수를 증가
	++this->image;
	return *this;
}

Complex Complex::AddOnePostfix()
{
	//객체 자신의 값을 1증가시키되, AddOnePostfix 함수는 증가시키기 전의 값이 반환
	Complex temp;
	temp = *this;

	++this->real;
	++this->image;

	return temp; //증가되기 전의 값을 미리 저장해둔 객체 temp를 결과값으로 반환한다.
}

void main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	cout<<"---- 선행처리 ------\n";
	
	//값을 1증가 시킨 후 결과를 또 다른 객체인 z에 저장해야 하므로 함수의 자료형을 void로 할 수 없다.
	z=x.AddOnePrefix(); //객체변수 x가 자신의 값을 증가시키기 위해 AdOnePrefix 함수 호출
	x.ShowComplex();
	z.ShowComplex();

	cout<<"---- 후행처리 ------\n";
	z=y.AddOnePostfix();
	y.ShowComplex();
	z.ShowComplex();
}