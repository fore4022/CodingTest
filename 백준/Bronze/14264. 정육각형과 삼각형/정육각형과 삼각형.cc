#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	double result;
	int n;

	cin >> n;

	result = sqrt(3) / 4 * pow(n, 2);

	cout << fixed << setprecision(12) << result;
}