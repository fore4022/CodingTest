#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vecA, vecB;
	int a, b;

	cin >> a >> b;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			vecA.push_back(i);
		}
	}

	for (int i = 1; i <= b; i++)
	{
		if (b % i == 0)
		{
			vecB.push_back(i);
		}
	}

	for (int i : vecA)
	{
		for (int j : vecB)
		{
			cout << i << " " << j << '\n';
		}
	}
}