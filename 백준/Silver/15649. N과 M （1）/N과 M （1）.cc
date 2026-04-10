#include<iostream>
#include<vector>
#include<deque>
#include<set>

using namespace std;

vector<int> vec;
vector<bool> visited;
deque<int> dq;
int limitDepth;

void dfs(int node, int depth = 1)
{
    if (depth > limitDepth)
    {
        return;
    }

    visited[node] = true;

    dq.push_back(node);

    for (int i = 1; i <= vec.size() - 1; i++)
    {
        if (!visited[vec[i]])
        {
            dfs(vec[i], depth + 1);
        }
    }
    
    if (depth == limitDepth)
    {
        for (int i : dq)
        {
            cout << i << " ";
        }

        cout << '\n';
    }

    visited[node] = false;

    dq.pop_back();
}

int main()
{
    int n, m;

    cin >> n >> m;

    limitDepth = m;

    vec.resize(n + 1, 0);
    visited.resize(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        vec[i] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }
}