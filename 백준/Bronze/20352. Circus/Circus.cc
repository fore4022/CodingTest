#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	long long n;
	double result, pi = acos(-1);

	cin >> n;

	result = 2 * sqrt(n * pi);

	cout << fixed << setprecision(10) << result;
}