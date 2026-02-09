#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	int n;

	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(5);

	cin >> n;

	for (int i = 3; i <= n; i++)
	{
		vec.push_back((vec[i - 1] * 2 + ((i + 1) % 2 == 0 ? 1 : -1)) % 10007);
	}

	cout << vec[n - 1] % 10007;
}