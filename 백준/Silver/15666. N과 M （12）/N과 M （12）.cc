#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<string> visited;
vector<int> nums, arr;
string str;
int limitDepth;

void ToString()
{
    str = "";

    for (int i : arr)
    {
        str += to_string(i) + " ";
    }
}

void Dfs(int index, int depth = 0)
{
    if (depth == limitDepth)
    {
        ToString();

        if (find(visited.begin(), visited.end(), str) == visited.end())
        {
            cout << str << '\n';

            visited.push_back(str);
        }
    }
    else
    {
        for (int i = index; i < nums.size(); i++)
        {
            arr[depth] = nums[i];

            Dfs(i, depth + 1);
        }
    }
}

int main()
{
    int n, m, o;

    cin >> n >> m;

    limitDepth = m;
    
    arr.resize(m, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> o;

        nums.push_back(o);
    }

    sort(nums.begin(), nums.end());

    Dfs(0);
}