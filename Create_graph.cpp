//Storing a Graph in the from of using STL 
//to form adjacency list.
#include <bits/stdc++.h>

using namespace std;

vector <int> adj[10];
int main()
{

	int i,j,x ,y ,edges,nodes ;
	cout<<"Give nodes and edges"<<endl;
	cin >> nodes;
	cin >> edges;

	for(i=0;i<edges;i++)
	{	
		cout<<"Give the edges b/w two nodes"<<endl;
		cin >> x >> y;
		adj[x].push_back(y);
	}

	for(i=0;i<=nodes;i++)
	{
		cout<<"Adj list of" <<i<<":"<<endl;
		for(j=0;j<adj[i].size();j++)
		{
			if(j== adj[i].size()-1)
			{
				cout << adj[i][j] << endl;
			}
			else 
			{
				cout<<adj[i][j] << "-->" ;
			}
		} 
	}
}