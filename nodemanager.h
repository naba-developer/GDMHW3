class Node
{
	public:
	int node_id;
	int degree;
	Node(int node_id,int degree)
	{
		this->node_id = node_id;
		this->degree = degree;
	}
	friend bool operator<(const Node &node1,const Node &node2);
};	


