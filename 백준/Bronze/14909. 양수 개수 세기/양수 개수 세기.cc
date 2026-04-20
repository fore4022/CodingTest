#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, temp = "";
	int cnt = 0;

	getline(cin, str);

	for (char c : str)
	{
		if (c == ' ')
		{
			cnt += stoi(temp) > 0 ? 1 : 0;
			temp = "";
		}
		else
		{
			temp += c;
		}
	}

	cnt += stoi(temp) > 0 ? 1 : 0;

	cout << cnt;
}