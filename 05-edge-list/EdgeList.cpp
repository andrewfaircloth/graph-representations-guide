#include <iostream>
#include <vector>

// adds edge to list
void addEdge(std::vector<std::pair<int, int>>& edgeList, int from, int to){
    edgeList.push_back({from, to});
}

// prints edge list to console
void printEdgeList(const std::vector<std::pair<int, int>>& edgeList){
    for(const auto& edge : edgeList){
        std::cout << edge.first << " " << edge.second << std::endl;
    }
}

int main(){
    std::vector<std::pair<int, int>> edgeList; // initializes edge list

    // adds edges
    addEdge(edgeList, 1, 2);
    addEdge(edgeList, 3, 1);
    addEdge(edgeList, 2, 1);
    addEdge(edgeList, 0, 1);
    addEdge(edgeList, 0, 3);
    addEdge(edgeList, 0, 2);

    //prints edge list
    std::cout << "Edge list representation" << std::endl;
    printEdgeList(edgeList);

    return 0 ;
}