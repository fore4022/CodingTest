#include<iostream>
#include<string>

using namespace std;

char arr[50][50];
int o = 0, _max = 0;

void CheckRow()
{
	char temp ='\0';
	int cnt = 0;

	for (int i = 0; i < o; i++)
	{
		for (int k = 0; k < o; k++)
		{
			if (temp != arr[i][k] || k == 0)
			{
				if (cnt > _max)
				{
					_max = cnt;
				}

				temp = arr[i][k];
				cnt = 1;
			}
			else if (temp == arr[i][k])
			{
				cnt++;
			}
		}

		if (cnt > _max)
		{
			_max = cnt;
		}
	}
}
void CheckColumn()
{
	char temp = '\0';
	int cnt = 0;

	for (int i = 0; i < o; i++)
	{
		for (int k = 0; k < o; k++)
		{
			if (temp != arr[k][i] || k == 0)
			{
				if (cnt > _max)
				{
					_max = cnt;
				}

				temp = arr[k][i];
				cnt = 1;
			}
			else if (temp == arr[k][i])
			{
				cnt++;
			}
		}

		if (cnt > _max)
		{
			_max = cnt;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	char temp;
	bool isChange;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			arr[i][j] = s[j];
		}
	}

	for (int i = 0; i < o; i++)
	{
		for (int j = 1; j < o; j++)
		{
			isChange = arr[i][j] != arr[i][j - 1];

			if(isChange)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i][j - 1];
				arr[i][j - 1] = temp;
			}

			CheckRow();
			CheckColumn();

			if (isChange)
			{
				temp = arr[i][j - 1];
				arr[i][j - 1] = arr[i][j];
				arr[i][j] = temp;
			}
		}
	}

	for (int i = 1; i < o; i++)
	{
		for (int j = 0; j < o; j++)
		{
			isChange = arr[i][j] != arr[i - 1][j];

			if(isChange)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i -  1][j];
				arr[i - 1][j] = temp;
			}

			CheckRow();
			CheckColumn();

			if (isChange)
			{
				temp = arr[i - 1][j];
				arr[i - 1][j] = arr[i][j];
				arr[i][j] = temp;
			}
		}
	}

	cout << _max;
}