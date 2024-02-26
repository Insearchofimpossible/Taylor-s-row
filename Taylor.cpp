#include <iostream>
#include <cmath>
using namespace std;
double f(int n, double x) {
	if (n == 1) return -pow(1 + x, 2);
	else
		return pow(-1, n) * pow(x + 1, 2 * n) / n + f(n - 1, x);
}
int main() {
	setlocale(LC_ALL, "Ru");
	double s = 0, x = -0.2;
	for (int i = 1; i < 40; i++) {
		s = s + pow(-1, i) * pow(x + 1, 2 * i) / i;
	}
	cout << s << " ���������� ����� ���� �� 40 ��������" << ", �������� ��������� = " << x << endl;
	cout << f(40, x) << " ���������� ����� �������� �� 40 �������" << ", �������� ��������� = " << x << endl;
}