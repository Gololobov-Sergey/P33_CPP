#include<iostream>
#include<Windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


	// 20.06.2024 
	// ===========================================================================


	/*typedef unsigned char UC;
	UC c = 'ь';
	cout << (int)c << endl;*/



	int n;
	cin >> n;
	for (int i = 1; i <= 10; i++)
	{
		cout << n << " x " << i << " = " << i * n << endl;
	}



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
}
