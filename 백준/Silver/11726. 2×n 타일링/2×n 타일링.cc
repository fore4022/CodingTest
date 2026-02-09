#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	int n;

	vec.push_back(1);
	vec.push_back(2);

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		vec.push_back(vec[i - 1] % 10007 + vec[i - 2] % 10007);
	}

	cout << vec[n - 1] % 10007;
}