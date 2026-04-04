#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, temp = "";

	cin >> str;

	for (char c : str)
	{
		temp += c;

		if (temp.size() >= 4)
		{
			if (!temp.compare(temp.size() - 4, 4, "PPAP"))
			{
				temp.erase(temp.size() - 4, 4);

				temp += "P";
			}
		}
	}

	if (temp == "PPAP" || temp == "P")
	{
		cout << "PPAP";
	}
	else
	{
		cout << "NP";
	}
}