#include <iostream>
using namespace std;
class complex
{
    private :
		int real;
		int image;
public :
	complex();
	complex(int r, int i);
	void ShowComplex() const;

};

Complex :: Complex()
{
	real=0;
	image=0;
}
Complex::complex(int r, int i)
{
	real = r;
	image = i;
}

void Complex::ShowComplex() const
{
	cout << " ( " << real << " + " << image << "i ) " << endl;

}

void main()
{
	Complex x(10, 20);
	Complex y(30,40);
	complex z;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();


}