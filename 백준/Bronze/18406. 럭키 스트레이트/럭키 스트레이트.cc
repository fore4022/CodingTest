#include<iostream>

using namespace std;

int main()
{
	string str;
	int cnt1 = 0, cnt2 = 0;

	cin >> str;

	for (int i = 0; i < str.length() / 2; i++)
	{
		cnt1 += str[i];
	}

	for (int i = str.length() / 2; i < str.length(); i++)
	{
		cnt2 += str[i];
	}

	if (cnt1 == cnt2)
	{
		cout << "LUCKY";
	}
	else
	{
		cout << "READY";
	}
}