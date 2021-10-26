#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	int x;
	cout << "Введите число:";
	cin >> x;
	while ((x < 100) || (x > 999))
	{
		cout << "Число введено не верно. Введите число заного: \n";
		cin >> x;
	}
	int a, b, c;
	a = x % 10;
	x = x / 10;
	b = x % 10;
	c = x / 10;
	while ((a == b) || (b == c) || (a == c))
	{
		cout << "Цифры в числе не могут быть одинаковыми. Введите число заного:";
		cin >> x;
		a = x % 10;
		x = x / 10;
		b = x % 10;
		c = x / 10;
	}
	cout << "Все возможные числа \n";
	cout << a << b << c << "\n";
	cout << a << c << b << "\n";
	cout << b << a << c << "\n";
	cout << b << c << a << "\n";
	cout << c << b << a << "\n";
	cout << c << a << b << "\n";
	cout << "Наибольшее число из всех:";
	if ((a > b) && (a > c))
	{
		if (b > c)
		{
			cout << a << b << c;
		}
		else
		{
			cout << a << c << b;
		}

	}
	else
	{
		if ((b > c) && (b > a))
		{
			if (a > c)
			{
				cout << b << a << c;
			}
			else
			{
				cout << b << c << a;
			}
		}
		else
		{
			if (a > b)
			{
				cout << c << a << b;
			}
			else
			{
				cout << c << b << c;
			}

	     }

	}
	return 0;
}
