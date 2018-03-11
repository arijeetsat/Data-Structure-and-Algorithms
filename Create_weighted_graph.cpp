//create a weighted graph using STL.

#include <bits/stdc++.h>

using namespace std;

//vector  <dataType> vectorName;
//this is an array of vectors.
void addedge(vector <pair<int , int> > adj[],int u, int v, int wt)
{
	adj[u].push_back(make_pair(v,wt));
	adj[v].push_back(make_pair(u,wt));
}

void printg(vector <pair<int , int > > adj[] ,int V)
{
	int v,w;
	for(int u=0;u<V ; u++)
	{
		cout << "Node " << u << " makes an edge with \n";
		for(auto i = adj[u].begin(); i!=adj[u].end();i++)
		{
			v = i->first;// the first value in the pair
			w = i->second;// the second value in the pair
			cout << "\tNode " << v << " with edge weight ="
                 << w << "\n";
   		}
   		cout << "\n";
	}
}
int main()
{
	int V=5;
	vector <pair<int , int> >adj[V];
	addedge(adj, 0, 1, 10);
    addedge(adj, 0, 4, 20);
    addedge(adj, 1, 2, 30);
    addedge(adj, 1, 3, 40);
    addedge(adj, 1, 4, 50);
    addedge(adj, 2, 3, 60);
    addedge(adj, 3, 4, 70);
    printg(adj, V);

    return 0;
}