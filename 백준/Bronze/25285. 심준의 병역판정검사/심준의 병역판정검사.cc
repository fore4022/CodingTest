#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	vector<int> results;
	double cm, kg, BMI;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> cm >> kg;

		BMI = kg / pow(cm / 100, 2);

		if (cm < 140.1)
		{
			results.push_back(6);
		}
		else if (cm < 146)
		{
			results.push_back(5);
		}
		else if (cm < 159)
		{
			results.push_back(4);
		}
		else if (cm < 161)
		{
			if (BMI >= 16 && BMI < 35)
			{
				results.push_back(3);
			}
			else
			{
				results.push_back(4);
			}
		}
		else if (cm < 204)
		{
			if (BMI < 16 || BMI >= 35)
			{
				results.push_back(4);
			}
			else if ((BMI >= 16 && BMI < 18.5) || (BMI >= 30 && BMI < 35))
			{
				results.push_back(3);
			}
			else if ((BMI >= 18.5 && BMI < 20) || (BMI >= 25 && BMI < 30))
			{
				results.push_back(2);
			}
			else if (BMI >= 20 && BMI < 25)
			{
				results.push_back(1);
			}
		}
		else
		{
			results.push_back(4);
		}
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}