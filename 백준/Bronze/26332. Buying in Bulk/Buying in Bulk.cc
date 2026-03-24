#include<iostream>
#include<vector>
#include<tuple>

using namespace std;

int main()
{
	vector<tuple<int, int, int>> vec;
	int n, a, b;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		vec.push_back({ a, b, a * b - (2 * (a - 1)) });
	}

	for (auto it : vec)
	{
		cout << get<0>(it) << " " << get<1>(it) << '\n' << get<2>(it) << '\n';
	}
}