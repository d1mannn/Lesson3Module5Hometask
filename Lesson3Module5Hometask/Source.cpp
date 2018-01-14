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
		cout << "������� ����� ������� - ";
		cin >> task;

		switch (task)
		{
			case 1:
			{
				/*������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������.
					������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������*/
				int m1[9], m2[7], m3[16];
				for (int i = 0; i < 10; i++)
				{
					if (i < 7)
					{
						m1[i] = -100 + rand() % 200;
						m2[i] = -100 + rand() % 200;
						cout << "Index [" << i << "], ������ 1� - " << m1[i] << "\t������ 2� - " << m2[i] << endl;
					}
					else if (i > 6 && i < 9)
					{
						m1[i] = -100 + rand() % 200;
						cout << "Index [" << i << "], ������ 1� - " << m1[i] << endl;
					}
				}
				cout << "������ � 3" << endl;
				for (int i = 0; i < 16; i++)
				{
					if (i < 7)
						m3[i] = m2[i];
					else if (i >= 7)
						m3[i] = m1[i - 7];
					cout << "Index [" << i << "] === " << m3[i] << endl;
				} 
				cout << "������ � 3 - ���������������" << endl;
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
				/*� �������� ������������� ������� R(9) ���������� ������ ����������� �� �������� �� �������� ������������� ���������*/
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
						cout << "Index ����������� � ��������� �������� - " << i << ", �������� = " << m[i] << endl;
				}
			} break;

			case 3:
			{
				/*������ ������, ��������� �� 9 ���������(������ ���������� �����) 
					������ ����.�������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������*/
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
				/*���� �������������� ����� c1, c2, �, cn.����� ������������ ����� ����� � ������� ��������� � ����� ����� � ��������� ���������.*/
				int m[size], sum1 = 0, sum2 = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					if (i % 2 == 0)
						sum1 += m[i];
					else if (i % 2 != 0)
						sum2 += m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				} cout << "\n�������������� ����� ����� � ������� ���������, ������ " << sum1 << endl;
				cout << "� ����� ����� � ��������� ��������� ������ " << sum2 << " == " << sum1 * sum2 << endl;
			} break;

			case 5:
			{
				/*������ ������, ��������� �� 14 ��������� ��������������� ����.
				�������� ������� ������ �������� �� ������.���������� ���������� ������������� ��� ���� ������������.*/
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
				} cout << "���-�� ������������ - " << count << endl;
			} break;

			case 6:
			{
				/*���������� ���������� ��������� ���������� � �������� �������� �������. 
					(��������� �������� � �������� ������� � ��� ������������������ ���� ����� ������� �����, 
						� ������� ������� ����� ������ ������� ����� � ������ �� ����).*/
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
				cout << "���-�� ��������� ���������� - " << count << endl;
			} break;

			case 7:
			{
				/*� �������� �������� ������� ���������� � ������� ������� ������������������� �����, 
					������� ��������� �������(������ ��������� ����� ������ �����������).*/
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
				/*������ ������, ��������� �� 10 ���������(������ ���������� �����) ������ ����.
					�������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������.*/
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
				/*����� ������������� ������.���������� ���������� �������� �������, 
					�� ������� �������� ��������� ����������(������ ��������� ����� ������ �����������)*/
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
				} cout << "���-�� �������� - " << count << endl;
			} break;

			case 10:
			{
				/*������ ��� ������� �������������� �����.���������� ������������ �������� � ������ ������� � �������� �� �������.*/
				int m[size], m2[size], max = 0, max2 = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					if (m[i] > max)
						max = m[i];
					m2[i] = -100 + rand() % 200;
					if (m2[i] > max2)
						max2 = m2[i];
					cout << "Index [" << i << "], ������ � 1 === " << m[i] << "\t����� � 2 === " << m2[i] << endl;
				}
				cout << "MAX = " << max << "\tMAX2 = " << max2 << endl;
				cout << "====================" << endl;
				for (int i = 0; i < length; i++)
				{
					if (m[i] == max)
					{
						cout << "��\nIndex [" << i << "], ������ � 1 === " << m[i] << "\t����� � 2 === " << m2[i] << endl;
						cout << m[i] << " �������� �� " << max2 << endl;
						m[i] = max2;
						cout << "�����\nIndex [" << i << "], ������ � 1 === " << m[i] << "\t����� � 2 === " << m2[i] << endl;
					}
					else if (m2[i] == max2)
					{	
						cout << "��\nIndex [" << i << "], ������ � 1 === " << m[i] << "\t����� � 2 === " << m2[i] << endl;
						cout << m2[i] << " �������� �� " << max << endl;
						m2[i] = max;
						cout << "�����\nIndex [" << i << "], ������ � 1 === " << m[i] << "\t����� � 2 === " << m2[i] << endl;
					}	
				}
			} break;
		}
	} while (task < 11);

}
