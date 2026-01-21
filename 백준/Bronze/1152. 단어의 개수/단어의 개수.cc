#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int cnt = 0;
	bool wasSpace = true;

	getline(cin, str);

	for (char c : str)
	{
		if (c == ' ')
		{
			wasSpace = true;
		}
		else if(wasSpace)
		{
			wasSpace = false;
			cnt++;
		}
	}

	cout << cnt;
}