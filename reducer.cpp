#include <reducer.h>
#include <iostream>
#include <stdio.h>
using namespace std;
void Reducer::Reduce(string line,map<int,int> *output_map)
{
	int n1,n2; 
	int current_degree;
	sscanf(line.c_str(),"%d %d",&n1,&n2);
	if(output_map->find(n1) != output_map->end())
	{
		current_degree = output_map->at(n1);
		current_degree++;
		(*output_map)[n1] = current_degree;
		
	}
	else
	{
		//output_map->insert(pair<int,int>(n1,n2));
		output_map->insert(pair<int,int>(n1,n2));
	}
}



