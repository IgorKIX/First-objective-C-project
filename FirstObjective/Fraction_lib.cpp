#include"Fraction_lib.h"
#include<cmath>
#include<stdexcept>
#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    while (a!=b)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
int NWW(int a, int b)
{
	return a*b/GCD(a,b);
}
bool Fraction::operator==(Fraction u)
{
	Fraction pom1(numerator, denominator);
	Fraction pom2(u.numerator, u.denominator);
	pom1.Reduce(); pom2.Reduce();
	if (pom1.numerator = pom2.numerator && pom1.denominator == pom2.denominator) return true;
	else return false;
}
bool Fraction::operator>(Fraction u)
{
	Fraction help1(numerator, denominator);
	Fraction help2(u.numerator, u.denominator);
	help1.Reduce(); help2.Reduce();
	if (help2.denominator>help1.denominator&&help1.numerator>0) return true;
	else return false;
}
Fraction Fraction::operator+(Fraction u)
{
	int newDeno=NWW(denominator,u.denominator);
	int newNumer1, newNumer2;
	if (denominator != newDeno) newNumer1 = numerator*(newDeno / denominator); else newNumer1 = numerator;
	if (u.denominator != newDeno) newNumer2 = u.numerator*(newDeno / u.denominator); else newNumer2 = u.numerator;
	Fraction result(newNumer1+newNumer2,newDeno);
	result.Reduce();
	result.Print();
	return result;
}
Fraction Fraction::operator-(Fraction u)
{
	int newDeno = NWW(denominator, u.denominator);
	int newNumer1, newNumer2;
	if (denominator != newDeno) newNumer1 = numerator*(newDeno / denominator); else newNumer1 = numerator;
	if (u.denominator != newDeno) newNumer2 = u.numerator*(newDeno / u.denominator); else newNumer2 = u.numerator;
	Fraction result(newNumer1 - newNumer2, newDeno);
	result.Reduce();
	result.Print();
	return result;
}
Fraction Fraction::operator*(Fraction u)
{
	Fraction result(numerator*u.numerator, denominator*u.denominator);
	result.Reduce();
	result.Print();
	return result;
}
Fraction Fraction::operator/(Fraction u)
{
	Fraction result(numerator*u.denominator, denominator*u.numerator);
	result.Reduce();
	result.Print();
	return result;
}
Fraction::Fraction(int n,int d)
{
    if(d==0) throw range_error("The denominator cannot by zero");
    numerator = n;
    denominator = d;
    if(denominator<0)
    {
        numerator=-numerator;
        denominator=-denominator;
    }
}
void Fraction::Print()
{
    cout<<numerator<<"/"<<denominator<<endl;
}
void Fraction::Reduce()
{
    int d=GCD(abs(numerator),denominator);
    numerator=numerator/d;
    denominator=denominator/d;
}
