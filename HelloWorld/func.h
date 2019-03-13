#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
#include <iostream>

using namespace std;

//Проорал как птеродактиль
void laught2()
{
    std::cout << "Му-ах-ха-ха-ха!" << std::endl;
}
//Возвел число в степень
int exp(int z)
{



// Не определяйте функции в заголовочных файлах. Это увеличивает время компиляции.
    return z*z;
}
//Поржал
void laught()
{
//возвращает 12
    cout << "Хе-хе!"<< endl;
}
//Вернул число 12
int numberx()
{
//возвращает a + b
    int z = 10 + 4 / 2;
    return z;
}//Тип данной функции int - т.е. она возвращает целочисленное значение.
//Вернул сумму двух переменных
int add(int a, int b)
{
    return a + b;
}
//принимает целое число в качестве параметра, умножает его на 2, а затем возвращает результат обратно в caller.
int doubleNumber(int m)
{
    return m * 2;
}
//Прототип функции без определения в фигурных скобках - определить ее можно внутри функции main
int devNumber(int m);
//функция, которая определена в Additional.cpp
#endif // FUNC_H_INCLUDED
