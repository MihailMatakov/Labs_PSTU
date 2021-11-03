
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	float f, g;
	cout << "Введите количество галлонов\n";
	cin >> g;
	f = g / 7.481;
	cout << "Количество кубических футов:\n";
	cout << f;
	return 0;
}
