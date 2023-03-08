#include <iostream>
#include <string.h>

using namespace std;

int GetValue()
{
	int value;
	cin >> value;

	while (value < 0)
	{
		cout << "Введите значение больше 0!" << endl;
		cin >> value;
	}
	return value;
}

int main()
{
	setlocale(0, "");

	int const size = 50;
	char buffer[size];
	cout << "Введите текст: " << endl;
	gets_s(buffer);

	cout << "Введите искомый символ: " << endl;
	char letter = getchar();
	cin.ignore();

	for (int i = size; i >= 1; i--)
	{
		if (*(buffer + i) == letter)
		{
			cout << "Индекс последнего совпадения найденого символа: " << i + 1 << endl;
			break;
		}
	}

	return 0;
}