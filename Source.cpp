// Lab_03_4.cpp
// ��������� �������� ���㳿���
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 12
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������ �������� �����
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if ((y >= 0 && x <= 0 && y <= R - sqrt(R * R - (x + R) * (x + R))) || (y <= 0 && x >= 0 && y >= R + sqrt(R * R - (x + R) * (x + R))))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
