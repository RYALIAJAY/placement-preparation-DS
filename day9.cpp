//number as sum of two prime numbers
#include<iostream>
using namespace  std;

int isprime(int n)
{
    int count=0,i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
  return 0;  
}

int main()
{
    int n;
    cin>>n;
    isprime(n);
    return 0;
}
