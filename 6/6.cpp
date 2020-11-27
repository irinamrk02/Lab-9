// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");

    string s, s1;
    int n = 0, p = 0;
    cout << "Введите строку: ";
    cin >> s;
    cout << "Введите подстроку: ";
    cin >> s1;
    while ((p = s.find(s1, p)) != s.npos) {
        ++n;
        ++p;
    }
    cout << "Подстрока " << s1 << " в строке " << s << " содержит " << n << " вхождений" << endl;
    return 0;
}