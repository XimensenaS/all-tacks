#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

struct arc
{
    int start;
    int end;
};

class IGraph
{
public:
    IGraph(){};
    IGraph(IGraph *_oth){};
    virtual ~IGraph() {}
    virtual void addEdge(int from, int to) = 0;                                     // Метод принимает вершины начала и конца ребра и добавляет ребро
    virtual int verticesCount() const = 0;                                          // Метод должен считать текущее количество вершин
    virtual void getNextVertices(int vertex, std::vector<int> &vertices) const = 0; // Для конкретной вершины метод выводит в вектор «вершины» все вершины, в которые можно дойти по ребру из данной
    virtual void getPrevVertices(int vertex, std::vector<int> &vertices) const = 0; // Для конкретной вершины метод выводит в вектор «вершины» все вершины, из которых можно дойти по ребру в данную
};

class ListGraph : virtual public IGraph
{
private:
    vector<arc> arcs;
    unordered_set<int> vertices;
public:
    
};

class MatrixGraph : virtual public IGraph
{
};