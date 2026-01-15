#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Account
{
	string name;
	int age, index;

	Account(string Name, int Age, int Index) : name(Name), age(Age), index(Index) {}
};

int comp(Account account1, Account account2)
{
	if (account1.age != account2.age)
	{
		return account1.age < account2.age;
	}

	return account1.index < account2.index;
}

int main()
{
	vector<Account> accounts;
	string s;
	int n, t;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t >> s;

		accounts.push_back(Account(s, t, i));
	}

	sort(accounts.begin(), accounts.end(), comp);

	for (Account account : accounts)
	{
		cout << account.age << " " << account.name << '\n';
	}
}