#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()
{
	vector<pair<int, int>> vec;
	int n, a, b, index = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		
		vec.push_back({ a, b });
	}

	for (pair<int, int> p : vec)
	{
		index++;

		cout << "Case #" << index << ": " << p.first + p.second << '\n';
	}
}