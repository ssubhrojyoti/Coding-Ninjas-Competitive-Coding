#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int even_sum=0;
int odd_sum =0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
if((a[i]%2)==0)
{
if((i%2)==0)
{
even_sum = even_sum + a[i];
}
}
else if((a[i]%2)!=0)
{
if((i%2)!=0)
{
odd_sum = odd_sum + a[i];
}
}
}
cout<<even_sum<<" "<<odd_sum;
return 0;
}














