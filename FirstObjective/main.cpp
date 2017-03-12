#include"Fraction_lib.h"
#include"Matrix_lib.h"
#include<iostream>
using namespace std;
void Fr()
{
	int a, b, n;
cout << "Podaj licznik a nastepnie mianownik: ";
cin >> a;
cout << "Podaj mianownik: ";
cin >> b;
Fraction x(a,b);
x.Print();
cout << "-------" << endl;
cout << "Reduce: " << endl;
x.Reduce();
x.Print();
cout << "Podaj licznik a nastepnie mianownik: ";
cin >> a;
cout << "Podaj mianownik: ";
cin >> b;
Fraction y(a,b);
y.Print();
cout << "-------" << endl;
cout << "Reduce: " << endl;
y.Reduce();
y.Print();
cout << "Choose what You want to do next: " << endl;
cout << "1.Compare" << endl;
cout << "2.Add" << endl;
cout << "3.Subtract" << endl;
cout << "4.Multiplicat" << endl;
cout << "5.Divide" << endl;
cout << "Choose: " << endl;
cin >> n;
switch (n)
{
case 1:
	if (x == y) cout << "Ulamki sa rowne" << endl;
	else if (x > y)
	{
		x.Print();
		cout << " jest wiekszy od ";
		y.Print();
	}
	else
	{
		y.Print();
		cout << " jest wiekszy od ";
		x.Print();
	}
	cout << "Napisz";
	cin >> n;
	break;
case 2:
	x + y;
	cout << "Napisz";
	cin >> n;
	break;
case 3:
	x - y;
	cout << "Napisz";
	cin >> n;
	break;
case 4:
	x * y;
	cout << "Napisz";
	cin >> n;
	break;
case 5:
	x / y;
	cout << "Napisz";
	cin >> n;
	break;
default:
	break;
}
}
//void PaL()
//{
//
//}
void Mt()
{
	int r, c;
	cout << "rows: ";
	cin >> r;
	cout << "columns: ";
	cin >> c;
	Matrix a(r, c);
	a.Fill();
	a.Print();
	cout << "rows: ";
	cin >> r;
}
int main()
{
	int n;
	cout << "Options: " << endl;
	cout << "1. Arithmetic with fractions" << endl;
	cout << "2. Point and line" << endl;
	cout << "3. Matrix" << endl;
	cout << "Choose option: ";
	cin >> n;
	switch (n)
	{
	case 1:
		Fr();
		break;
	/*case 2:
		PaL();
		break;*/
	case 3:
		Mt();
		break;
	default:
		break;
	}
	return 0;
}

