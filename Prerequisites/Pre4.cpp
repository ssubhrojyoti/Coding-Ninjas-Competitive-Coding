#include <iostream>

using namespace std;

int main()
{
    int n,t,left;
    cin>>n;
    int a[n];
    int sum[n/2];
    for(int i= 0;i<n;i++){
    cin>>a[i];
    }
      for(int i= 0;i<n/2;i++)
      {
          int first_no = a[i];
          int last_no = a[n-i-1];
          sum[i]=first_no+last_no;
      }
        for(int i= 0;i<n/2;i++)
        {
            t = sum[i]/10;
            left = sum[i]%10;
           cout<<t<<" "<<left<<endl;
        }
        return 0;
}
