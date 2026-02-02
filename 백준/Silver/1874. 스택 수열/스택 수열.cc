#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<string> strs;
	vector<int> sequence, temp, vec;
	int n, m, i = 0, index = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		sequence.push_back(m);
	}

	while (true)
	{
		if (temp.size() == 0)
		{
			i++;

			temp.push_back(i);
			strs.push_back("+");
		}
		
		if (temp.back() == sequence[index])
		{
			index++;
			vec.push_back(temp.back());
			temp.pop_back();
			strs.push_back("-");
		}
		else if (temp.back() < sequence[index])
		{
			i++;

			temp.push_back(i);
			strs.push_back("+");
		}
		else if (temp.back() > sequence[index])
		{
			vec.push_back(temp.back());
			temp.pop_back();
			strs.push_back("-");
		}

		if (vec.size() == n)
		{
			break;
		}
	}

	if (sequence == vec)
	{
		for (string s : strs)
		{
			cout << s << '\n';
		}
	}
	else
	{
		cout << "NO";
	}
}