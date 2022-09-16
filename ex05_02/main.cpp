#include <iostream>
using namespace std;
void absolute(int *pa);
void main()
{
	int a=-10;
	cout << "main 에서 함수 호출 전 a 값 = " << a << "\n";
	absolute(&a);
	cout << "main 에서 함수 호출 후 a값 = " << a << "\n";
}
void absolute(int *pa) {
	if(*pa < 0) *pa = -*pa;
}
