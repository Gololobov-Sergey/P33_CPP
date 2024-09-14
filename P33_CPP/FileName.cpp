#include<iostream>
#include<Windows.h>
#include"Timer.h"
#include<algorithm>
#include<iomanip>
#include<conio.h>

#include"myFunc.h"

using namespace std;


//type name(param)
//{
//	body
//}

enum DIRECTION
{
	UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ESC = 27
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	srand(time(0));


	// 14.09.2024
	// ===========================================================================


	/*  Написати функцію, яка отримує як аргумент покажчики на два масиви(А і В) 
		і розміри масивів.Функція перевіряє, чи є масив В підмножиною масиву А, 
		і повертає покажчик на початок знайденого фрагмента або повертає 0 у
		протилежному випадку.*/

	int sizeA = 10, sizeB = 3;
	int* a = new int[sizeA] {1, 2, 2, 4, 5, 6, 7, 12, 2, 2};
	int* b = new int[sizeB] {12, 2, 2};
	int* c = isInclude(a, sizeA, b, sizeB);
	if (c != nullptr)
	{
		cout << *c << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	//int a = 9;
	//const int* p = &a; //покажчик на константне значення
	//a = 55;
	//// *p = 99; // error
	//int b = 5;
	//p = &b;

	//int* const p = &a; // константний покажчик
	//*p = 99;
	//int b = 9;
	////p = &b; //error

	//const int* const p = &a; // константний покажчик на константне значення
	//*p = 99;
	//int b = 99;
	//p = &b;

	/*int a = 6;
	const int& r = a;
	r = 99;*/



	/*int sizeA;
	cin >> sizeA;

	int* A = new int[sizeA];

	setArray(A, sizeA);

	printArray(A, sizeA);

	addValueArray(A, sizeA, 999);*/

	/*int sizeB = 0;
	for (size_t i = 0; i < sizeA; i++)
	{
		if (A[i] % 2 == 0)
		{
			sizeB++;
		}
	}

	int* B = new int[sizeB];
	
	int c = 0;
	for (size_t i = 0; i < sizeA; i++)
	{
		if (A[i] % 2 == 0)
		{
			B[c++] = A[i];
		}
	}

	printArray(B, sizeB);*/



	//  Дано два масиви : А[M] і B[N](M і N вводяться з клавіатури).
	//	Необхідно створити третій масив мінімально можливого розміру, 
	//	у якому потрібно зібрати елементи обох масивів.

	/*int sizeA, sizeB;
	cin >> sizeA >> sizeB;

	int* A = new int[sizeA];
	int* B = new int[sizeB];
	setArray(A, sizeA);
	setArray(B, sizeB);
	printArray(A, sizeA);
	printArray(B, sizeB);

	int sizeC = sizeA + sizeB;
	int* C = new int[sizeC];

	for (size_t i = 0; i < sizeA; i++)
	{
		C[i] = A[i];
	}

	for (size_t i = 0; i < sizeB; i++)
	{
		C[sizeA+i] = B[i];
	}
	printArray(C, sizeC);*/


	/*int a = 5, b = 9;
	cout << a << " " << b << endl;
	swap_(a, b);

	cout << a << " " << b << endl;*/


	//int a = 5;          int b = 9;
	///*int* pa = &a;*/   int& rb = b;
	///**pa = 99;*/       rb = 99;
	///*pa = &b;*/        rb = a;

	//cout << b << endl;


	// 12.09.2024
	// ===========================================================================


	/*int a = 5;

	cout << a << endl;
	cout << &a << endl;
	cout << sizeof(a) << endl;
	cout << typeid(a).name() << endl;

	int* pa = &a;*/
	/*cout << pa << endl;
	*pa = 99;

	cout << a << endl;
	cout << *pa << endl;

	int b = 10;
	pa = &b;

	*pa = 555;

	cout << b << endl;*/

	//cout << sizeof(pa) << endl;


	/*int a = 8, b = 9;
	int* pa = &a;
	int* pb = &b;
	cout << pa << endl;
	cout << pb << endl;
	int* pc = nullptr;

	cout << (pa != nullptr) << endl;

	cout << *(pa + 1) << endl;*/

	// p + n = p + type*n


	//const int size = 4;
	//int a[size] = { 10,25,3,4 };

	//int size = 5;
	////cin >> s;
	//int* p = new int[size];
	//setArray(p, size);
	//printArray(p, size);

	//addValueArray(p, size, 999);

	//printArray(p, size);

	//delValueArray(p, size);

	//printArray(p, size);


	


	//cout << a << endl;
	//printArray(a, size);

	////int* p = a;

	//for(int i = size-1; i >= 0; i--)
	//{
	//	cout << *(a + i) << endl;
	//	//cout << a[i] << endl;
	//}

	//for (int* i = a; i != a + size; i++)
	//{
	//	cout << *i << endl;
	//}
	
	// *(a + i) = a[i]


	// 05.09.2024 
	// ===========================================================================

	/*SetColor(Red, Black);

	CONSOLE_CURSOR_INFO curs = { 0 };
	curs.dwSize = sizeof(curs);
	curs.bVisible = FALSE;
	::SetConsoleCursorInfo(::GetStdHandle(STD_OUTPUT_HANDLE), &curs);*/

	/*for (size_t i = 0; i < 80; i++)
	{
		gotoxy(i, 0);
		cout << 0;
		Sleep(200);
		gotoxy(i, 0);
		cout << " ";
	}*/

	/*int x = 0, y = 0;
	gotoxy(x, y);
	cout << 0;
	while (true)
	{
		
		if (_kbhit())
		{
			gotoxy(x, y);
			cout << " ";

			char c = _getch();
			switch (c)
			{
			case UP:
				if (y > 0) y--;
				break;
			case DOWN:
				if (y < 20) y++;
				break;
			case LEFT:
				if (x > 0) x--;
				break;
			case RIGHT:
				if (x < 80) x++;
				break;
			case ESC:
				break;
			default:
				break;
			}
			gotoxy(x, y);
			cout << 0;
		}
	}*/



	/*const int size = 10;
	int arr[size];

	setArray(arr, size);
	printArray(arr, size);

	if (findIndex(arr, size, 3) == -1)
	{

	}*/


	/*cout << Sum('C', 3, 5.6) << endl;

	auto a = true;
	int c = 9;

	decltype(a+c) b;*/

	//avgArray(arr, size);


	// 05.09.2024 
	// ===========================================================================

	/*const int size = 10;
	int arr[size];

	setArray(arr, size, -10, 9);*/
	//printArray(arr, size);
	//
	/*printLine();
	printLine(20);
	printLine(30, '$');

	float avg = avgArray(arr, size);
	for (size_t i = 0; i < size; i++)
	{
		arr[i] *= avg;
	}*/


	//printcool(arr, size);

	//   *************
	//   1 3 6 4 3 5 7
	//   *************

	/*if (!isEven(2) && isPositive(2))
	{

	}*/

	// 29.06.2024 
	// ===========================================================================

	/*printLine();
	printLine();
	printLine();
	printLine();


	cout << Sum(5, 4) << endl;
	cout << avg(3,4,6) << endl;*/

	/*const int row = 5, col = 5;
	int arr[row][col];
	int minValue = 1, maxValue = 12;*/

	/*for (size_t i = 0; i < 256; i++)
	{
		cout << (char)i << " ";
	}*/

	// 0 0 0 1
	// 1 0 0 0
	// 0 1 0 0
	// 0 0 1 0

	//[3 0 1 2]

	/*int uniqIndex[row];
	for (int i = 0; i < row; i++)
	{
		int rnd = rand() % row;
		bool flag = true;
		for (size_t k = 0; k < i; k++)
		{
			if (uniqIndex[k] == rnd)
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			uniqIndex[i] = rnd;
		}
		else
		{
			i--;
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		arr[i][uniqIndex[i]] = 1;
	}*/

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}*/



