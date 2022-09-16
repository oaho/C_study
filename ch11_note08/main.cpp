#include <iostream>
using namespace std;
class complex{
private :
	int real;
	int image;
public :
	complex(int ral=0, int image=0);
	void showcomplex() const;


};

complex::complex(int real, int image){
	this -> real=real;
	this-> image=image;

}
void complex :: showcomplex() const{
	cout << "( " << this->real<< "+" << this->image<< "i )" <<endl;

}
void main() {
	complex x(10,20);
	x.showcomplex();

}