#include<iostream>
#include<vector>

using namespace std;

int main()
{
	float avg = 0, max = 0;
	int n;

	cin >> n;

	vector<float> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];

		if (vec[i] > max)
		{
			max = vec[i];
		}
	}

	for (int i : vec)
	{
		avg += i / max;
	}

	avg *= 100;
	avg /= n;

	cout << avg;
}