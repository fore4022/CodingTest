#include<iostream>
#include<vector>

using namespace std;

std::vector<int> v;

int main()
{
	int o, n, m;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> n >> m;

		v.push_back(n + m);
	}

	for (int i = 0; i < o; i++)
	{
		cout << "Case " << i + 1 << ": " << v[i] << '\n';
	}
}