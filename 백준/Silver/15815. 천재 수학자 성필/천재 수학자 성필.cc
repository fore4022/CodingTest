#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	stack<int> s;
	string str;
	int tempA, tempB;
	
	cin >> str;

	for (char c : str)
	{
		if (isdigit(c))
		{
			s.push(c - '0');
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

	cout << s.top();
}