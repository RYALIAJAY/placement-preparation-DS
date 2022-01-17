//chocolate feast from hackerrank
#include<iostream>
using namespace std;
int chocolatefeast(int n,int c,int m)
{
int total=0,wrap;
wrap=n/c;
total=wrap;
while(wrap>=m)
{
    total=total+(wrap/m);
    wrap=(wrap/m)+(wrap%m);
}  
return total;  
}

int main()
{
    int n,m,c,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>c>>m;
        cout<<chocolatefeast(n,c,m)<<endl;
    }
    return 0;
}