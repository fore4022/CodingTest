#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;

vector<int> vec, nums, result;
vector<bool> visited;
map<set<int>, bool> mp;
int limitDepth;

void dfs(int node, int depth = 1)
{
    if (depth > limitDepth)
    {
        return;
    }

    visited[node] = true;

    result.push_back(node);

    for (int i = 1; i <= vec.size() - 1; i++)
    {
        if (!visited[vec[i]])
        {
            dfs(vec[i], depth + 1);
        }
    }

    if (depth == limitDepth)
    {
        set<int> temp;

        for (int i : result)
        {
            temp.insert(i);
        }

        if (!mp[temp])
        {
            for (int i : result)
            {
                cout << nums[i - 1] << " ";
            }

            cout << '\n';
        }

        mp[temp] = true;
    }

    visited[node] = false;

    result.pop_back();
}

int main()
{
    set<int> s;
    int n, m, o;

    cin >> n >> m;

    limitDepth = m;

    vec.resize(n + 1, 0);
    visited.resize(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> o;

        s.insert(o);

        vec[i] = i;
    }

    nums = vector<int>(s.begin(), s.end());

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }
}