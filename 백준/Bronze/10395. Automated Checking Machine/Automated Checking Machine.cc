#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	int o;

	vec.resize(5, 0);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> o;

			vec[j] += o;
		}
	}

	for (int i : vec)
	{
		if (i != 1)
		{
			cout << "N";

			return 0;
		}
	}

	cout << "Y";
}