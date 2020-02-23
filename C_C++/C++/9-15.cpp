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

	friend void prn(Complex *pCom); //��ü�� ��� ������ �����Ҽ� ���� ������ �Լ�
};

Complex::Complex(int r, int i) : real(r), image(i)
{
}

void Complex::ShowComplex() const
{
	cout << " ( " <<real << " + " <<image << "i )" <<endl;
}

void prn(Complex *pCom) //����Լ��� �ƴ� �Ϲ��Լ��� ����
{
	for(int i=0; i<4; i++)
		cout<< " ( " <<pCom[i].real <<" + " <<pCom[i].image << "i ) " <<endl;
}

void main()
{
	Complex arr[4] = {
		Complex(2,4),
		Complex(4,2),
		Complex(),
		Complex(3,6),
	};

	prn(arr);
}