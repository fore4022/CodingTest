#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string s, word, str;
	bool isCompare;

	cin >> s >> word;

	reverse(word.begin(), word.end());
	
	for (char c : s)
	{
		str.push_back(c);

		if (str.size() >= word.length())
		{
			isCompare = true;

			for (int i = 0; i < word.length(); i++)
			{
				if (word[i] != str[str.size() - i - 1])
				{
					isCompare = false;

					break;
				}
			}

			if (isCompare)
			{
				for (int i = 0; i < word.length(); i++)
				{
					str.pop_back();
				}
			}
		}
	}

	if (str.empty())
	{
		cout << "FRULA";
	}
	else
	{
		cout << str;
	}
}