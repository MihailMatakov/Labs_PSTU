#include <iostream>
using namespace std;
int main()
{
	// Целочисленная переменная
	int i = 1;
	// Целочисленная переменная
	int a;
	// Префиксный инкремент умножается на постфиксный инкремент
	a = ++i * i++;
	cout << a;
	return 0;
}


	
