#include <iostream>
using namespace std;

class Complex //class 선언부에서 멤머변수 선언, 멤버함수 선언 구성
{
	private : //private으로 멤버변수 선언 
		int real;
		int image;

	public : //public으로 멤버함수 선언
		void SetComplex(); 
		void ShowComplex();
};

void Complex::SetComplex() //어느 클래스의 멤버함수인지를 식별하기 위해 클래스명을 :: 연산자와 함께 명시
{
	real = 2;
	image = 5;
}

void Complex::ShowComplex() //어느 클래스의 멤버함수인지를 식별하기 위해 클래스명을 :: 연산자로 함께 명시
{
	cout<<"(" <<real << " + " << image <<"i ) " << endl ;
}

void main()
{
	Complex x, y; //Complex클래스 객체화 하는 작업
	
	/*public이므로 main함수에서 사용 가능*/
	x.SetComplex();
	x.ShowComplex();
	y.SetComplex();
	y.ShowComplex();
}
