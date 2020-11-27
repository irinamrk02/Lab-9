// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void main(void)
{
	setlocale(0, "");
	char a[1024]; 
	char result[1024] = { 0 }; 
	cout << "Введите строку с буквами и цифрами на английском : ";
	cin >> a;
	char* ptr = result; 
	for (int i = 0; i < strlen(a); i++) 
	{
		if (!isdigit((unsigned char)a[i])) //Если символ не цифра
			*ptr++ = a[i]; //то пишим этот символ в Result и сдвигаем указатель на 1 
	}
	cout << endl << "Строка после удаления цифр : " << result;

}