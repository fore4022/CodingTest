#include<iostream>
#include<vector>

using namespace std;

struct Size
{
	int height;
	int weight;
	int rank = 0;

	Size(int Height, int Weight) : height(Height), weight(Weight) {}
};

int main()
{
	vector<Size> sizes;
	int n, height, weight;

	cin >> n;

	vector<int> results(n, 1);

	for (int i = 0; i < n; i++)
	{
		cin >> height >> weight;

		sizes.push_back(Size(height, weight));
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}

			if (sizes[i].height < sizes[j].height && sizes[i].weight < sizes[j].weight)
			{
				results[i]++;
			}
		}
	}

	for (int i : results)
	{
		cout << i << " ";
	}
}