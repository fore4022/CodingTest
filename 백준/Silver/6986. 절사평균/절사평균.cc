#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>

using namespace std;

bool comp(double a, double b)
{
	return a > b;
}

int main()
{
	vector<double> vec;
	double d, sum = 0, result1, result2;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> d;

		vec.push_back(d);
	}

	sort(vec.begin(), vec.end(), comp);

	for (int i = m; i < n - m; i++)
	{
		sum += vec[i];
	}

	result1 = sum / (n - (m * 2)) + 1e-12;

	for (int i = 0; i < m; i++)
	{
		sum += vec[n - m - 1];
		sum += vec[m];
	}

	result2 = sum / n + 1e-12;

	cout << fixed << setprecision(2) << result1 << '\n' << result2;
}