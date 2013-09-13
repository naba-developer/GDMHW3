#include <cstdio>
#include <fileread.h>
using namespace std;

int main(int argc,char*argv[])
{
	/*Mapper mapper;
	Reducer reducer;
	Reader reader;
	reader.ReadFromFile();
	*/
	if(argc < 2)
	{
		cout<<"Usage:graph <filename>";
		return 0;
	}
	Reader reader =  Reader();
	reader.set_input_file_name(argv[1]);
	reader.readFromFile();
	return 0;


}
