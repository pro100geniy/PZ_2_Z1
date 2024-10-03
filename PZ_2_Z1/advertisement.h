#pragma once
#include <string>
#include <iostream>
using namespace std;

class Fraction {
private:
	int P;
	unsigned int Q;
public:
	Fraction(): P(0),Q(1) {}
	Fraction(int P, unsigned int Q): P(P), Q(Q) {}
	void conclusion(Fraction, Fraction,char t);
	void Summ(Fraction, Fraction);
	void Diff(Fraction, Fraction);
	void Mult(Fraction, Fraction);
	void Div(Fraction, Fraction);
	void reduction();
};

void Fraction::conclusion(Fraction f1, Fraction f2,char t) {
 cout << endl << f1.P << "/" << f1.Q << " " << t << " " << f2.P << "/" << f2.Q << " = " << ((Q == 1)?to_string(P):to_string(P)+"/"+to_string(Q)) << endl << endl << "Продолжаем? (y/n):";
}
void Fraction::Summ(Fraction f1, Fraction f2) {
	P = f1.P * f2.Q + f2.P * f1.Q;
	Q = f1.Q*f2.Q;
}
void Fraction::Diff(Fraction f1, Fraction f2) {
	P = f1.P * f2.Q - f2.P * f1.Q;
	Q = f1.Q * f2.Q;
}
void Fraction::Mult(Fraction f1, Fraction f2) {
	P = f1.P * f2.P;
	Q = f1.Q * f2.Q;
}
void Fraction::Div(Fraction f1, Fraction f2) {
	P = f1.P * f2.Q;
	Q = f1.Q * f2.P;
}
void Fraction::reduction() {
	int a = abs(P);
	int b = Q;

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	int noc = a;
	P /= noc;
	Q /= noc;
}