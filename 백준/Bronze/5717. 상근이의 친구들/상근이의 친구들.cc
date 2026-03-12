#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> result;
	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (a == b && a == 0)
		{
			break;
		}

		result.push_back(a + b);
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}