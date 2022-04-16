#include<iostream>
#include<Windows.h>

using namespace std;
int main()
{

		setlocale(LC_ALL, "rus");

		cout<<"задача №1 напишите программу, которая вычисляет сумму\n";
		cout << "целых чисел от а до 500\n";
		int a;
		long sum = 0;
		cout << "Введите начальное значение от 1 до 500: "; cin >> a;
		if (a > 500)
		{
			cout << "a>500" << endl;
		}
		else
		{
			sum = (500 * 501 / 2) - ((a - 1) * a / 2);
			cout << sum << endl;
		}

		cout << "задача №2 напишите программу, которая запрашивает два целых\n";
		cout << "числа х и у, после чего вычисляет и выводит\n";
		cout << "значение х в степени у\n";
		int a, b, result;
		cout << "Введите Х: "; cin >> a;
		cout << "Введите У: "; cin >> b;
		result = pow(a, b);
		cout << "Вы получили значение: " << result<< endl;

		cout << "задача №3  найти среднее арифметическое всех чисел от 1 до 1000\n";
		float s = 0;
		for (int i = 1; i <= 1000; i++)
		{
			s += i;
		}
		s /= 1000;
		cout << "Среднее значение: " << s << endl;


		cout << "задача №4  найти произведение целых чисел от а до 20\n";
		int s = 1;
		int a, i;
		cout << "Введите значение а: "; cin >> a;
		for (i = a; i <= 20; i++)
		{
			s = s * i;
		}
		cout << "Произведение числел = " << s << endl;

		return 0;
}