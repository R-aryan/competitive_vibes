#include<iostream>
#include<vector>

using namespace std;

bool A[1000][1000];

void initialize()
{
    int i,j;

    for(i=0;i<1000;i++)
    {
        for(j=0;j<1000;j++)
        {
            A[i][j]=false;
        }
    }
}

void adjacency_matrix(int edges,int nodes)
{
        int x, y,i,j,q;
        initialize();       //Since there is no edge initially
        //cout<<"enter "<<edges<<"  co-ordinates\n\n";
        for(i = 0;i < edges;++i)
        {
            cin >> x >> y;
            A[x][y] = true;     //Mark the edges from vertex x to vertex y
       }
       //cout<<"matrix representation of the graph is \n\n";
       cin>>q;cout<<"\n";
       for(i=0;i<q;i++)
       {
           cin>>x>>y;
           if(A[x][y]==true)
           cout<<"YES \n";
           else
           cout<<"NO \n";

       }
}

int main()
{
   // cout<<"enter number of nodes and edges \n";
    int  nodes, edges,ch;
    cin >> nodes;       //Number of nodes
    cin >> edges;
    adjacency_matrix(edges,nodes);
}
