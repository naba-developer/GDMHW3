#include <fileread.h>

void Reader::readFromFile()
{
	string line;
	int n,m;
	ifstream reader(input_file_name.c_str());
	if(reader.is_open())
	{
		while(getline(reader,line))
		{
			cout <<line<<endl;
			sscanf(line.c_str(),"%d %d",&n,&m);
			cout <<n<<" "<<m;
		}
		reader.close();
	}
	else
		cout<<"File not found\n";
}
