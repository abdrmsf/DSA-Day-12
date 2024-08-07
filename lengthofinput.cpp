#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
char name[100];
cin.getline(name,10);
int count=0;
for(int i=0;name[i]!='\0';i++)
{
    count++;
}
cout<<count;
return 0;
}