#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, temp = 665, cnt = 0;

	cin >> n;

	while (cnt != n)
	{
		temp++;

		if (to_string(temp).find("666") != string::npos)
		{
			cnt++;
		}
	}

	cout << temp;
}