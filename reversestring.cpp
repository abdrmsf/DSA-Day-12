#include<iostream>
#include<vector>
#include<cmath>
#include<string.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
char name[100];
cin.getline(name,10);
int len=strlen(name);
for(int i=0;i<=len/2;i++)
{
    swap(name[i],name[len-i-1]);
}
for(int i=0;name[i]!='\0';i++)
{
    cout<<name[i]<<" ";
}
return 0;
}