#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Reader{
private:
string input_file_name;
public:
void readFromFile();
void set_input_file_name(string input_file_name) { this->input_file_name = input_file_name;}
};
