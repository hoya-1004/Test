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

	Complex AddOnePrefix(); //��ü ������ �ڽ��� ���� 1 ������Ű�� ����ó���ϵ��� �ϴ� �Լ�
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
	//AddOnePrefix �Լ��� ȣ���� �� �տ� ����� ��ü x�� �ּҸ� ���� ������ this�� ����

	++this->real; //this�� ������ ��ü�� ��������� ����
	++this->image;
	return *this;
}

Complex Complex::AddOnePostfix()
{
	//��ü �ڽ��� ���� 1������Ű��, AddOnePostfix �Լ��� ������Ű�� ���� ���� ��ȯ
	Complex temp;
	temp = *this;

	++this->real;
	++this->image;

	return temp; //�����Ǳ� ���� ���� �̸� �����ص� ��ü temp�� ��������� ��ȯ�Ѵ�.
}

void main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	cout<<"---- ����ó�� ------\n";
	
	//���� 1���� ��Ų �� ����� �� �ٸ� ��ü�� z�� �����ؾ� �ϹǷ� �Լ��� �ڷ����� void�� �� �� ����.
	z=x.AddOnePrefix(); //��ü���� x�� �ڽ��� ���� ������Ű�� ���� AdOnePrefix �Լ� ȣ��
	x.ShowComplex();
	z.ShowComplex();

	cout<<"---- ����ó�� ------\n";
	z=y.AddOnePostfix();
	y.ShowComplex();
	z.ShowComplex();
}