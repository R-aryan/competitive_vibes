#include<bits/stdc++.h>

#define KMAX 1000
#define MOD 100000
#define FMAX 100001
#define long long long

using namespace std;

long int key,lo,N;
long int nkey[KMAX];

int bfs()
{
    int flag[FMAX];
    queue<long int> QU;

    memset(flag, -1, FMAX*sizeof(int));

    QU.push(key);
    flag[key]=0;

    while(QU.size()!=0)
    {
        long int val,i,v;
        val=QU.front();
        QU.pop();

        if(lo==val)
            break;

        for(i=0;i<N;i++)
        {
            v=(val * nkey[i])% MOD;
            if(flag[v] == -1)
            {
                QU.push(v);
                flag[v]=flag[val]+1;

            }

        }

    }

    return flag[lo];



}
int main()
{
    cin>>key>>lo;
    cin>>N;
    long int i;
    for(i=0;i<N;i++)
        cin>>nkey[i];

    cout << bfs();

}
