#include<iostream>
using namespace std;


 void main()
{
	setlocale(LC_ALL, "Russian");
	
	int a, b, c=0, f;
	char sign;
	cout << "������� �����:"; cin >> a;
	cout << "������� ����:"; cin >> sign;
	cout << "������� �����:"; cin >> b;

	switch (sign)
	{
		case '+': c = a + b; break;
		case '-': c = a - b; break;
		case '*': c = a * b; break;
		case '/': c = a / b; break;
	}
	cout << "\n �����:" << a << sign << b << '=' << c;
	cout << std::endl;
	cout << "��� ����������� ������� 1:"; cin >> f;
	





 }