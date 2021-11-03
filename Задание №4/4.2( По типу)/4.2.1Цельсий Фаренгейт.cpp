#include<iostream>
using namespace std;
int main()
{
    // Локализация Программы
    setlocale(LC_ALL, "Russian");
    // переменные с плавающей точкой
    float F, C;
    cout << "Введите значение по ворингейту \n";
    cin >> F;
    // Формула по которой переводится в градусы цельсия
    C = ((5.0 / 9.0) * (F - 32));
    cout << "температура в цельсиях равна:";
    cout << C;
    return 0;
}
