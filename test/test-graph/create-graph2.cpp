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
#include <boost/graph/undirected_graph.hpp>
#include <stdlib.h>
#include <stdio.h>
using namespace boost; 
using namespace std; 
typedef boost::adjacency_list<listS, vecS, undirectedS> mygraph; 

int main( )
{ 
	undirected_graph<>g;
	undirected_graph<>::vertex_descriptor u = g.add_vertex();
	undirected_graph<>::vertex_descriptor v = g.add_vertex();
	undirected_graph<>::vertex_descriptor w = g.add_vertex();
	undirected_graph<>::vertex_descriptor x = g.add_vertex();
	add_edge(u, v, g); 
	add_edge(u, w, g); 
	add_edge(u, x, g);
	cout << "Degree of u: " << degree(u, g);
	return 0; 
} 
