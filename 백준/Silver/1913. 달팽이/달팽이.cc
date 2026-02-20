#include<iostream>
#include<cmath>

using namespace std;

int arr[1000][1000] = {};

int main()
{
	int index, targetNumber, targetX = 1, targetY = 1, number, x = 0, y = -1;
	bool isPositiveX = true, isPositiveY = false;

	cin >> index >> targetNumber;

	number = index * index;

	for (int i = 0; i < index; i++)
	{
		y++;

		arr[y][x] = number;

		if (number == targetNumber)
		{
			targetX += x;
			targetY += y;
		}

		number--;
	}

	for (int i = 1; i <= index - 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				for (int k = 0; k < index - i; k++)
				{
					if (isPositiveX)
					{
						x++;
					}
					else
					{
						x--;
					}

					if (number == targetNumber)
					{
						targetX += x;
						targetY += y;
					}

					arr[y][x] = number;

					number--;
				}

				isPositiveX = !isPositiveX;
			}
			else
			{
				for (int k = 0; k < index - i; k++)
				{
					if (isPositiveY)
					{
						y++;
					}
					else
					{
						y--;
					}

					if (number == targetNumber)
					{
						targetX += x;
						targetY += y;
					}

					arr[y][x] = number;

					number--;
				}

				isPositiveY = !isPositiveY;
			}
		}
	}

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << '\n';
	}

	cout << targetY << " " << targetX;
}