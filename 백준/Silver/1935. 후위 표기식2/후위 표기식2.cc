#include<iostream>
#include<stack>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	stack<double> s;
	string str;
	double tempA, tempB;
	int n, o;

	cin >> n >> str;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		vec.push_back(o);
	}

	for (char c : str)
	{
		if (c >= 'A' && c <= 'Z')
		{
			s.push(vec[c - 'A']);
		}
		else
		{
			switch (c)
			{
			case '+':
				tempA = s.top();

				s.pop();

				tempB = s.top();

				s.pop();
				s.push(tempA + tempB);

				break;
			case '-':
				tempA = s.top();

				s.pop();

				tempB = s.top();

				s.pop();
				s.push(tempB - tempA);

				break;
			case '*':
				tempA = s.top();

				s.pop();

				tempB = s.top();

				s.pop();
				s.push(tempA * tempB);

				break;
			case '/':
				tempA = s.top();

				s.pop();

				tempB = s.top();

				s.pop();
				s.push(tempB / tempA);

				break;
			}
		}
	}

	cout << fixed << setprecision(2) << s.top();
}