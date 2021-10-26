#include<iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	int k, F; 
	int i;
	k = 0;
	F = 0;
	srand(time(NULL));
	a = rand() % 100 + 1;
	cout << ("Угадай число из диапазано от 1 до 100 за 7 попыток.\n");
	while ((k < 7) && (F < 1))
	{
		cout << ("введите число:\n");
		cin >> i;
		if (i > a)
		{
			cout << "Число должно быть меньше\n"; 
			k = k + 1;
		}
		else
		{
			if (i < a)
			{
				cout << "Число должно быть больше\n"; 
				k = k + 1;
			}
			else
			{
				if (i = a)
				{
					cout << "Число введено верно: " << a; 
					F = F + 1;
				}
			}
		}
		if (k == 7)
		{
			cout << "Попытки закончились. Загаданное чсло:" << a;
		}
	}
	return 0;
}
