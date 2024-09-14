#pragma once
#include<iostream>
#include<iomanip>

using namespace std;


enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printLine(int n = 10, char s = '*')
{
	for (size_t i = 0; i < n; i++)
	{
		cout << s;
	}
	cout << endl;
}

template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a + b)
{
	return a + b + c;
}

float avg(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}

template<class T>
void setArray(T* arr, int size, int minValue = 0, int maxValue = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<class T>
void printArray(const T* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



/// <summary>
/// Середне арифметичне елементів масиву
/// </summary>
/// <param name="arr">- вхідний масив</param>
/// <param name="size">- розмір масиву</param>
/// <returns>Середне арифметичне</returns>
float avgArray(int arr[], int size)
{
	float Number = 0.f;
	for (size_t i = 0; i < size; i++)
	{
		Number += arr[i];
	}

	return Number / size;
}


template<class T>
T getSum(T arr[], int size)
{
	T sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}


template<class T>
int findIndex(T arr[], int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if(arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}



bool isEven(int a)
{
	return a % 2 == 0;
}

bool isPositive(int a)
{
	return a > 0;
}


int digitNumber(int n)
{
	int count = 0;
	if (n <= 0)
	{
		count = 1;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}


int countDigitArray(int arr[], int size)
{
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		count += digitNumber(arr[i]);
	}
	return count;
}

void printcool(int arr[], int size)
{
	int countStars = countDigitArray(arr, size) + size - 1;
	printLine(countStars);
	printArray(arr, size);
	printLine(countStars);
}

template<class T>
void addValueArray(T*& arr, int& size, T value)
{
	T* t = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		t[i] = arr[i];
	}

	t[size] = value;

	delete arr;

	size++;

	arr = t;
}

//TODO


template<class T>
void delValueArray(T*& arr, int& size)
{
	T* t = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		t[i] = arr[i];
	}
	delete arr;
	size--;
	arr = t;
}

template<class T>
void addValuePosArray(T*& arr, int& size, T value, int index)
{
	
}

template<class T>
void delValuePosArray(T*& arr, int& size, int index)
{
	
}

template<class T>
void swap_(T a, T b)
{
	T t = a;
	a = b;
	b = t;
}

void func(const int* a)
{
	//*a = 99;
}

int* isInclude(int* a, int sizeA, int* b, int sizeB)
{
	for (size_t i = 0; i < sizeA; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < sizeB; j++)
		{
			if (a[i] == b[j]) 
			{
				i++;
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}
		if(flag == true)
			return &a[i - sizeB];
	}
	return nullptr;
}