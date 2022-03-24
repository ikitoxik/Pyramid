#include <iostream>
#include <Windows.h>
using namespace std;

void print_pyramid(int height)
{
	int count = 0, space = height;
	for (int j = height; j > 0; j--)
	{
		count += 2;
		for (int i = space; i > 0; i--)
		{
			cout << " ";
		}
		for (int k = 0; k < count; k++)
		cout << "*";
		cout << "\n";
		space--;
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int p_height = 0;
	cout << "��� ��������� �������� �� ������ \"��������\" �������� ������.\n" << endl;
	
	do {
		cout << "������� ������ ��������:";
		cin >> p_height;
		if (p_height > 30 || p_height < 1)
			cout << "������� ������ �������� (�� ��������� �� 1 �� 30)\n";
	} while (p_height > 30 || p_height < 1);

	print_pyramid(p_height);
	return 0;
}