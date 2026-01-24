#include<iostream>
#include<string>

using namespace std;

bool isNumeric(string str)
{
	for (char c : str)
	{
		if (!isdigit(c))
		{
			return false;
		}
	}

	return true;
}

int main()
{
	string a, b, c;
	int i;

	cin >> a >> b >> c;

	if (isNumeric(a))
	{
		i = stoi(a);
		i += 3;
	}
	else if (isNumeric(b))
	{
		i = stoi(b);
		i += 2;
	}
	else if (isNumeric(c))
	{
		i = stoi(c);
		i++;
	}

	if (i % 3 == 0 && i % 5 == 0)
	{
		cout << "FizzBuzz";
	}
	else if (i % 3 == 0 && i % 5 != 0)
	{
		cout << "Fizz";
	}
	else if (i % 3 != 0 && i % 5 == 0)
	{
		cout << "Buzz";
	}
	else
	{
		cout << i;
	}
}