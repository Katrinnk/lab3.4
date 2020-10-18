// Lab_03_4.cpp
// Колмикова Катерина Сергіївна
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідне значення змінної
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((y >= 0 && x <= 0 && y <= R - sqrt(R * R - (x + R) * (x + R))) || (y <= 0 && x >= 0 && y >= R + sqrt(R * R - (x + R) * (x + R))))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
