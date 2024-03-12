#pragma once
#include <string>
#include <iostream>

using namespace std;

class Number
{
private:
	int first;
	int second;
public:
	Number();
	Number(int f, int s);
	Number(const Number& n);
	~Number();

	int getFirst() const { return first; };
	int getSecond() const { return second; };

	void setFirst(int);
	void setSecond(int);

	operator string() const;

	Number operator*(int num) const;

	Number& operator = (const Number&);

	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&);

	Number& operator ++();
	Number& operator --();
	Number operator ++(int);
	Number operator --(int);
};
