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

void Complex::SetReal(int r) //private ������� real �Ű������� r�� ���޹޾� �Ǽ��θ� ����
{
	real = r;
}

void Complex::SetImage(int i) //private ������� image �Ű������� i�� ���޹޾� ����θ� ����
{
	image = i;
}

/*private����� �ٷ�� ���� ����Լ�(SetReal,SetImage)*/

void main()
{
	Complex x;
	x.SetReal(5);
	x.SetImage(10);
	x.ShowComplex();
}

