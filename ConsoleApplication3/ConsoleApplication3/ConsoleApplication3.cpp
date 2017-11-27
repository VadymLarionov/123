// ConsoleApplication3.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include "iostream"
#include "windows.h"
#include "time.h"
#include "math.h"


using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{
	const int n=5;
	int arr[n]; 			
	int i; 			
				
	srand(time(NULL)); 		
	for (i = 0; i <n; i++)
	{
		arr[i] = rand() % 100; 
		cout<<"\t"<< arr[i]; 
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




