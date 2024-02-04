#include "_basegraph.hpp"
#include "_math.hpp"


class Graph : _BaseGraph
{

    public:

    Matrix<int> adjacency();

    std::map<int, std::vector<int>> adjacencyList();

}