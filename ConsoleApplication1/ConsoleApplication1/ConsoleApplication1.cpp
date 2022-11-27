
#include <iostream>
using namespace std;

int main()
{
	int v = 4;
	int * ptrv = &v;
	
	cout << "ptrv = " << *ptrv<<endl;

	cout << "enter v here - ";

	cin >> v;
	cout << "now you change v and ptrv and they are equal - " << v << endl;
	

}
