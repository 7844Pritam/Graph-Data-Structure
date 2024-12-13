#include <bits/stdc++.h>
using namespace std;

int main()
{

  int vertex, edges;
  cin >> vertex >> edges;

  vector<int> AdjList[vertex];
  // or
  //  vector<vector<int>>AdjList(vertex);

  int u, v;
  for (int i = 0; i < edges; i++)
  {
    cin >> u >> v;
    AdjList[u].push_back(v);
    AdjList[v].push_back(u);
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
  return 0;
}

// 5 6
// 0 1
// 1 2
// 0 2
// 1 3
// 3 4
// 2 4
// 0->1 2
// 1->0 2 3
// 2->1 0 4
// 3->1 4
// 4->3 2