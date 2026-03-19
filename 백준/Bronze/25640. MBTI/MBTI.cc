#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, temp;
	int n, cnt = 0;

	cin >> str >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		if (!str.compare(temp))
		{
			cnt++;
		}
	}

	cout << cnt;
}