#include <iostream>
#include <vector>
#include <queue>

// from /03-adjacency-lists/AdjacencyList.cpp
void addEdge(std::vector<std::vector<int>>& adjList, int from, int to){
    adjList[from].push_back(to);
    adjList[to].push_back(from);
}

// perform BFS
void BFS(std::vector<std::vector<int>>& adjList, int startingVertex){
    // initialize queue
    std::queue<int> queue;  
    
    // initialize visited vector to nothing has been visited
    std::vector<bool> visited(adjList.size(), false);

    // make the source vertex visited
    visited[startingVertex] = true;
    
    // put source vertex into queue
    queue.push(startingVertex);

    // Iterate over the queue
    while(!queue.empty()){
      
        // get a vertex from the front of the queue
        int curretVertex = queue.front();
        queue.pop();
        std::cout << curretVertex << " ";

        // put all verticies that are adjacent to currentVertex into the queue
        // if it has not been visited push it into the queue and mark it as visited
        for(int vertex : adjList[curretVertex]){
            if(!visited[vertex]){
                visited[vertex] = true;
                queue.push(vertex);
            }
        }
    }
}

int main() 
{
    std::vector<std::vector<int>> adjList(5); // initialize graph with 5 verticies

    // add edges to the graph
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 4);

    // perform BFS traversal starting from vertex 0
    std::cout << "perform BFS from vertex 0 : \n";
    BFS(adjList, 0);

    return 0;
}
