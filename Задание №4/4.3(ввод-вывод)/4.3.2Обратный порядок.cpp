#include <iostream>
using namespace std;
int main()
{
    // Локализация программы
    setlocale(LC_ALL, "Russian");
    // Переменные в которые будут записаны символы
    char a, s, d, f, g;
    cout << "Введите символы \n";
    сin >> a >> s >> d >> f >> g;
    cout << "Результат \n";
    // Результат выводим в обратном порядке
    cin >> g >> f >> d >> s >> a;
    return 0;
}
