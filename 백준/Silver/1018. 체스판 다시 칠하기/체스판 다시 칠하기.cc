#include<iostream>
#include<vector>
#include<string>

using namespace std;

string wb[8] = { "WBWBWBWB", "BWBWBWBW","WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW" };
string bw[8] = { "BWBWBWBW","WBWBWBWB", "BWBWBWBW" ,"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB" };

int compare(string arr[])
{
	int minimum, cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (wb[i][j] != arr[i][j])
			{
				cnt++;
			}
		}
	}

	minimum = cnt;
	cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (bw[i][j] != arr[i][j])
			{
				cnt++;
			}
		}
	}

	if (minimum > cnt)
	{
		minimum = cnt;
	}

	return minimum;
}

int main()
{
	vector<string> strs;
	string chessBoard[8];
	string str;
	int x, y, temp, result = 64;

	cin >> x >> y;

	for (int i = 0; i < x; i++)
	{
		cin >> str;

		strs.push_back(str);
	}

	for (int i = 0; i <= x - 8; i++)
	{
		for (int j = 0; j <= y - 8; j++)
		{
			for (int k = 0; k < 8; k++)
			{
				chessBoard[k] = strs[i + k].substr(j, 8);
			}

			temp = compare(chessBoard);

			if (temp < result)
			{
				result = temp;
			}
		}
	}

	cout << result;
}