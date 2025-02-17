#include <iostream>
#include <vector>

// adds edge to matrix
void addEdge(std::vector<std::vector<int>>& adjMatrix, int from, int to){
    adjMatrix[from][to] = 1;
    adjMatrix[to][from] = 1; //add to both because undirected
}

// prints graph to console
void printGraph(std::vector<std::vector<int>>& adjMatrix){
    for(int from = 0; from < adjMatrix.size(); from++){
        for(int to = 0; to < adjMatrix.size(); to++){
            std::cout << adjMatrix[from][to] << " ";
        }
        std::cout << std::endl;
    }
}


int main(){
    std::vector<std::vector<int>> adjMatrix(4, std::vector<int>(4, 0)); // creates 4 by 4 unweighted matrix initialized to 0 by default

    // adds edges
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 2, 1);
    addEdge(adjMatrix, 3, 1);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 3, 2);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 0, 2);
    
    // prints graph
    std::cout << "Graph representation" << std::endl;
    printGraph(adjMatrix);

    return 0 ;
}