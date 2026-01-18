#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> results;
	int a, b;

	while(cin >> a >> b)
	{
		if (a == b && a == 0)
		{
			break;
		}

		results.push_back(a + b);
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}