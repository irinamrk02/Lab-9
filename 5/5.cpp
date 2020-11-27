// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");
    const int N = 26;
    char vowel[N] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k', 'l', 'i', 'o', 'q', 'w', 'r', 't', 'y', 'u', 'p', 's', 'z', 'x', 'v', 'n', 'm' };
    string str;
    int k;
    cout << "Введите строку из символов (латинские буквы):" << endl;
    cin >> str;
    k = 0;
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (str[i] == vowel[j])
                k++;
        }
    }
    if (k)
        cout << "Количество прописных символов: " << k << endl;
    else
        cout << "Прописных символов не найдено!" << endl;
    return 0;
}