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

   cout << "양수의 개수: " << plus << endl;
   cout << "음수의 개수: " << minus << endl;
   cout << "0의 개수: " << zero << endl;
}