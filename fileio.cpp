#include <fileio.h>

void FileIO::readFromFile()
{
	string line;
	int node1,node2;
	int *arr;
	bool first_line=false;
	int count;
	ifstream reader(input_file_name.c_str());
	if(reader.is_open())
	{
		while(getline(reader,line))
		{
			job->getline(line);
			
		}
		reader.close();
	}
	else
	{
		
		cout<<"File not found\n";
	}
	
}

void FileIO::writeToFile(list<Node> list_nodes)
{
	ofstream writer(output_file_name.c_str());
	
	if(writer.is_open())
	{
		list<Node>::iterator it = list_nodes.begin();
        	while(it != list_nodes.end()) 
        	{
                	writer<<it->node_id<<" "<<it->degree<<"\n";
                	it++;
        	}
		
	}
	writer.close();
	
}

void FileIO::writeToFile(map<int,int> output_map)
{
	ofstream writer(output_file_name.c_str());
	if(writer.is_open())
        {
                
		map<int,int>::iterator map_it = output_map.begin();
                while(map_it != output_map.end())
                {
                        writer<<map_it->first<<" "<<map_it->second<<"\n";
                        map_it++;
                }

        }
        writer.close();

}
