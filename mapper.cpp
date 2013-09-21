#include <mapper.h>
#include <iostream>
#include <list>
#include <stdio.h>
using namespace std;
void Mapper::Map(string line,list<Node> *list_nodes)
{
	int n1,n2; 
	sscanf(line.c_str(),"%d %d",&n1,&n2);
	Node node1(n1,1),node2(n2,1);
	list_nodes->push_back(node1);
	list_nodes->push_back(node2);
}



