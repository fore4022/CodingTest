#include<iostream>

using namespace std;

int main()
{
	string str;
	int teamA = 0, teamB = 0;
	bool isTeamA;

	cin >> str;

	for (char c : str)
	{
		if (c == 'A')
		{
			isTeamA = true;
		}
		else if (c == 'B')
		{
			isTeamA = false;
		}

		if (c == '1')
		{
			if (isTeamA)
			{
				teamA++;
			}
			else
			{
				teamB++;
			}
		}
		else if (c == '2')
		{
			if (isTeamA)
			{
				teamA += 2;
			}
			else
			{
				teamB += 2;
			}
		}
	}

	if (teamA > teamB)
	{
		cout << "A";
	}
	else
	{
		cout << "B";
	}
}