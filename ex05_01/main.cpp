#include <iostream>
using namespace std;
void func01(int value)
{
	value+=20;
	cout << "\n func01 =" << value;
}
void func02(int *adress)
{
	*adress+=20;
	cout << "\n func02 = " << *adress;
}
void main()
{
	int a=20;
	func01(a);
	cout << "\n main 함수에서 func01 호출후 a=" << a << "\n";
	func02( &a );
	cout << "\n main 함수에서 func02 호출후 a=" <<a;

}