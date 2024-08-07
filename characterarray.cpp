#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
char name[100];
cin.getline(name,10,'-');
for(int i=0;i<100;i++)
{
    cout<<name[i]<<" ";
}
return 0;
}