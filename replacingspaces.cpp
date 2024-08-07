#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
char name[100];
cin.getline(name,50);
for(int i=0;name[i]!='\0';i++)
{
    if(name[i]==' ')
    {
        name[i]='@';
    }
}
for(int i=0;name[i]!='\0';i++)
{
    cout<<name[i];
}
return 0;
}