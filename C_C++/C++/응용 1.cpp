#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	Complex(int r=0, int i=0);

	/*������ �Ұ����ϱ� ������ real, image���� ��������*/
	int GetReal() {return real;};
	int GetImage() {return image;};

	void ShowComplex() const;
};

Complex::Complex(int r, int i) : real(r), image(i)
{
}

void Complex::ShowComplex() const
{		
	cout<<" ( " << real <<" + " << image << "i )" <<endl;
}

void prn(Complex *pCom)
{
	int result1=0;
	int result2=0;

	for(int i=0; i<3; i++)
	{		
		pCom[i].ShowComplex();
		
		/*pCom[i]�� real,image ������ ����*/
		result1+=pCom[i].GetReal();
		result2+=pCom[i].GetImage();
	}

	cout<<"real�� �� : " << result1 << "\n";
	cout<<"image�� �� : " << result2 << "\n";
}

void main()
{
	Complex arr[3] = {
		Complex(2, 3),
		Complex(),
		Complex(4, 5),
	};

	prn(arr);
}


