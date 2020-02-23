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

void prn (Complex *pCom) //�Լ��� ���޹��� ��ü�迭�� �� ����� ����Լ��� ����
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

	prn(arr); //��ü�迭�� �̸��� ��
}
