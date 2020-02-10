#include<bits/stdc++.h>
using namespace std;
bool candistributeequally(int);
int main(){
int fruits;
cin>>fruits;
int fullmoons= 0;
while(!candistributeequally(fruits))
{
fruits = 2* fruits;
fullmoons = fullmoons + 1;
}
cout<<fullmoons<<" "<<fruits<<endl;
return 0;
}

bool candistributeequally(int n){

if((n%11)==1){
return true;
}
else
{
return false;
}
}


