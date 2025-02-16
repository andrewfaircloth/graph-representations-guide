# Introduction to Graph Representation
## Why Represent Graphs?
Graph algorithms such as Depth-First Search (DFS), Breadth-First Search (BFS) and Dijkstra's Shortest Path all depend on how a graoh is being stored. When chosing which representation to use, it is important to understand which graph would make it easier to manipulate data. 
## Overview of Graph Representations
The three main types of graph representation are:
- Adjacency List
- Adjacency Matrix
- Edge List
## Comparison of Representations
Each representation apply a different space and time complexity for different operation.
-  Adjacency Lists are best chosen for sparse graphs, where verticies have a small number of neighbors. 
- Adjacency Matrix are best chosen for dense graphs where verticies have many neighbors. 
- Edge Lists are best for when all you need is to store edges without performing frequent operations.