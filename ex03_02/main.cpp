#include <iostream>
using namespace std;
void main()
{
	int line, star;

	for(line=1; line<=5; line++){
		
		for(star=1; star<=line; star++){
			cout << "*";
		}
	cout << "\n";
	}
	cout << "\n\n";
	for(line=1; line<=5; line++){
		
		for(star=5; star>=line; star--){
			cout << "*";
		}
	cout << "\n";
	}
}