// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include "windows.h"
#include "time.h"
#include "math.h"


using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{
	const int n=5;
	int arr[n]; 			// опис масиву
	int i; 			// параметр циклу for 
				// лічильник додатніх елементів 
	srand(time(NULL)); 		// ініціалізація датчику
	for (i = 0; i <n; i++)
	{
		arr[i] = rand() % 100; // заповнення масиву
		cout<<"\t"<< arr[i]; // вивід ел-тів масиву 
	}

	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
		else (i % 5 == 0);
	}
	cout << "\n max=" << max << endl;
	system("pause");
	return 1;
}




