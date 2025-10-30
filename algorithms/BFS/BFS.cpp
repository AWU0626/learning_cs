#include <vector>
#include <queue>
#include <iostream>
#include <unordered_map>
#include "BFS.h"

using namespace std;

bool BFS(unordered_map<int, vector<int>> graph, int head, int search) {
	int size = graph.size();
	bool visited[graph.size()];
	queue<int> queue = {};

	// initialize head
	visited[head] = true;
	queue.push(head);

	// search while queue is not empty
	while(!queue.empty()) {
		// dequeue the current node
		int node = queue.front();
		queue.pop();

		// enqueue the neighbors
		vector<int> neighbors = graph[node];
		for (int neighbor : neighbors) {	
			if (!visited[neighbor]) {
				// found the node, returns true;
				if (neighbor == search) return true;

				// otherwise push to queue and continue search
				queue.push(neighbor);
				visited[neighbor] = true;
			}	
		}
	}

	return false;
}

int main() {
    int head;
    int search;
    
    cout << "Enter head node: ";
    cin >> head;
    cout << "Enter node to search for: ";
    cin >> search;
    
    unordered_map<int, vector<int>> graph;
    
    graph.insert({0, {3, 6, 8}});
    graph.insert({1, {2}});
    graph.insert({2, {}});
    graph.insert({3, {1, 2}});
    graph.insert({4, {}});
    graph.insert({5, {}});
    graph.insert({6, {3, 1}});
    graph.insert({7, {5}});
    graph.insert({8, {7, 4}});
    graph.insert({9, {4}});
    

    bool hasValue = BFS(graph, head, search);
    if (hasValue) cout << "Graph starting at " << head << " CAN reach " << search << endl;
    else cout << "Graph starting at " << head << " CANNOT reach " << search << endl;
    
    return 0;
    
}
