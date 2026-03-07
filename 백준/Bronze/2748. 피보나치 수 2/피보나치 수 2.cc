#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<long long> vec;
	int n;

	vec.push_back(1);
	vec.push_back(1);

	cin >> n;

	for (int i = 1; i <= n - 2; i++)
	{
		vec.push_back(vec[i - 1] + vec[i]);
	}

	cout << vec[n - 1];
}