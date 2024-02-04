#pragma once
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include "_math.hpp"


struct Edge
{
    Edge(int v, int u)
    : from(v)
    , to(u)
    {
    };

    int from;
    int to;
};

class _BaseGraph
{
    private:
    std::vector<int> _nodes;
    std::vector<Edge> _edges;

    public:
        _BaseGraph();

        std::vector<int> nodes(){return _nodes;};

        std::vector<Edge> edges(){return _edges;}

         void addNode(int n);

         void addNodesFrom(const std::vector<int> nodes);

         void addEdge(int from, int to);
         
         void addEdgesFrom(std::vector<std::pair<int, int>> edges);

         virtual Matrix<int> adjacency() = 0;

         virtual std::map<int, std::vector<int>> adjacencyList() = 0;

         virtual std::map<int, double> pagerank() = 0;

         virtual std::map<int, double> eigVectCentrality() = 0;
};
