#include <iostream>
using namespace std;

pair<double, double> m_func(double, double, double);

double y, c, d;

int main() {

	setlocale(LC_ALL, "Russian"); 
	system("chcp 1251");

	double A, B, h;

	cout << "������� ������� �������" << endl;
	cin >> A >> B;
	if (B < A) {
		auto C = A;
		A = B;
		B = C;
	}
	cout << "������� ������ ����" << endl;
	cin >> h;
	cout << "������� ��������� �������� y, c, d" << endl;
	cin >> y, c, d;
	auto p = m_func(A, B, h);
	cout << "������������ �������� ������� = " << p.first << ", ��� ����������� X = " << p.second << endl;
	return 0;
}
