#include <bits/stdc++.h>
using namespace std;

void printing(int a[],int i,int j){
cout<<"True";
for(int x=i;x<=j;x++)
{
    cout<<a[x]<<" ";

}
return;
}

int main()
{
int n,target;
cin>>n>>target;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
bool flag = false;
for(int i=0;i<n;i++)
{
int sum=0;
for(int j=i;j<n;j++){
sum+=a[j];
if(sum==target)
{
    printing(a,i,j);
    flag = true;
}
else if(sum>target)
{
break;
}
}
if(flag){
    break;
}
}
if(!flag)
{

    cout<<"False";
}
return 0;
}
