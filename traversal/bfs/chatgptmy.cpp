#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void bfs(int start, const unordered_map<int, vector<int>>& AdjList)
{
    unordered_set<int> visited;  // A set to keep track of visited nodes
    queue<int> q;

    visited.insert(start);
    q.push(start);

    while (!q.empty()) 
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : AdjList.at(node)) 
        {
            if (visited.find(neighbor) == visited.end()) 
            {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    unordered_map<int, vector<int>> AdjList;

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);  // Since it's an undirected graph
    }

     for (int i = 0; i < vertex; i++)
  {
    cout << i << "->";
    for (int j = 0; j < AdjList[i].size(); j++)
    {
      cout << AdjList[i][j] << " ";
    }
    cout << endl;
  }

    if (AdjList.find(1) != AdjList.end())  // Check if there is a node 1 to start BFS
        bfs(1, AdjList);
    else
        cout << "Starting node not in graph." << endl;

    return 0;
}
