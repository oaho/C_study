#include <iostream>
using namespace std;
void main() {
	  int a[10];
   int plus = 0, minus = 0, zero = 0;

   for (int i = 0; i < 10; i++) {
      cout << "a[" << i << "] ===> ";
      cin >> a[i];

      if (a[i] > 0) {
         plus++;
      }
      else if (a[i] < 0) {
         minus++;
      }
      else zero++;

   }

   cout << "����� ����: " << plus << endl;
   cout << "������ ����: " << minus << endl;
   cout << "0�� ����: " << zero << endl;
}