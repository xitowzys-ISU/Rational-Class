#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
private:
    int numerator;
    int denominator;
public:
    Rational();
    Rational(int);
    Rational(int, int);

    Rational operator + (const Rational&);
    Rational& operator += (const Rational&);

    Rational operator - () const;
    Rational operator - (const Rational&);
    Rational& operator -= (const Rational&);

    Rational operator / (const Rational&);
    Rational& operator /= (const Rational&);

    Rational operator * (const Rational&);
    Rational& operator *= (const Rational&);

    Rational& operator ++();
    Rational operator ++(int);
    Rational& operator --();
    Rational operator --(int);

    bool operator == (const Rational&);
    bool operator != (const Rational&);
    bool operator > (const Rational&);
    bool operator >= (const Rational&);
    bool operator < (const Rational&);
    bool operator <= (const Rational&);

    Rational sqrt();

    void simplify();

    friend std::ostream& operator << (std::ostream&, const Rational&);
};

#endif // RATIONAL_H
