#include <iostream>

using namespace std;

int main() {
  int v, e;
  cout << "Enter number of vertices and edges: ";
  cin >> v >> e;

  int adj[20][20] = {0};

  cout << "Enter edges (u v):\n";
  for (int i = 0; i < e; i++) {
    int u, w;
    cin >> u >> w;
    adj[u][w] = 1;
    adj[w][u] = 1;
  }

  cout << "Adjacency Matrix:\n";
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cout << adj[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
