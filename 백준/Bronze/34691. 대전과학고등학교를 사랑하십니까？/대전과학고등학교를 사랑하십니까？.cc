#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;

	while (true)
	{
		cin >> str;

		if (!str.compare("animal"))
		{
			cout << "Panthera tigris" << '\n';
		}
		else if (!str.compare("tree"))
		{
			cout << "Pinus densiflora" << '\n';
		}
		else if (!str.compare("flower"))
		{
			cout << "Forsythia koreana" << '\n';
		}
		else if (!str.compare("end"))
		{
			break;
		}
	}
}