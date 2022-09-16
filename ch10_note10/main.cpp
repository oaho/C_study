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
void main(){
	Complex x, y;
	x.SetComplex();
	x.ShowComplex();
	y.SetComplex();
	y.ShowComplex();
}