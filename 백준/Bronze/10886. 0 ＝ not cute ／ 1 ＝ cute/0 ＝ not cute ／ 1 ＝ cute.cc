#include<iostream>

using namespace std;

int main()
{
	int o, n, notCute = 0, cute = 0;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> n;

		if (n == 0)
		{
			notCute++;
		}
		else
		{
			cute++;
		}
	}

	cout << (notCute > cute ? "Junhee is not cute!" : "Junhee is cute!");
}