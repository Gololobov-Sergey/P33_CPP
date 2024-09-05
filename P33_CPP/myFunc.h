#pragma once
#include<iostream>
#include<iomanip>

using namespace std;


void printLine(int n = 10, char s = '*')
{
	for (size_t i = 0; i < n; i++)
	{
		cout << s;
	}
	cout << endl;
}


int Sum(int a, int b)
{
	return a + b;
}

float avg(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}


void setArray(int arr[], int size, int minValue = 0, int maxValue = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}


float avgArray(int arr[], int size)
{
	float Number = 0.f;
	for (size_t i = 0; i < size; i++)
	{
		Number += arr[i];
	}

	return Number / size;
}




bool isEven(int a)
{
	return a % 2 == 0;
}

bool isPositive(int a)
{
	return a > 0;
}


void printcool(int arr[], int size)
{
	printLine(size * 2 - 1);
	printArray(arr, size);
	printLine(size * 2 - 1);
}
