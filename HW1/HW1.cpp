#include<iostream>
#include<Windows.h>

using namespace std;
int main()
{

		setlocale(LC_ALL, "rus");

		cout<<"������ �1 �������� ���������, ������� ��������� �����\n";
		cout << "����� ����� �� � �� 500\n";
		int a;
		long sum = 0;
		cout << "������� ��������� �������� �� 1 �� 500: "; cin >> a;
		if (a > 500)
		{
			cout << "a>500" << endl;
		}
		else
		{
			sum = (500 * 501 / 2) - ((a - 1) * a / 2);
			cout << sum << endl;
		}

		cout << "������ �2 �������� ���������, ������� ����������� ��� �����\n";
		cout << "����� � � �, ����� ���� ��������� � �������\n";
		cout << "�������� � � ������� �\n";
		int a, b, result;
		cout << "������� �: "; cin >> a;
		cout << "������� �: "; cin >> b;
		result = pow(a, b);
		cout << "�� �������� ��������: " << result<< endl;

		cout << "������ �3  ����� ������� �������������� ���� ����� �� 1 �� 1000\n";
		float s = 0;
		for (int i = 1; i <= 1000; i++)
		{
			s += i;
		}
		s /= 1000;
		cout << "������� ��������: " << s << endl;


		cout << "������ �4  ����� ������������ ����� ����� �� � �� 20\n";
		int s = 1;
		int a, i;
		cout << "������� �������� �: "; cin >> a;
		for (i = a; i <= 20; i++)
		{
			s = s * i;
		}
		cout << "������������ ������ = " << s << endl;

		return 0;
}