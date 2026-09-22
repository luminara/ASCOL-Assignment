#include <iostream>

using namespace std;

struct Edge {
  int u, v, w;
};

int findParent(int parent[], int i) {
  if (parent[i] == i) return i;
  return parent[i] = findParent(parent, parent[i]);
}

int main() {
  int v, e;
  cout << "Enter vertices and edges: ";
  cin >> v >> e;

  Edge edges[100];
  cout << "Enter u, v, weight for each edge:\n";
  for (int i = 0; i < e; i++) {
    cin >> edges[i].u >> edges[i].v >> edges[i].w;
  }

  for (int i = 0; i < e - 1; i++) {
    for (int j = 0; j < e - i - 1; j++) {
      if (edges[j].w > edges[j + 1].w) {
        Edge temp = edges[j];
        edges[j] = edges[j + 1];
        edges[j + 1] = temp;
      }
    }
  }

  int parent[100];
  for (int i = 0; i < v; i++) parent[i] = i;

  int totalWeight = 0;
  cout << "MST Edges:\n";
  for (int i = 0; i < e; i++) {
    int rootU = findParent(parent, edges[i].u);
    int rootV = findParent(parent, edges[i].v);

    if (rootU != rootV) {
      cout << edges[i].u << " - " << edges[i].v << " : " << edges[i].w << "\n";
      totalWeight += edges[i].w;
      parent[rootU] = rootV;
    }
  }

  cout << "Total MST Weight: " << totalWeight << "\n";

  return 0;
}
