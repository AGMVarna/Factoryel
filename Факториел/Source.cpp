/* �������� ��������, ����� ������ �� ������������ ����������
����� n � ��������� n! */

#include<iostream>
using namespace std;

long long int n;
int Sum=1;

int main() {
	system("chcp 1251");
	cout << "�������� ���������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)  Sum *= i;
	cout << n << "! = " << Sum << endl;
	system("pause");
	return 0;
}