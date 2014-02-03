/*
 * =====================================================================================
 *
 *       Filename:  test-graph.cpp
 *
 *    Description:  a test for ceate graph and so on
 *
 *        Version:  1.0
 *        Created:  2014年02月03日 15时41分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xiao Qixue (XQX), xiaoqixue_1@163.com
 *   Organization:  Tsinghua University
 *
 * =====================================================================================
 */

#include <boost/graph/adjacency_list.hpp> 
#include <stdlib.h>
#include <stdio.h>
using namespace boost; 
using namespace std; 
typedef boost::adjacency_list<listS, vecS, undirectedS> mygraph; 

int main() 
{ 
	mygraph g;
	add_edge (0, 1, g);
	add_edge (0, 3, g);
	add_edge (1, 2, g);
	add_edge (2, 3, g);

	mygraph::vertex_iterator vertexIt, vertexEnd;
	mygraph::adjacency_iterator neighbourIt, neighbourEnd;
	tie(vertexIt, vertexEnd) = vertices(g);
	for (; vertexIt != vertexEnd; ++vertexIt) 
	{ 
		cout << *vertexIt << " is connected with "; 
		tie(neighbourIt, neighbourEnd) = adjacent_vertices(*vertexIt, g); 
		for (; neighbourIt != neighbourEnd; ++neighbourIt) 
			cout << *neighbourIt << " "; 
		cout << "\n"; 
	}

} 
