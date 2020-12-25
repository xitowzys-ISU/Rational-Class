#include "rational.h"

Rational::Rational()
{
    numerator = 0;
    denominator = 1;
}

Rational::Rational(int numerator)
{
    this->numerator = numerator;
    denominator = 1;
}

Rational::Rational(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

Rational Rational::operator+ (const Rational& r) {
    Rational res(*this);
    return res += r;
}

Rational& Rational::operator+=(const Rational& r) {
    numerator = (numerator * r.denominator + r.numerator * denominator);
    denominator *= r.denominator;
    simplify();
    return *this;
}

Rational Rational::operator- () const {
    Rational r(-numerator, denominator);
    return r;
}

Rational Rational::operator - (const Rational& r) {
    Rational res(*this);
    return res -= r;
}

Rational& Rational::operator-= (const Rational& r) {
    return (*this += (-r));
}

Rational& Rational::operator /= (const Rational& r) {
    Rational res(r.denominator, r.numerator);
    *this *= res;
    return *this;
}

Rational Rational::operator / (const Rational& r) {
    Rational factor(r.denominator, r.numerator);
    Rational res(*this);
    return res *= factor;
}

Rational& Rational::operator *= (const Rational& r) {
    numerator *= r.numerator;
    denominator *= r.denominator;
    simplify();
    return *this;
}

Rational Rational::operator * (const Rational& r) {
    Rational res(*this);
    return res *= r;
}

Rational& Rational::operator++() {
    numerator += denominator;
    return *this;
}

Rational Rational::operator++(int) {
    Rational r(*this);
    numerator += denominator;
    return r;
}

Rational& Rational::operator--() {
    numerator -= denominator;
    return *this;
}

Rational Rational::operator--(int) {
    Rational r(*this);
    numerator -= denominator;
    return r;
}

bool Rational::operator == (const Rational& r)  {
    return (numerator == r.numerator) && (denominator == r.denominator);
}

bool Rational::operator!= (const Rational& r)  {
    return !(*this == r);
}

bool Rational::operator > (const Rational& r)  {
    return (numerator * r.denominator > denominator * r.numerator);
}

bool Rational::operator >= (const Rational& r) {
    return !(*this < r);
}

bool Rational::operator < (const Rational& r) {
    return (numerator * r.denominator < denominator * r.numerator);
}

bool Rational::operator <= (const Rational& r) {
    return !(*this > r);
}

void Rational::simplify() {
    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }

    for (int i = 2; i <= abs(denominator) && i <= abs(denominator); i++)
    {
        if (numerator % i == 0 && denominator % i == 0)
        {
            numerator /= i;
            denominator /= i;
            i--;
        }
    }

}

std::ostream& operator << (std::ostream& out, const Rational& r) {
    out << r.numerator;
    if (r.numerator && r.denominator != 1) out << '/' << r.denominator;
    return out;
}

