// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string s, s1, s2;
	cout << "Введите строку: ";
	cin >> s;
	cout << "Введите символ для замены: ";
	cin >> s1;
	cout << "Введите символ, на который хотите заменить: ";
	cin >> s2;
	size_t n = 0;
	size_t p;
	while ((p = s.find(s1, n)) != string::npos)
	{
		s.replace(p, s1.size(), s2);
		n = p + s2.size();
	}
	cout << s;
	return 0;
}