#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = x;
	// Method 1: Branching in full form
	if (x <= -1)
		B = log10(fabs(cos(5 * x))) + exp((1 / x) + x);
	if (x > -1 && x < 2 / 5)
		B = sqrt(pow((2 * x - 3), 3) - tan(x));
	if (x >= 2 / 5)
		B = sin(5 * x) - sqrt(fabs(1 - x));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	
	// Method 2: Branching in full form
	if (x <= -1)
		B = log10(fabs(cos(5 * x))) + exp((1 / x) + x);
	else
		if (x >= 2 / 5)
			B = sin(5 * x) - sqrt(fabs(1 - x));
		else
			B = sqrt(pow((2 * x - 3), 3) - tan(x));
	
	y = A + B;
	
	cout << "2) y = " << y << endl;
	
	cin.get();
	return 0;
}