#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, bool> m;
	int n, x, o, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;
		
		m[o] = true;
	}

	cin >> x;

	for (int i = 1; i < x; i++)
	{
		if (m[x - i] && m[i] && x - i != i)
		{
			m[x - i] = false;
			m[i] = false;

			result++;
		}
	}

	cout << result;
}