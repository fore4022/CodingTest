#include<iostream>
#include<string>
#include<set>
#include<utility>

using namespace std;

int main()
{
	set<pair<string, string>> s;
	string str1, str2, str3, str4;

	cin >> str1 >> str2 >> str3 >> str4;

	s.insert({ str1, str1 });
	s.insert({ str1, str2 });
	s.insert({ str1, str3 });
	s.insert({ str1, str4 });

	s.insert({ str2, str1 });
	s.insert({ str2, str2 });
	s.insert({ str2, str3 });
	s.insert({ str2, str4 });

	s.insert({ str3, str1 });
	s.insert({ str3, str2 });
	s.insert({ str3, str3 });
	s.insert({ str3, str4 });

	s.insert({ str4, str1 });
	s.insert({ str4, str2 });
	s.insert({ str4, str3 });
	s.insert({ str4, str4 });

	for (auto it : s)
	{
		cout << it.first << " " << it.second << '\n';
	}
}