#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int sum;
	
	for (;;)
	{
		getline(cin, str);

		if (!str.compare("#"))
		{
			break;
		}

		sum = 0;

		for (char c : str)
		{
			if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
			{
				sum++;
			}
		}

		cout << sum << '\n';
	}
}