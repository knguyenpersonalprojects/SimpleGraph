#include<iostream>
#include<list>
using namespace std;
//Creating Graphs using Adjacency List


class Graph
{
private:
	int vertices;
	//create a pointer to list of array
	list<int>* l;


public:
	Graph(int V)
	{
		vertices = V;
		//a list of size verticies is created in the constructor
		l = new list<int>[vertices];
	}

	void addNode(int a, int b)
	{
		l[a].push_back(b);
		l[b].push_back(a);
	}
	void Display()
	{
		for (int i = 0; i < vertices; i++)
		{
			cout << i;
			for (auto x : l[i])
			{
				cout << "--->" << x;
			}
			cout << endl;
		}
	}
};


int main()
{
	Graph G(4);
	G.addNode(0, 1);
	G.addNode(0, 2);
	G.addNode(1, 2);
	G.addNode(2, 3);
	G.Display();
	system("PAUSE");
}