#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;

public:
	Complex(int r=0, int i=0);

	/*접근이 불가능하기 때문에 real, image값을 리턴해줌*/
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
		
		/*pCom[i]에 real,image 각각을 더함*/
		result1+=pCom[i].GetReal();
		result2+=pCom[i].GetImage();
	}

	cout<<"real의 합 : " << result1 << "\n";
	cout<<"image의 합 : " << result2 << "\n";
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


