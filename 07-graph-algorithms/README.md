# Implementing Common Graph Algorithms
## Depth-First Search (DFS)
Depth-First Search is an algorithm that is used to traverse and search a graph for a specific vertex, or value assosiated with a vertex. There are two way that DFS can be implemented, one using recursive calls and the other iterively. In this repository we will be deomnstrating the iterative approach for simplicity.
- [DFS.cpp](/07-graph-algorithms/DFS.cpp)
This algorithm searches the leaf-most vertex of a tree/graph first, then searching the verticies above. It will always attempt togo lower in the graph until it is at a leaf node, then returns up.
## Breadth-First-Search (BFS)
Breadth-First Search is another algorithm so traversing a graph. This algorithm starts by exploring all the neighbors of a given vertex before moving on to the other neighbors. This algorithm uses a queue implementation like shown.
- [BFS.cpp](/07-graph-algorithms/BFS.cpp)
This algorithm is also known as the level-traversal. It will search all neighbors of a "root" vertex and then traverses down one of the neighbors and search all the neighbors of that vertex aswell, continuing in the fashion. BFS uses a queue to explore a graph level by level.
## Shortest Path Algorithms (s-t Path)
In this guide, we will be exploring Dijkstra's Algorithm for a shortest path algorithm. This algorithm finds the shortest path between verticies of a graph by "relaxing" all neighbors of a "root" vertex, then traversing down the shortest vertex and doing the same. "Relaxing" a vertex means to add each neighbor's weight to a table that is stored in the function. By relaxing a vertex and traversing to the shortest one, then relaxing again, the algorithm ensures it finds and stores the shortest path by using a priority queue (min-heap) and distance vector.
- [Dijkstra.cpp](/07-graph-algorithms/Dijkstra.cpp)