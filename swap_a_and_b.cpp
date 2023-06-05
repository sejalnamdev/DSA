#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "a = ";
    cin>> a;

    cout<< "b = ";
    cin >>b;

	int c;
	c = a;
	a = b;
	b = c;

	cout << "a = "<< a << endl << "b = " << b << endl;

	return 0;
}