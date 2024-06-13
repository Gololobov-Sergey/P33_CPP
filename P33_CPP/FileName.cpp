#include<iostream>
#include<Windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

	// 13.06.2024 
	// ===========================================================================

	/*int a;
	//cin >> a;
	cout << a << endl;*/

	// - , + , ++ , --
	// = , + , - , * , / , += , -= , *= , /= , % , %=


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

	int a, b, c;
	cin >> a >> b >> c;
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
}
