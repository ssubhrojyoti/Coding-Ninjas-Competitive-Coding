#include<bits/stdc++.h>
using namespace std;
int main()
{
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
int x3,x4,y3,y4;
cin>>x3>>y3>>x4>>y4;

int a1 = (x2 - x1) * (y2-y1);
int a2 = (x4 - x3) * (y4-y3);

int left =max(x1,x3);
int right = min(x2,x4);
int bottom = max(y1,y3);
int top = min(y2,y4);

if(left<right && bottom<top)
{
int aintr = (right - left) * (top - bottom);
int ans = a1 + a2 - aintr;
cout<<ans<<endl;
}
else
{
 int ans = a1+a2;
cout<<ans<<endl;
}
return 0;
} 

