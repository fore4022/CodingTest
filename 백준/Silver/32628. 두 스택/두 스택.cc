#include<iostream>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> stackA, stackB;
	long long cntA = 0, cntB = 0;
	int n, k, o;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		stackA.push(o);

		cntA += o;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		stackB.push(o);
		
		cntB += o;
	}

	for (int i = 0; i < k; i++)
	{
		if (cntA > cntB)
		{
			cntA -= stackA.top();

			stackA.pop();
		}
		else
		{
			cntB -= stackB.top();

			stackB.pop();
		}
	}

	if (cntA > cntB)
	{
		cout << cntA;
	}
	else
	{
		cout << cntB;
	}
}