#include <conio.h>
#include "advertisement.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	char go = 'y';
	char mark = '+';
	do
	{
		Fraction fraction;
		char slash1, slash2;
		int a, b, c, d;
		cout << endl << "¬ведите операцию в виде: a/b + c/d" << endl;
		cin >> a >> slash1 >> b >> mark >> c >> slash2 >> d;
		Fraction f2(a, b);
		Fraction f3(c, d);
		switch (mark)
		{
		case '+':
			fraction.Summ(f2, f3);
			break;
		case '-':
			fraction.Diff(f2, f3);
			break;
		case '*':
			fraction.Mult(f2, f3);
			break;
		case '/':
			fraction.Div(f2, f3);
			break;
		}
		fraction.reduction();
		fraction.conclusion(f2, f3, mark);
		go = _getche();

	} while (go != 'n');
	return 0;
}