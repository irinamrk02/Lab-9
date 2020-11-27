// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");
    const int N = 20;
    char glas[N] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    string str;
    int k;
    cout << "Введите строку из символов (латинские буквы):" << endl;
    cin >> str;
    k = 0;
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (str[i] == glas[j])
                k++;
        }
    }
    if (k)
        cout << "Количество гласных символов: " << k << endl;
    else
        cout << "Гласных символов не найдено!" << endl;
    return 0;
}
