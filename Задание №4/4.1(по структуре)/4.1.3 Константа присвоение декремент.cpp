
#include <iostream>
using namespace std;
int main() 
{
	const int a = 10;
	int b, c, d;
	b = 20;
	d = b;
	c = --d;
	cout << a << endl;
	cout << b << endl;
	cout << c;
	return 0;
}