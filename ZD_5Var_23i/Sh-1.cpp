﻿// Sh-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	while (1)
	{
		int a;
		cout << "Выберите действие: " << "\n" << "любое число - определить кол-во промежутков монотонности массива" << "\n" << "0 - выход" << "\n";
		cin >> a;
		cout << "\n";
		if (a == 0)
			break;
		else
		{
			while (1)
			{
				srand(time(0));
				int N, count = 0;
				int lp, lm;
				lp = 0;
				lm = 0;
				cout << "Введите длину массива" << "\n";
				cin >> N;
				cout << "\n";
				if (N >= 3)
				{
					int* mass = new int[N];
					for (int c = 0; c < N; c++)
					{
						mass[c] = rand();
					}
					cout << "Значения массива: " << "\n"<<"\n";
					cout << "1) " << mass[0] << "\n";
					for (int c = 1; c < N; c++)
					{
						if (mass[c - 1] < mass[c])
						{
							cout << "+" << "\n" << c + 1 << ") " << mass[c] << "\n";
							lp = lp + 1;
							if (lm > 1)
								count = count + 1;
							lm = 0;
						}
						else
							if (mass[c - 1] > mass[c])
							{
								cout << "-" << "\n" << c + 1 << ") " << mass[c] << "\n";
								lm = lm + 1;
								if (lp > 1)
									count = count + 1;
								lp = 0;
							}
							else
							{
								cout << "=" << "\n" << c + 1 << ") " << mass[c] << "\n";
								if (lp > 1 || lm > 1)
									count = count + 1;
								lp = 0;
								lm = 0;
							}
					}
					if (count > 0)
					{
						cout << "\n";
						cout << "Ответ: кол-во промежутков монотонности - " << count << "\n";
						cout << "\n";
					}
					else
					{
						cout << "\n";
						cout << "Промежутков монотонности нет" << "\n";
						cout << "\n";
					}
				}
				else
				{
					cout << "Введена некорректная длина массива (меньше 3)!" << "\n"<<"\n";
				}
				break;
			}
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
