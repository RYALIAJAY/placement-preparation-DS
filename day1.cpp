//if one word in string reverse the string
//if more than one word reverse the words in string not letters
#include<bits/stdc++.h>
using namespace std;
void reverseWord(string s)
{
   	vector<string> temp;
	string str = "";
	for (int i = 0; i < s.length(); i++) 
	{
		if (s[i] == ' ') 
		{
			temp.push_back(str);
			str = "";
		}
		else
        {
			str += s[i];
        }
	}
	temp.push_back(str);
	int i;
	for (i = temp.size(); i > 0; i--)
    {
		cout << temp[i] << " ";
    }
	cout << temp[0] << endl;
}

void reverseString(string s)
{
       int i,l;
       l=s.length();
       reverse(s.begin(),s.end());
       cout<<s;
}

int main()
{
    char str[100];
    cout<<"enter string: ";
    gets(str);
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
         count++;
    }

    if(count>0)
    {
        reverseWord(str);
    }
    else
    {
        reverseString(str);
    }
    return 0;
}