#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<bool> results;
	float temp;
	int n, t;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t;

		temp = t + 0.5f - 25 * (t / 25);

		results.push_back(temp <= 17);
	}

	for (bool b : results)
	{
		if (b)
		{
			cout << "ONLINE";
		}
		else
		{
			cout << "OFFLINE";
		}

		cout << '\n';
	}
}