#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> arr;
	int o, n, m;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> n >> m;

		arr.push_back(n + m);
	}

	for (int i : arr)
	{
		cout << i << '\n';
	}
}