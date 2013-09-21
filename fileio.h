#include <mapper.h>
#include <map>
#include <list>
#include <reducer.h>
#include <jobrunner.h>
#include <fstream>
#include <iostream>
using namespace std;
class FileIO{
private:
string input_file_name;
string output_file_name;
JobRunner *job;
public:
void readFromFile();
void writeToFile(list<Node> list_objects);
void writeToFile(map<int,int> output_map);
void set_input_file_name(string input_file_name) { this->input_file_name = input_file_name;}
void set_output_file_name(string output_file_name) { this->output_file_name = output_file_name;}
void set_job(JobRunner *job) { this->job = job;}
};
