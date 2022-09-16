#include <iostream>
using namespace std;
class complex
{
private :
	int real;
	int image;
public :
	complex(int r=0, int i=0);
	void ShowComplex() const;
};
complex::complex(int r, int i) : real(r), image(i)
{
}
void complex::ShowComplex() const
{
	cout << "( " << real << " + " << image << "i )" << endl;
}
void main()
{
	complex x(10,20);
	complex y;
	cout << "Object x => ";
	x.ShowComplex();
	cout << "Object y => ";
	y.ShowComplex();

	complex *pCom;
	pCom = &x;
	cout << "\n pCom->ShowCompelx() => ";
	pCom->ShowComplex();

	pCom = &y;
	cout << "pCom->ShowComplex()=>";
	pCom->ShowComplex();
}