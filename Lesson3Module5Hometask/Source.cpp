#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define size 20
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int length = size, task;
	do
	{
		cout << "Введите номер задания - ";
		cin >> task;

		switch (task)
		{
			case 1:
			{
				/*Ввести два массива действительных чисел, состоящих из 9 и 7 элементов.
					Сформировать третий массив из упорядоченных по возрастанию значений обоих массивов*/
				int m1[9], m2[7], m3[16];
				for (int i = 0; i < 10; i++)
				{
					if (i < 7)
					{
						m1[i] = -100 + rand() % 200;
						m2[i] = -100 + rand() % 200;
						cout << "Index [" << i << "], массив 1й - " << m1[i] << "\tмассив 2й - " << m2[i] << endl;
					}
					else if (i > 6 && i < 9)
					{
						m1[i] = -100 + rand() % 200;
						cout << "Index [" << i << "], массив 1й - " << m1[i] << endl;
					}
				}
				cout << "МАССИВ № 3" << endl;
				for (int i = 0; i < 16; i++)
				{
					if (i < 7)
						m3[i] = m2[i];
					else if (i >= 7)
						m3[i] = m1[i - 7];
					cout << "Index [" << i << "] === " << m3[i] << endl;
				} 
				cout << "МАССИВ № 3 - отсортированный" << endl;
				for (int i = 0; i < 16; i++)
				{
					for (int j = 16 - 1; j >= 0; j--)
					{
						if (m3[j - 1] > m3[j])
						{
							int temp = m3[j - 1];
							m3[j - 1] = m3[j];
							m3[j] = temp;
						}
					}
					cout << "Index [" << i << "] === " << m3[i] << endl;
				} 
			} break;

			case 2:
			{
				/*В заданном целочисленном массиве R(9) определить индекс наибольшего из нечетных по значению положительных элементов*/
				int m[size], max = 0;
				for (int i = 0; i <length; i++)
				{
					m[i] = -100 + rand() % 200;
					if (m[i] % 2 != 0)
						if (m[i] > max)
							max = m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				} 
				for (int i = 0; i < length; i++)
				{
					if (m[i] == max)
						cout << "Index наибольшего и нечетного значения - " << i << ", значение = " << m[i] << endl;
				}
			} break;

			case 3:
			{
				/*Ввести массив, состоящий из 9 элементов(девять двузначных чисел) 
					целого типа.Получить новый массив, состоящий из сумм цифр элементов исходного массива*/
				int m[9], m2[9], sum = 0;
				for (int i = 0; i < 9; i++)
				{
					m[i] = 10 + rand() % 89;
					sum += m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				cout << "===================\n" << endl;
				for (int i = 0; i < 9; i++)
				{
					m2[i] = sum;
					cout << "Index [" << i << "] === " << m2[i] << endl;
				}
			} break;

			case 4:
			{
				/*Даны действительные числа c1, c2, …, cn.Найти произведение суммы чисел с четными индексами и суммы чисел с нечетными индексами.*/
				int m[size], sum1 = 0, sum2 = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					if (i % 2 == 0)
						sum1 += m[i];
					else if (i % 2 != 0)
						sum2 += m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				} cout << "\nПроивезведение суммы чисел с четными индексами, равное " << sum1 << endl;
				cout << "И сумма чисел с нечетными индексами равное " << sum2 << " == " << sum1 * sum2 << endl;
			} break;

			case 5:
			{
				/*Ввести массив, состоящий из 14 элементов действительного типа.
				Поменять местами первую половину со второй.Определить количество произведенных при этом перестановок.*/
				int m[size], m2[size], count = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				for (int i = 0; i < length; i++)
				{
					if (i < 10)
					{
						m2[i] = m[i + 10]; 
						count++;
					}	
					else if (i >= 10)
					{
						m2[i] = m[i - 10]; 
						count++;
					}
						
					cout << "Index [" << i << "] === " << m2[i] << endl;
				} cout << "Кол-во перестановок - " << count << endl;
			} break;

			case 6:
			{
				/*Определить количество локальных максимумов в заданном числовом массиве. 
					(Локальный максимум в числовом массиве – это последовательность трех рядом стоящих чисел, 
						в которой среднее число больше стоящих слева и справа от него).*/
				int m[size], count = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				for (int i = 1; i < length; i++)
				{
					if (m[i] > m[i - 1] && m[i] > m[i + 1])
						count++;
				}
				cout << "Кол-во локальных максимумов - " << count << endl;
			} break;

			case 7:
			{
				/*В заданном числовом массиве определить и вывести индексы последовательностей чисел, 
					которые монотонно убывают(каждое следующее число меньше предыдущего).*/
				int m[size], min;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
					if (i == 0)
						min = m[i];
				}
				cout << "===========" << endl;
				for (int i = 1; i < length; i++)
				{
					if (m[i] < min)
					{
						min = m[i];
						cout << "Index [" << i << "] === " << m[i] << endl;
					}	
				}
			} break;

			case 8:
			{
				/*Ввести массив, состоящий из 10 элементов(десять двузначных чисел) целого типа.
					Получить новый массив, состоящий из разностей цифр элементов исходного массива.*/
				int m[10], m2[10], raz;
				for (int i = 0; i < 10; i++)
				{
					m[i] = 10 + rand() % 89;
					if (i == 0)
						raz = m[i];
					else if (i > 0)
						raz -= m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				for (int i = 0; i < length; i++)
				{
					m2[i] = raz;
					cout << "Index [" << i << "] === " << m2[i] << endl;
				}
			} break;

			case 9:
			{
				/*Задан целочисленный массив.Определить количество участков массива, 
					на котором элементы монотонно возрастают(каждое следующее число больше предыдущего)*/
				int m[size], count = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				for (int i = 1; i < length; i++)
				{
					if (m[i] > m[i - 1])
						count++;
				} cout << "Кол-во участков - " << count << endl;
			} break;

			case 10:
			{
				/*Ввести два массива действительных чисел.Определить максимальные элементы в каждом массиве и поменять их местами.*/
				int m[size], m2[size], max = 0, max2 = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					if (m[i] > max)
						max = m[i];
					m2[i] = -100 + rand() % 200;
					if (m2[i] > max2)
						max2 = m2[i];
					cout << "Index [" << i << "], массив № 1 === " << m[i] << "\tмасив № 2 === " << m2[i] << endl;
				}
				cout << "MAX = " << max << "\tMAX2 = " << max2 << endl;
				cout << "====================" << endl;
				for (int i = 0; i < length; i++)
				{
					if (m[i] == max)
					{
						cout << "ДО\nIndex [" << i << "], массив № 1 === " << m[i] << "\tмасив № 2 === " << m2[i] << endl;
						cout << m[i] << " заменяем на " << max2 << endl;
						m[i] = max2;
						cout << "После\nIndex [" << i << "], массив № 1 === " << m[i] << "\tмасив № 2 === " << m2[i] << endl;
					}
					else if (m2[i] == max2)
					{	
						cout << "ДО\nIndex [" << i << "], массив № 1 === " << m[i] << "\tмасив № 2 === " << m2[i] << endl;
						cout << m2[i] << " заменяем на " << max << endl;
						m2[i] = max;
						cout << "После\nIndex [" << i << "], массив № 1 === " << m[i] << "\tмасив № 2 === " << m2[i] << endl;
					}	
				}
			} break;
		}
	} while (task < 11);

}
