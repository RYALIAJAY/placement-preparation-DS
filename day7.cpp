//reversing array in groups
#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,k,b[100],j=0;
    //j is used as reference after i exceeds k
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i<k)
        {
           b[i]=a[(k-1)-i];
        }
        else
        {
           b[i]=a[k+j];
           j++; 
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}