#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int cnt = 0;

	getline(cin, str);

	while (!cin.eof())
	{
		cnt++;

		getline(cin, str);
	}

	cout << cnt;
}