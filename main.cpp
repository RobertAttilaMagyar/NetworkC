#include <iostream>
#include "include/graph.hpp"
#include <vector>

int main(){
	Graph g;
	for (int i; i < 5; ++i)
		g.addNode(i);

	for(auto& x : g.nodes()) std::cout<<x<<std::endl;
	return 0;

}
