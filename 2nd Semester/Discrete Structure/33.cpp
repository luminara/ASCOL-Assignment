#include <iostream>

using namespace std;

int main() {
  int v, e;
  cout << "Enter vertices and edges: ";
  cin >> v >> e;

  int cost[20][20];
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      if (i == j) cost[i][j] = 0;
      else cost[i][j] = 99999;
    }
  }

  cout << "Enter u, v, weight for each edge:\n";
  for (int i = 0; i < e; i++) {
    int u, w, weight;
    cin >> u >> w >> weight;
    cost[u][w] = weight;
    cost[w][u] = weight;
  }

  int src;
  cout << "Enter source vertex: ";
  cin >> src;

  int dist[20];
  bool visited[20] = {false};

  for (int i = 0; i < v; i++) {
    dist[i] = cost[src][i];
  }
  visited[src] = true;

  for (int count = 0; count < v - 1; count++) {
    int minDist = 99999, u = -1;
    for (int i = 0; i < v; i++) {
      if (!visited[i] && dist[i] < minDist) {
        minDist = dist[i];
        u = i;
      }
    }

    if (u == -1) break;
    visited[u] = true;

    for (int i = 0; i < v; i++) {
      if (!visited[i] && cost[u][i] != 99999) {
        if (dist[u] + cost[u][i] < dist[i]) {
          dist[i] = dist[u] + cost[u][i];
        }
      }
    }
  }

  cout << "Shortest distances from source " << src << ":\n";
  for (int i = 0; i < v; i++) {
    cout << "To " << i << " : " << dist[i] << "\n";
  }

  return 0;
}
