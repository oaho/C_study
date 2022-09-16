#include <iostream>
using namespace std;
Class CRect{
	int left;
	int top;
	int bottom;
	
public :
	void print();

}
void CRect::print()
{
	cout << "( " << left << ", " << top << ", " << right << ", " << bottom << " ) " << endl;
	
}
void main()
{
	CRect rc;
	rc.left=0;
	rc.top=0;
	rc.right=20;
	rc.bottom='20';
	rc.print();



}