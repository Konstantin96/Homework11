#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <Windows.h>
#include<ctime>

using namespace std;
unsigned short int nz;


void main()
{
	setlocale(LC_ALL, ".1251");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	while (true)
	{
		srand(time(0));
		cout << "Введите номер задания, для выхода нажмите 0 "; 
		cin >> nz;
		if (nz == 0)
		{
			break;
		}
		else if (nz == 1)
		{
			system("cls");
			/* Массив предназначен для хранения значений весов двадцати человек. С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно*/

			int mas[20],count=0;
			cout << "Vesa 20 chelovek" << endl;
			for (int i = 0; i < 20; i++)
			{			
				count++;
				mas[i] = 50 + rand() % 50;
				cout << count << " chelovek vesit " << mas[i] << " kg" << endl;
			}

		}

		else if (nz == 2)
		{
			system("cls");
			/* 2.	Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали: 
              a.	убывающую последовательность; 
              b.	возрастающую последовательность
*/
			int mas[8];
			cout << "Massiv vozrastayushiy" << endl;

			for (int i = 0; i <= 8 - 1; i++)

			{
				mas[i] = 1 + rand() % 99;
			}
			for (int i = 0; i < 8; i++)
			{

				for (int j = (8 - 1); j > i; j--)

				{

					if (mas[j - 1] > mas[j])

					{

						int temp = mas[j - 1];

						mas[j - 1] = mas[j];

						mas[j] = temp;

					}

				}

				cout << mas[i] << "\t";

			}
			cout << endl;
			cout << "Massiv ubyvayushiy" << endl;

			for (int i = 7; 0 <= i; i--)
			{
				cout << mas[i] << "\t";
			}
			cout << endl;
		}

		else if (nz == 3)
		{
			system("cls");
			/* Ввести целочисленный массив, состоящий из 10 элементов. Поменять местами максимальный и первый элементы.*/
			int mas[10],w,s;
			cout << "Massiv vozrastayushiy" << endl;

			for (int i = 0; i <= 10 - 1; i++)

			{
				mas[i] = 1 + rand() % 99;
			}
			for (int i = 0; i < 10; i++)
			{

				for (int j = 10 ; j >= i; j--)

				{

					if (mas[j - 1] > mas[j])

					{

						int temp = mas[j - 1];

						mas[j - 1] = mas[j];

						mas[j] = temp;

					}

				}
				w = mas[0];
				s = mas[9];
				mas[0] = s;
				mas[9] = w;
				cout << mas[i] << "\t";

			}
			cout << endl;
		}

		else if (nz == 4)
		{
			/*4.	Задан массив, состоящий из 15 элементов вещественного типа. Определить количество элементов, значения которых больше первого элемента*/
			system("cls");
			int mas[15], count = 0;
			cout << "Massiv" << endl;
			for (int i = 0; i < 15; i++)
			{
				mas[i] = 50 + rand() % 50;
				cout << mas[i] << "\t";
				if (mas[0] < mas[i])
				{
					count++;
				}
			}
			cout << count << " elementa v massive bol'she pervogo";
			cout << endl;
		}

		else if (nz == 5)
		{
			system("cls");
			/* Ввести целочисленный массив, состоящий из 15 элементов. Определить сумму и разность максимального и минимального  элементов*/
			int mas[15] ;
			cout << "Massiv" << endl;

			for (int i = 0; i <= 15 - 1; i++)

			{
				mas[i] = 1 + rand() % 99;
			}
			for (int i = 0; i < 15; i++)
			{

				for (int j = 14; j >= 0; j--)

				{

					if (mas[j - 1] > mas[j])

					{
						int temp = mas[j - 1];

						mas[j - 1] = mas[j];

						mas[j] = temp;
					}

				}	
				cout << mas[i] << "\t";
			}
			cout << endl;
			cout << mas[0] << " - min ; " << mas[14] << " - max" << endl;

			cout << endl;
		}

		else if (nz == 6)
		{
			system("cls");
			/*6.	Ввести целочисленный массив, состоящий из 17 элементов. Заменить элементы кратные трем на сумму нечетных по значению элементов*/
			const int n = 17; 

			int a[n]; 
			int sum = 0;

			cout << endl << "25 элементов массива а(n)" << endl;
			for (int i = 0; i<n; i++)
			{
				a[i] = 1 + rand() % 99;
			}

			for (int i = 0; i<n; i++)
			{
				if (a[i] % 3 == 0)
					sum += a[i];
			}


			cout << endl << "Cумма элементов массива A кратных трем: " << sum << endl;
		}

		else if (nz == 7)
		{
			system("cls");
			/*7.	Ввести массив, состоящий из 15 элементов целого типа. Определить количество отрицательных, произведение положительных и количество нулевых элементов*/
			int mas[15], count = 0,sum=1;
			cout << "Massiv" << endl;
			for (int i = 0; i < 15; i++)
			{
				mas[i] = -50 + rand() % 100;
				cout << mas[i] << "\t";
				
			}
			cout << "Kol-vo otricatel'nyh elementov = ";
			for (int i = 0; i < 15; i++)
			{
				if (mas[i] < 0)
				{
					count++;					
				}
			}
			cout << count << endl;
			cout << endl;
			cout << "Proizvedenie polozhitel'nyh elementov = ";
			for (int i = 0; i < 15; i++)
			{
				if (mas[i] > 0)
				{
					sum*=mas[i];
				}
			}
			cout << sum << endl;
			cout << endl;
			cout << "Kol-vo nulevyh elementov = ";
			count = 0;
			for (int i = 0; i < 15; i++)
			{
				if (mas[i] == 0)
				{
					count++;
				}
			}
			cout << count << endl;
			cout << endl;
		}

		else if (nz == 8)
		{
			system("cls");
			/* Дан массив − 19 элементов целого типа. Найти сумму элементов, расположенных до первого отрицательного элемента. Если отрицательных элементов нет, то выдать соответствующее сообщение*/
			const int n = 19;
			int array[n] = { 0 };
			int i = 0, sum = 0;
			for (i = 0; i<n; ++i)
			{
				array[i] = -50 + rand() % 100;
				if (array[i]<0)
					break;
				sum += array[i];
			}
			if (i != n)
				cout << "Sum = " << sum << endl;
			else
				cout << "Not found negative numbers in array" << endl;
		}

		else if (nz == 9)
		{
			system("cls");
			/*9.	В заданном массиве М(12) действительных чисел увеличить минимальный элемент в три раза и поменять местами с последним*/
			int mas[12],min;
			cout << "Massiv" << endl;
			for (int i=0; i < 12; i++)
			{
				mas[i] = 1+rand() % 999;
				cout << mas[i] << " ";
			}
			min = mas[0];
			cout << endl;
			cout << "Min element = ";
			for (int i = 0; i < 12; i++)
			{
				if (mas[i] < min)
				{
					min = mas[i];
				}
			}
			cout << min << " ";
		}

		else if (nz == 10)
		{
			system("cls");
			/*Дан массив М(15) вещественных чисел. Расположить элементы в обратном порядке*/
			int mas[15], count = 0, sum = 1;
			cout << "Massiv" << endl;
			for (int i = 0; i < 15; i++)
			{
				mas[i] = -50 + rand() % 100;
				cout << mas[i] << "\t";

			}
			cout << endl;
			cout << "Massiv" << endl;
			for (int i = 14; 0 <= i; i--)
			{		
				cout << mas[i] << "\t";
			}
			cout << endl;
		}
	}
}
