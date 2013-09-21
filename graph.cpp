#include <cstdio>
#include <fileio.h>
using namespace std;

void JobRunner::getline(string line)
{
	static bool first_line = true;
	if(stage==MAP)
	{
		if(!first_line)
		{
			mapper.Map(line,list_nodes);
			
		}
		first_line  = false;
	}
	else
		reducer.Reduce(line,output_map);
}
int main(int argc,char*argv[])
{
	if(argc < 2)
	{
		cout<<"Usage:graph <filename>";
		return 0;
	}
	FileIO file_io;
	Mapper mapper;
	Reducer reducer;
	list<Node> list_nodes;
	map<int,int> output_map;
	JobRunner job;
	job.set_mapper(mapper);
	job.set_reducer(reducer);
	job.set_stage(MAP);
	job.set_list_nodes(&list_nodes);
	job.set_output_map(&output_map);
	file_io.set_input_file_name(argv[1]);
	file_io.set_job(&job);
	file_io.readFromFile();
	list<Node>::iterator p = list_nodes.begin();
	list_nodes.sort();
	file_io.set_output_file_name("Mapper.txt");
	file_io.writeToFile(list_nodes);
	file_io.set_input_file_name("Mapper.txt");
	job.set_stage(REDUCE);
	
	file_io.set_input_file_name("Mapper.txt");
	file_io.readFromFile();

	file_io.set_output_file_name("Reducer.txt");
	file_io.writeToFile(output_map);

	return 0;


}
