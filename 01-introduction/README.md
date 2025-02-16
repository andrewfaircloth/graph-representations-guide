# Introduction
In this repository, we will explore what graphs are, their basic components and representations. Graphs can be used in a variety of way in the real world and are very helpful in solving problems that invovle relationships.
## Basic Terminology
Vertex - A point on a graph that represents a single entity.
Edge - A connection between two verticies that represents a relationship.
Adjacency - When verticies are adjacent, it means that there is an edge connecting them together.
Degree - The number of edges connected to a vertex.
Path - a sequence on connection verticies.
Cycle - When there is a path in a graph where the starting and ending vertex are the same.
## What is a graph?
### Definition
A graph is a collection of nodes and verticies that represent a relationship. These can represent things in real world problems such as social networks, web pages and transportation.
### Types of Graphs
1. Directed vs Undirected Graphs:
- Directed graphs are graphs in which edges have a direction. This means an edge from vertex A to B does not imply an edge from B to A. This is used in relationships such as web pages.
- Undirected graphs are graph in which edges have no direction. If there is an edge between vertex A and B, then there is an edge between B and A. This can be seen in an exmaple of friendship on social networks like Facebook.
2. Weighted vs Unweighted Graphs:
- In weighted graphs, each edge has a weight property that represents values such as distance and cost. An example would be the time it take between two bus stops in a city.
- In an unweighted graph, all edges have the same weight which means that all edges are equal. All these graphs care about is that there is a relationship between two verticies.
3. Cyclic vs Acyclic:
-Cyclic graphs are graphs where there is atleast one cycle.
-Acyclic graphs are graphs that have no cycles.
### Applications of Graphs
There are many real-world applications that can be solved by the use of graphs. These include problems like shortest path, connected components, and cycle checking. In the following sections, we will learn the different graph representations and how to apply them using code demos.
