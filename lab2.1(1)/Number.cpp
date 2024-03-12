#include "Number.h"
#include <sstream>
#include <string>
#include <iostream>

Number::Number() {
    first = 0;
    second = 0;
}

Number::Number(int f, int s) {
    first = f;
    second = s;
}

Number::Number(const Number& n) {
    first = n.first;
    second = n.second;
}

Number::~Number() { }


void Number::setFirst(int value) {
    first = value;
}
void Number::setSecond(int value) {
    second = value;
}

Number Number::operator*(int num) const {
    Number result;
    result.first = first * num;
    result.second = second * num;
    return result;
}

Number& Number::operator ++() {
    first++;
    return *this;
}

Number& Number::operator --() {
    first--;
    return *this;
}

Number Number::operator ++(int) {
    Number n(*this);
    second++;
    return n;
}

Number Number::operator --(int) {
    Number n(*this);
    second--;
    return n;
}

ostream& operator << (ostream& out, const Number& r)
{
    out << string(r);
    return out;
}

istream& operator >> (istream& in, Number& r)
{
    cout << " first = "; in >> r.first;
    cout << " second = "; in >> r.second;
    cout << endl;
    return in;
}

Number& Number::operator = (const Number& n) {
    first = n.first;
    second = n.second;

    return *this;
}

Number::operator string () const
{
    stringstream ss;
    ss << " first = " << first << endl;
    ss << " second = " << second << endl;

    return ss.str();
}