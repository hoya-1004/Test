#include <iostream>
using namespace std;

class Complex //class ����ο��� ��Ӻ��� ����, ����Լ� ���� ����
{
	private : //private���� ������� ���� 
		int real;
		int image;

	public : //public���� ����Լ� ����
		void SetComplex(); 
		void ShowComplex();
};

void Complex::SetComplex() //��� Ŭ������ ����Լ������� �ĺ��ϱ� ���� Ŭ�������� :: �����ڿ� �Բ� ���
{
	real = 2;
	image = 5;
}

void Complex::ShowComplex() //��� Ŭ������ ����Լ������� �ĺ��ϱ� ���� Ŭ�������� :: �����ڷ� �Բ� ���
{
	cout<<"(" <<real << " + " << image <<"i ) " << endl ;
}

void main()
{
	Complex x, y; //ComplexŬ���� ��üȭ �ϴ� �۾�
	
	/*public�̹Ƿ� main�Լ����� ��� ����*/
	x.SetComplex();
	x.ShowComplex();
	y.SetComplex();
	y.ShowComplex();
}
