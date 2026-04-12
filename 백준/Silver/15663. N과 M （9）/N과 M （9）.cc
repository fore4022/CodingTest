#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

vector<int> vec, nums, result, mixture;
vector<bool> visited;
map<vector<int>, bool> mp;
int limitDepth;

void dfs(int node, int depth = 1)
{
    visited[node] = true;

    mixture.push_back(nums[node - 1]);
    result.push_back(node);

    if (depth == limitDepth)
    {
        if (!mp[mixture])
        {
            for (int i : result)
            {
                cout << nums[i - 1] << " ";
            }

            cout << '\n';

            mp[mixture] = true;
        }
    }
    else
    {
        for (int i = 1; i <= vec.size() - 1; i++)
        {
            if (!visited[vec[i]])
            {
                dfs(vec[i], depth + 1);
            }
        }
    }

    visited[node] = false;

    mixture.pop_back();
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

        vec[i] = i;

        s.insert(o);
        nums.push_back(o);
    }

    sort(nums.begin(), nums.end());

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }
}