	// n = 4

	//  1  2  3  4
	//  8  7  6  5
	//  9 10 11 12
	// 16 15 14 13

	// - - - - |
	//         |
	// | - - - |
	// |       
	// | - - - |

	/*int n = 1;
	for (size_t i = 0; i < row; i++)
	{
		if (i % 2 == 0)
		{
			for (size_t j = 0; j < col; j++)
			{
				arr[i][j] = n++;
			}
		}
		else
		{
			for (int j = col-1; j >= 0; j--)
			{
				arr[i][j] = n++;
			}
		}
	}*/



	/*int max = arr[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}

	int countMax = 0;
	while (max > 0)
	{
		countMax++;
		max /= 10;
	}

	int len = countMax + 1 + 1;
	int maxSum = 0;
	int imaxRow = 0;
	int sumRow[row];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(len) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;*/


	/*for (size_t j = 0; j < col; j++)
	{
		for (size_t i = 0; i < row/2; i++)
		{
			swap(arr[i][j], arr[row-1-i][j]);
		}
	}*/

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = i+1; j < col; j++)
		{
			swap(arr[i][j], arr[j][i]);
		}
	}*/


	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col - 1 - i; j++)
		{
			swap(arr[i][j], arr[row - 1 - j][col - 1 - i]);
		}
	}*/




	//=====================================================
	/*int sumCol[col];
	for (size_t j = 0; j < col; j++)
	{
		int sum = 0;
		for (size_t i = 0; i < row; i++)
		{
			sum += arr[i][j];
		}
		sumCol[j] = sum;
	}

	for (size_t k = 0; k < col-1; k++)
	{
		for (size_t j = 0; j < col-1-k; j++)
		{
			if(sumCol[j] > sumCol[j + 1])
			{
				swap(sumCol[j], sumCol[j + 1]);
				for (size_t i = 0; i < row; i++)
				{
					swap(arr[i][j], arr[i][j + 1]);
				}
			}
		}
	}*/

	//=====================================================

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(len) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;*/


	// 22.06.2024 
	// ===========================================================================

	//const int row = 5, col = 5;
	//int arr[row][col];
	//int minValue = 1, maxValue = 12;
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
	//	}
	//}

	//int max = arr[0][0];
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		if (arr[i][j] > max)
	//		{
	//			max = arr[i][j];
	//		}
	//	}
	//}

	//int countMax = 0;
	//while (max > 0)
	//{
	//	countMax++;
	//	max /= 10;
	//}
	//
	//int len = countMax + 1 + 1;
	//int maxSum = 0;
	//int imaxRow = 0;
	//int sumRow[row];
	//for (size_t i = 0; i < row; i++)
	//{
	//	int sum = 0;
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		cout << setw(len) << arr[i][j];
	//		sum += arr[i][j];
	//	}
	//	sumRow[i] = sum;
	//	cout << " | " << sum;
	//	cout << endl;
	//	if (sum > maxSum)
	//	{
	//		maxSum = sum;
	//		imaxRow = i;
	//	}
	//}
	////cout << imaxRow << endl;
	//cout << "--------------------------" << endl;

	//maxSum = 0;
	//int imaxCol = 0;
	//for (size_t j = 0; j < col; j++)
	//{
	//	int sum = 0;
	//	for (size_t i = 0; i < row; i++)
	//	{
	//		sum += arr[i][j];
	//	}
	//	cout << setw(len) << sum;
	//	if (sum > maxSum)
	//	{
	//		sum = maxSum;
	//		imaxCol = j;
	//	}
	//	
	//}
	//cout << endl;
	//cout << imaxRow << endl;
	//cout << imaxCol << endl;


	//for (size_t i = 0; i < row-1; i++)
	//{
	//	for (size_t j = 0; j < row-1-i; j++)
	//	{
	//		if (sumRow[j] < sumRow[j + 1]) 
	//		{
	//			swap(sumRow[j], sumRow[j + 1]);
	//			for (size_t k = 0; k < col; k++)
	//			{
	//				swap(arr[j][k], arr[j+1][k]);
	//			}
	//		}
	//	}
	//}

	//cout << endl;
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		cout << setw(len) << arr[i][j];
	//	}
	//	cout << " | " << sumRow[i];
	//	cout << endl;

	//}

	//===================================================

	/*const int row = 5, col = 5;
	int arr[row][col];
	int minValue = 1, maxValue = 12;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}

	int max = arr[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}

	int countMax = 0;
	while (max > 0)
	{
		countMax++;
		max /= 10;
	}

	int len = countMax + 1 + 1;
	int maxSum = 0;
	int imaxRow = 0;
	int sumRow[row];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(len) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;


	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col/2; j++)
		{
			swap(arr[i][j], arr[i][col-1-j]);
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(len) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;*/

	//cout << arr << endl;

	//cout << time(0) << endl;

	//const int size = 20000;
	//int arr[size];// = {3,5,8,0};

	//cout << arr << endl;
	//int minValue = 0, maxValue = 2000;
	//for (size_t i = 0; i < size; i++)
	//{
	//	//cin >> arr[i];
	//	arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	//}

	/*for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	/*int t = arr[0];
	arr[0] = arr[size - 1];
	arr[size - 1] = t;*/

	//swap(arr[0], arr[size - 1]);

	//Timer t;

	//sort(arr, arr + size);

	/*for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0; j < size-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}*/
	//cout << t.elapsed() << endl;
	/*for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/




	/*int max = arr[0], min = arr[0], imax = 0, imin = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}

		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	}

	int s = 0;
	int start = (imax < imin) ? imax : imin;
	int end = (imax > imin) ? imax : imin;
	for (size_t i = start + 1; i < end; i++)
	{
		s += arr[i];
	}
	cout << s << endl;*/


	/*int m = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > m)
		{
			m = arr[i];
		}
	}
	cout << m << endl;*/


	/*int col = 1;
	for (size_t i = 0; i < size-1; i++)
	{
		if (arr[i] < arr[i + 1]) {
			col++;
		}
	}
	if (col == size) {
		cout << true;
	}
	else {
		cout << false;
	}*/




	/*int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	cout << count << endl;*/

	//Timer t;
	//int count = 0;
	//for (size_t i = 1; i < 500000; i++)
	//{
	//	int a5 = i % 10;
	//	int a4 = i / 10 % 10;
	//	int a3 = i / 100 % 10;
	//	int a2 = i / 1000 % 10;
	//	int a1 = i /10000;
	//	if (a1 == 1 && a2 == 3 || a2 == 1 && a3 == 3 || a3 == 1 && a4 == 3 || a4 == 1 && a5 == 3 || a1 == 4 || a2 == 4 || a3 == 4 || a4 == 4 || a5 == 4)
	//	{
	//		count++;
	//		//cout << i << " ";
	//	}
	//}
	//cout << t.elapsed() << endl;
	//cout << count << endl;


	// 20.06.2024 
	// ===========================================================================


	/*typedef unsigned char UC;
	UC c = 'ь';
	cout << (int)c << endl;*/



	/*int n;
	cin >> n;
	for (int i = 1; i <= 10; i++)
	{
		cout << n << " x " << i << " = " << i * n << endl;
	}*/



	// Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1.2,
	// 1.4, ..., 2 кг конфет.





	/*for (size_t i = 0; i < 10; i++)
	{

	}

	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}*/


	/*int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << a << endl;
	cout << b << endl;*/

	/*int n, m = 0, k = 0;
	cin >> n;
	while (n > 0)
	{
		int r = n % 10;
		if (r != 3 && r != 6)
		{
			m = m + r * pow(10, k++);
		}
		n /= 10;
	}

	cout << m << endl;*/



	// Дано целое число N(> 1).Найти наименьшее целое число K, при кото -
	// ром выполняется неравенство 3^K > N.


	/*int n, s = 0;
	cin >> n;
	while (n > 0)
	{
		int r = n % 10;
		s += r;
		n /= 10;
	}
	cout << s << endl;*/



	/*int n, rn = 0, r;
	cin >> n;
	while (n != 0)
	{
		r = n % 10;
		rn = rn * 10 + r;
		n /= 10;
	}
	cout << rn;*/


	/*int a, s = 0;
	do
	{
		cin >> a;
		s += a;
	} while (a != 0);
	cout << s << endl;*/

	/*while (true)
	{
		break;
		int a = 0;
	}

	do
	{

	} while (true);*/

	/*int a = 5, b = 4, c = 9;
	int max;
	if (a > b && a > c)
	{
		max = a;
	}
	else
	{
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}*/


	// (condition)? oper1 : oper2;

	/*(a > b)? max = a : max = b;

	max = (a > b) ? a : b;

	max = (a > b && a > c) ? a : (b > c) ? b : c;*/


	// 15.06.2024 
	// ===========================================================================

	/*

	if (condition);
	{
		oper1;
	}
	else
	{
		oper2;
	}

	*/

	/*int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a > b && a > c)
	{
		cout << a << endl;
		int n = 100;
	}
	else if (b > c)
	{
		cout << b << endl;
	}
	else
	{
		cout << c << endl;
	}*/



	/*int a, b, c, d, num = 0;

	cin >> a >> b >> c >> d;

	if (a % 2 == 0)
	{
		++num;
	}

	if (b % 2 == 0)
	{
		++num;
	}

	if (c % 2 == 0)
	{
		++num;
	}

	if (d % 2 == 0)
	{
		++num;
	}

	cout << "Count: " << num << endl;*/




	// Определить, останется ли в клеёнке более N дырок если во время 
	// обеда K раз проткнуть её вилкой с M отломанными зубчиками 
	// и L раз – целой вилкой, у которой S зубчиков.


	/*int K, M, L, S, N, num;
	cin >> K >> M >> L >> S >> N;
	num = K * (S - M) + S * L;

	cout << num << " D " << endl;

	if (num > N)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}*/



	//Написать программу решения квадратного уравнения ax2 + bx + c = 0. Если известны его коэффициенты a, b, c.

	/*float a, b, c, D, x1, x2;
	cout << "a : "; cin >> a;
	cout << "b : "; cin >> b;
	cout << "c : "; cin >> c;

	if (a > 0)
	{
		D = b * b - 4 * a * c;
		if (D > 0)
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << "X1 = " << x1 << endl;
			cout << "X2 = " << x2 << endl;

		}
		else
		{
			if (D == 0)
			{
				x1 = -b / (2 + a);
				cout << "X = " << x1 << endl;
			}
			else
			{
				cout << "No solution";
			}
		}
	}
	else
	{
		cout << "Not square" << endl;

	}*/


	// Найти произведение двух наибольших чисел из трёх введённых с клавиатуры.




	// Написать программу учёта денежной скидки в зависимости от суммы.
	// Если покупатель приобрел товара на сумму 
	// больше 100 гривен, то скидка 5 %, 
	// более 500грн.– 10 %, 
	// более 1000грн – 25 % .
	// Приложение должно выдать сумму, которую должен уплатить покупатель и 
	// размер скидки в %, которую он получил.

	/*int s, p = 0;
	float S;
	cin >> s;
	if (s >= 100 && s < 500)
	{
		p = 5;
	}
	else if (s >= 500 && s < 1000)
	{
		p = 10;
	}
	else if (s >= 1000)
	{
		p = 25;
	}
	S = s - (s * p / 100.);
	cout << "S = " << S << endl;
	cout << "P = " << p << endl;*/



	// Дано целое число, лежащее в диапазоне -999 – 999.Вывести его строку -
	// описание вида «четное двузначное число», «нечетное трехзначное число»
	// и т.д.


	/*int n;

	cout << "Число "; cin >> n;
	if (n % 2 == 0)
	{
		cout << "Парне";
	}
	else
	{
		cout << "Не парне";
	}

	if (n < 10)
	{
		cout << " однозначне";
	}
	else if (n >= 10 and n < 100)
	{
		cout << " двузначне";
	}
	else if (n >= 100 and n < 1000)
	{
		cout << " трьохзначне";
	}

	cout << " число" << endl;*/


	// Написать программу калькулятора на четыре действия : +-*/ .
	// 5+4

	/*int a, b;
	char op;
	cin >> a >> op >> b;

	switch (op)
	{
	case '+': cout << a + b << endl; break;
	case '-': cout << a - b << endl; break;
	case '*': cout << a * b << endl; break;
	case '/': cout << a / b << endl; break;
	default:
		cout << "Not operation" << endl;
		break;
	}*/


	/*if (op == '+')
	{
		cout << a + b << endl;
	}
	else if (op == '-')
	{
		cout << a - b << endl;
	}
	else if (op == '*')
	{
		cout << a * b << endl;
	}
	else if (op == '/')
	{
		cout << a / b << endl;
	}
	else
	{
		cout << "Not operation" << endl;
	}*/


	/*int num;
	cin >> num;
	switch (num)
	{
	case 1: case 2: case 12: cout << "3UMA" << endl; break;
	case 3:	case 4: case 5: cout << "BECHA" << endl; break;
	case 6: case 7: case 8: cout << "LITO" << endl; break;
	case 9: case 10: case 11: cout << "OCIHb" << endl; break;
	default: cout << "Not month" << endl; break;
	}*/




	// 13.06.2024 
	// ===========================================================================

	/*int a;
	//cin >> a;
	cout << a << endl;*/

	// - , + , ++ , --
	// = , + , - , * , / , += , -= , *= , /= , % , %=

	// () , {} , << , >> , | , & , ~ , [] , ,  . -> , ?: , # , ; @ , \ , sizeof 

	//int a = 5, b = 4, c;
	//c = -a;
	//c = +a;
	//a = a + b;
	//a += 1; // a = a + 1
	//cout << a << endl;  //5
	//cout << a++ << endl; //6
	//cout << a << endl; //6
	//cout << ++a << endl; //6
	//cout << a << endl;   //5

	/*c = a-- * (a++ + ++b/--a);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;*/

	/*c = 5 % 3;
	cout << c << endl;

	cout << 5 / 2. << endl;

	double d = 5.53;
	float f = d;*/


	/*int a, b, c;
	double S, P;

	cin >> a;
	cin >> b;
	cin >> c;
	P = (a + b + c) / 2.;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	cout << S << endl;
	cout << P << endl;*/


	/*Скорость первого автомобиля V1 км / ч, второго — V2 км / ч, расстояние
	между ними S км.Определить расстояние между ними через T часов, если
	автомобили удаляются друг от друга.*/


	/*int V1, V2, S, t, S3;
	cin >> V1;
	cin >> V2;
	cin >> S;
	cin >> t;
	S3 = V1 * t + V2 * t + S;
	cout << S3 << endl;*/


	// Дано трехзначное число.В нем зачеркнули первую справа цифру и
	// приписали ее слева.Вывести полученное число.

	/*int a, b;
	cin >> a;
	int a1, a2, a3;
	a1 = a / 100;
	a2 = a / 10 % 10;
	a3 = a % 10;
	b = a2 * 100 + a3 * 10 + a1;
	cout << b << endl;*/


	// Даны целые положительные числа A, B, C.На прямоугольнике раз -
	// мера A × B размещено максимально возможное количество квадратов со
	// стороной C(без наложений).Найти количество квадратов, размещенных
	// на прямоугольнике, а также площадь незанятой части прямоугольника.


	// !
	// < , > , == , != , >= , <= , && , || , ^ 

	/*int a = 5, b = 4;
	bool c;
	c = 0 == 0 and not(5 >= 5) and 5 > 4 && 3 == 3;
	cout << c << endl;*/

	//int a, b, c;
	//cin >> a >> b >> c;
	//bool c = 



	/*cout << (bool)5 << endl;
	cout << (bool)4 << endl;
	cout << (bool)-5 << endl;
	cout << (bool)0 << endl;*/


	// 08.06.2024 
	// ===========================================================================

	//cout << "Hello C++" << endl;
	//cout << "Мене звати Сергій" << endl;
	////cout << '\a' << endl;

	//cout << 100 << endl;
	//cout << 3.14 << endl;
	//cout << true << endl;
	//cout << 'a' << endl;

	// modifer type name;
	// bool      - 1b

	// char      - 1b

	// short     - 2b
	// int       - 4b
	// long      - 4b
	// long long - 8b

	// float     - 4b (7)
	// double    - 8b (15)

	/*int year = 2024;
	cout << year << endl;
	cout << &year << endl;
	cout << sizeof(year) << endl;
	cout << typeid(year).name() << endl;*/

	//unsigned int b = 3000000000;
	//cout << b << endl;

	//int c = 8, f, s = 7;
	//c = f = s = 3;

	/*int count;
	float v_zosh, v_oblk, sum;
	v_zosh = 10.68;
	sum = count * (v_zosh + v_oblk);*/





	system("pause");
	return 0;
}
