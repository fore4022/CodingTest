#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> vec;
	int n, m, o;

	cin >> n >> m;

	vec.resize(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		vec[i] = o;
	}

	sort(vec.begin(), vec.end());

	cout << vec[m - 1];
}