#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int per[6] = { 11, -6, 5, -12, 9, -3 };
	float Sum = 0.0;
	float Sred = 0.0;
	
	for (size_t i = 0; i < 6; i++)
	{
		if (0 > per[i])
		{
			cout << "\nОтрицат = " << per[i];
		}
	}
	for (size_t i = 0; i < 6; i++)
	{
		
		if (0 < per[i])
		{
			cout << "\nПоложительные = " << per[i];
		}

		Sum = Sum + per[i];
		
	}
	for (size_t i = 0; i < 6; i++)
	{
		if (per[i] %2 == 0)
		{
			cout << "\nЧётное = " << per[i];
		}
	}
	for (size_t i = 0; i < 6; i++)
	{
		if (per[i] % 2 != 0)
		{
			cout << "\nНечётное = " << per[i];
		}
	}
	cout << "\nSumma = " << Sum;
	Sred = Sum / 6;
	cout << "\nSred = " << Sred;
	

}



