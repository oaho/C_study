#include <iostream>
using namespace std;
void main(){
	
	int line, blank, num, number=1;

	for(line=1; line<=3; line++){

		for(blank=1;  blank<=3-line; blank++){
			cout << " ";
		}
		for(num=1; num <= 2*line-1; num++){
			cout << " " << number++;
		}
	cout << "\n";
	}



}