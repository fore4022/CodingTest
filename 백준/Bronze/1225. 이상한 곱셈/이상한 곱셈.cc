#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2;
	long long cnt = 0;

	cin >> str1 >> str2;

	for (char c1 : str1)
	{
		for (char c2 : str2)
		{
			cnt += (c1 - '0') * (c2 - '0');
		}
	}

	cout << cnt;
}