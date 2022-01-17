//2d array from hackerrank
#include<iostream>
using namespace std;
int main()
{
    int i,j,a[100][100],maxsum=-1510;//k=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
           int sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]; 
           if(sum>maxsum)
           {
               maxsum=sum;
           }
        }
    }
cout<<maxsum;
return 0;    
    }