#include <iostream>
#include <vector>
#include <stack>

// from /03-adjacency-lists/AdjacencyList.cpp
void addEdge(std::vector<std::vector<int>>& adjList, int from, int to){
    adjList[from].push_back(to);
    adjList[to].push_back(from);
}

// perform DFS
void DFS(std::vector<std::vector<int>>& adjList, int startingVertex){
    // initialize visited vector to track if vertex has been visited
    std::vector<bool> visited(adjList.size(), false);
    std::stack<int> stack;

    //put the starting vertex on top of the stack
    stack.push(startingVertex);

    while(!stack.empty()){
        int vertex = stack.top();
        // get the vertex from top of the stack
        stack.pop();

        // check if the vertex has been visited, if it hasn't then visit it
        if(!visited[vertex]){
            visited[vertex] = true;
            std::cout << vertex << " ";
        }

        // put all the neighbors of the visited vertex on top of the stack
        for(int neighbor : adjList[vertex]){
            if(!visited[neighbor]){
                stack.push(neighbor);
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::vector<int>> adjList(5); // initialize graph with 5 verticies

    // add edges to the graph
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 2, 4);

    // perform BFS traversal starting from vertex 0
    std::cout << "perform DFS from vertex 0:" << std::endl;
    DFS(adjList, 0);

    return 0;
}
