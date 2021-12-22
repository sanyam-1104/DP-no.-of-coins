#include <iostream>
#include <climits>
#include <cstring>

using namespace std;

int minCoins(int n,int arr[],int dp[])
{
    if(n==0)
      return 0;
      
    int ans=INT_MAX;
    
    for(int i=0;i<3;i++)
    {
        if(n-arr[i]>=0)
        {
          int subans=0;
          if(dp[n-arr[i]]!=-1)
          {
            subans=dp[n-arr[i]];
          }
          
          else{
              subans=minCoins(n-arr[i],arr,dp);
          }
          
          if(subans!=INT_MAX && subans+1<ans)
            ans=subans+1;
        }  
    
    }
    return dp[n]=ans;
}

int main()
{
    int a[3];
    a[0]=7;
    a[1]=5;
    a[2]=1;
    
    int n;
    cin>>n;
    
    int dp[n+1];
    for(int i=0;i<=n;i++)
      dp[i]=-1;
    
    cout<<minCoins(n,a,dp)<<"\n";
    return 0;
}
