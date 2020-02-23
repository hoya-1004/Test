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

Complex::Complex(int r, int i) : real(r), image(i)
{
}

void Complex::ShowComplex() const
{
	cout<< " ( " <<real <<" + " <<image << "i ) " <<endl;
}

void main()
{
	Complex arr[3] = {
						Complex(2, 4),
						Complex(2, 3),
						Complex(),
	};

	for(int i=0; i<3; i++)
		arr[i].ShowComplex();
}



