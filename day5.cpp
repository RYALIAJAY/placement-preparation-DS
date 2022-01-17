// program to sum all numbers in a string
#include<bits/stdc++.h>
using namespace std;

int isnumber(char str)
{
  if(str>='0' && str<='9')
  {
      return 1;
  }
  else 
  {
      return 0;
  }
}

int main()
{
    char str[100];
    cin>>str;
    int i,sum=0,p=0,n,j=0;
    vector<int>v;
    for(i=0;str[i]!='\0';i++)
    {
        if(isnumber(str[i])==1)
        {
           while(isnumber(str[i])==0)
           {
               sum=(sum*(10^p))+str[i];
               p++;
               i++;
               n=i;
           }
            v.push_back(sum);
            i=n;
        } 
    }
   int total;
   total=accumulate(v.begin(),v.end(),0);
   cout<<"sum of digits in string: "<<total<<endl;
    return 0;
}