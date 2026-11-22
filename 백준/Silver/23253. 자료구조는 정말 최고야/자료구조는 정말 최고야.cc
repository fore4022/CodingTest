#include<iostream>

using namespace std;

int main()
{
	int n, m, o, l, temp;

	cin >> n >> m;

	for(int i = 0; i < m; i++)
	{
		cin >> o;

		temp = -1;

		for (int j = 0; j < o; j++)
		{
			cin >> l;

			if (temp == -1)
			{
				temp = l;
			}
			else if (temp < l)
			{
				cout << "No";

				return 0;
			}
			else
			{
				temp = l;
			}
		}
	}

	cout << "Yes";
}