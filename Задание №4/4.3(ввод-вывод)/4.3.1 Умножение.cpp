#include <iostream>
using namespace std;
int main()
{
        // Локализация программы
	setlocale(LC_ALL, "Russian");
	// Целочисленые переменные
	int a, b;
	cout << "Введите числа \n";
	cin >> a >> b;
	cout << "Результат:";
	//выводим произведение двух чисел
	cout << a * b;
	return 0;
}
