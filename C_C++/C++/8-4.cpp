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

	void ShowComplex(); //class�� ����Լ��� �����ϸ� �ڵ� �ζ��� �Լ��� �ȴ�.

};

inline void Complex::ShowComplex() //����� inline�� ����� �ζ��� �Լ��� ����
{
	cout<<" ( " <<real <<" + " <<image << "i )" <<endl;
}

void main()
{
	Complex x;

	x.SetComplex();
	x.ShowComplex();
}
