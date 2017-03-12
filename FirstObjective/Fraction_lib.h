#ifndef Fraction_lib_h
#define Fraction_lib_h

struct Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int n=0, int d=1);
	bool operator==(Fraction u);
	bool operator>(Fraction u);
	Fraction operator+(Fraction u);
	Fraction operator-(Fraction u);
	Fraction operator*(Fraction u);
	Fraction operator/(Fraction u);
    void Print();
    void Reduce();
};
#endif // Fraction_lib_h
