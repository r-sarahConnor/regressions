// CPP program to implement log() function
#include <bits/stdc++.h>
using namespace std;

// function to evaluate natural logarithm base-e
double valueE(double d)
{
	return log(d);
}

// function to evaluate logarithm base-10
double value10(double d)
{
	return log10(d);
}

// driver program to test the above function
int main()
{
	double d = 10;
	cout << "The logarithm value(base-e) of " << d
		<< " is " << valueE(d) << endl;
	cout << "The logarithm value(base-10) of " << d
		<< " is " << value10(d) << endl;
	return 0;
}
