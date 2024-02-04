#include "_basegraph.hpp"


_BaseGraph::_BaseGraph()
{
};

void _BaseGraph::addNode(int n)
{
     _nodes.push_back(n);
};

void _BaseGraph::addNodesFrom(const std::vector<int> nodes)
{
    for(auto it = nodes.begin(); it != nodes.end(); ++it)
    {
        if(std::find(_nodes.begin(), _nodes.end(), *it) != _nodes.end())
        {
        }else{
            _nodes.push_back(*it);
        }
    }
};

void _BaseGraph::addEdge(int from, int to)
{
    Edge e(from, to);
    _edges.push_back(e);
};

void _BaseGraph::addEdgesFrom(std::vector<std::pair<int, int>> edges)
{
    for(auto &pair : edges)
    {
        Edge e(pair.first, pair.second);
        _edges.push_back(e);
    }
};



