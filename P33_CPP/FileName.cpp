#include<iostream>
#include<Windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


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

	int count;
	float v_zosh, v_oblk, sum;
	v_zosh = 10.68;
	sum = count * (v_zosh + v_oblk);
	

	


	system("pause");
}
