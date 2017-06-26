#include <iostream>
#include "QuickSort.h"
using namespace std;

void Print(int* list, int num);

int main(int argvCount, char* argvs[])
{
	int intList[11]{ 12,5,56,8,-1,90, 78, 901, 45, 66, 9 };

	Print(intList, 11);
	qsort<int>(intList, 0, 10);
	Print(intList, 11);
	system("pause");
	return 0;
}

void Print(int* list, int num)
{
	for (int var = 0; var<num; var++)
	{
		cout << list[var] << "  ";
	}
	cout << endl;
}