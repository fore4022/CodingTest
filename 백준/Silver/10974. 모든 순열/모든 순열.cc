#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> result;
vector<int> temp;
vector<bool> visited;
int o;

void loop(int a)
{
	temp.push_back(a);

	visited[a] = true;

	if (temp.size() != o)
	{

		for (int i = 1; i <= o; i++)
		{
			if (!visited[i])
			{
				loop(i);
			}
		}
	}
	else
	{
		result.push_back(vector<int>(temp));
	}

	temp.pop_back();

	visited[a] = false;
}

int main()
{
	cin >> o;

	visited.resize(o + 1);

	for (int i = 1; i <= o; i++)
	{
		loop(i);
	}

	for (vector<int> v : result)
	{
		for (int i : v)
		{
			cout << i << " ";
		}

		cout << '\n';
	}
}