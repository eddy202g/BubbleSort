// bubbleSortFlag.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int i = 0;
	int j = 0;
	int swapCount = 0;
	int sortCount = 0;
	int temp;
	int size = 6;
	int numberArray[] = { 2,45,27,17,5,9 };
	bool flag = false;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (numberArray[j] > numberArray[j + 1])
			{
				temp = numberArray[j];
				swapCount++;
				numberArray[j] = numberArray[j + 1];
				numberArray[j + 1] = temp;
			}
			sortCount++;
		}
	}

	cout << "Sorted Array\n";

	for (i = 0; i <= (size - 1); i++)
		cout << numberArray[i] << " ";

	cout << "\n" << "Number of times a number is swapped into temp\n" << swapCount;

	cout << "\n" << "Number of times looped\n" << sortCount;

	cin.get();
	return 0;
}

void swap2()
{
	int i = 0;
	int j = 0;
	int swapCount = 0;
	int sortCount = 0;
	int temp;
	int size = 6;
	int numberArray[] = { 2,45,27,17,5,9 };
	bool flag = false;

	for (i = 1; i < size; i++)
	{
		for (j = size - 1; j >= i; j--)
		{
			if (numberArray[j - 1] > numberArray[j])
			{
				temp = numberArray[j - 1];
				swapCount++;
				numberArray[j - 1] = numberArray[j];
				numberArray[j] = temp;
			}
			sortCount++;
		}
	}

	cout << "Sorted Array\n";

	for (i = 0; i <= (size - 1); i++)
		cout << numberArray[i] << " ";

	cout << "\n" << "Number of times a number is swapped into temp\n" << swapCount;

	cout << "\n" << "Number of times looped\n" << sortCount;
}