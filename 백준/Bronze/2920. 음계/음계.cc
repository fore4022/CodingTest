#include<iostream>
#include<string>

using namespace std;

int main()
{
	int arr[8];
	int temp = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	if (arr[0] == 1)
	{
		for (int i = 1; i <= 7; i++)
		{
			if (arr[i] == i + 1)
			{
				temp++;
			}
			else
			{
				break;
			}
		}

		if (temp == 7)
		{
			cout << "ascending";
		}
	}
	else if (arr[0] == 8)
	{
		for (int i = 1; i <= 7; i++)
		{
			if (arr[i] == 8 - i)
			{
				temp++;
			}
			else
			{
				break;
			}
		}

		if (temp == 7)
		{
			cout << "descending";
		}
	}
	
	if(temp != 7)
	{
		cout << "mixed";
	}
}