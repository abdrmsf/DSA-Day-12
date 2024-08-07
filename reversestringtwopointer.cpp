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
int start=0;
int end=strlen(name)-1;
while(start<=end)
{
    swap(name[start],name[end]);
    start++;
    end--;
}
for(int i=0;name[i]!='\0';i++)
{
    cout<<name[i]<<" ";
}
return 0;
}