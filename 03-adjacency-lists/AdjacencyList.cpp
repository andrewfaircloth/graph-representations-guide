#include <iostream>
#include <vector>

// adds edges to graph
void addEdge(std::vector<std::vector<int>>& adjList, int from, int to){
    adjList[from].push_back(to);
    adjList[to].push_back(from); // add to both because undirected
}

// displays graph to console
void printGraph(const std::vector<std::vector<int>>& adjList){
    for(int from = 0; from < adjList.size(); from ++){
        std::cout << from << ":";
        for(int to = 0; to < adjList[from].size(); to++){
            std::cout << to << " "; 
        }
        std::cout << std::endl;
    }
}

int main(){
    std::vector<std::vector<int>> adjList(4); // graph is initialized as unweighted

    // adds edges
    addEdge(adjList, 0, 1);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 2);
    addEdge(adjList, 0, 3);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 2, 1);

    // prints graph
    std::cout << "Graph representation:" << std::endl;
    printGraph(adjList); 

    return 0 ;
}