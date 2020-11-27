// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");

    const int N = 1;
    char a[N] = { 'a' };
    const int l = 15;
    char b[l] = "Mamamilaramy";

    cout << "Символ - a\n";
    cout << "Mamamilaramy\n";

    int k = 0;
    for (int i = 0; b[i]; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (b[i] == a[j])
                k++;
        }
    }
    if (k)
        cout << "Количество символов: " << k << endl;
    else
        cout << "Данного символа не найдено!" << endl;
    return 0;
}
