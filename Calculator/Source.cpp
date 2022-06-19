#include<iostream>
using namespace std;


 void main()
{
	setlocale(LC_ALL, "Russian");
	
	int a, b, c=0, f;
	char sign;
	cout << "¬ведите чесло:"; cin >> a;
	cout << "¬ведите знак:"; cin >> sign;
	cout << "¬ведите чесло:"; cin >> b;

	switch (sign)
	{
		case '+': c = a + b; break;
		case '-': c = a - b; break;
		case '*': c = a * b; break;
		case '/': c = a / b; break;
	}
	cout << "\n —умма:" << a << sign << b << '=' << c;
	cout << std::endl;
	cout << "ƒл€ продолжени€ нажмите 1:"; cin >> f;
	





 }