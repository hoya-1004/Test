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

	friend void prn(Complex *pCom);
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
		result1+=pCom[i].real;
		result2+=pCom[i].image;
		pCom[i].ShowComplex();
	}
	
	cout << "real의 합 : " << result1 <<"\n";
	cout << "image의 합 : " << result2 <<"\n";

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


