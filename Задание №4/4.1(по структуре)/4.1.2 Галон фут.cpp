#include <iostream>
using namespace std;
int main()
{
	// Локализация программы
	setlocale(LC_ALL, "");
	// Переменная с плавающей точкой
	float f, g;
	cout << "Введите количество галлонов\n";
	cin >> g;
	// Чтобы найти кубические фунты надо галонны разделить на 7.481
	f = g / 7.481;
	cout << "Количество кубических футов:\n";
	cout << f;
	return 0;
}

