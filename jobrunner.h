#include <string>
#define MAP 0
#define REDUCE 1
using namespace std;
class JobRunner
{
        private:
        Mapper mapper;
        Reducer reducer;
	int stage;
	list<Node> *list_nodes;
	map<int,int> *output_map;
        public:
        void set_mapper(Mapper& mapper) { this->mapper = mapper;}
        void set_reducer(Reducer& reducer) { this->reducer = reducer;}
	void set_stage(int stage) { this->stage = stage;}
	void set_list_nodes(list<Node> *list_nodes){this->list_nodes = list_nodes;}
	void set_output_map(map<int,int> *output_map){this->output_map = output_map;}
	void getline(string line);
};

