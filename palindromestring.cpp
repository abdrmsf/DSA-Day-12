#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<limits.h>
using namespace std;
bool checkpalindrome(char name[])
{
    int len=strlen(name);
    for(int i=0;i<len/2;i++)
    {
        if(name[i]!=name[len-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
char name[100];
cin.getline(name,50);
bool Getresult=checkpalindrome(name);
cout<<Getresult<<endl;
return 0;
}