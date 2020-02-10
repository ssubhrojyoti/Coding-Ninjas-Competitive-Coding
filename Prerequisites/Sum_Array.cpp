#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n][n];

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            }
            }
    long sum = 0;
    for(int i =0;i<n;i++){

        sum += a[i][0] + a[i][n-1];  //left and right most columns
    }

     for(int i =1;i<n-1;i++)
     {
         sum += a[0][i] + a[n-1][i];
         //top and bottom columns without the elements that have been included in the left and right most columns
     }
      for(int i =1;i<n-1;i++)
      {
          sum += a[i][i] + a[i][n-i-1];
          //diagonals elements which have not been included in the above loops
      }
      if((n%2)!=0)
      {

          sum-=a[n/2][n/2];
      }
cout<<sum<<endl;
      return 0;
}
