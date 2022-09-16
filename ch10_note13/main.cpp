#include <iostream>
using namespace std;
Class Complex
{
private :
	int real;
	int image;
public :
	void SetComplex();
	void ShowComplex();
	void SetReal(int r);
	void SetImage(int i);
};

void Complex::SetComplex()
{
	real = 2;
	image = 5;
}
void Complex::ShowComplex()
{
	cout << "(" << real << " + " << image << " i) " << endl;
}
void Complex::SetReal(int r)
{
	real = r;
}
void complex::SetImage(int i)
{
	image = i;
}
void main()
{
	Complex x;
	x.SetReal(5);
	x.SetImage(10);
	x.ShowComplex();


}