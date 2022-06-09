// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n){   
        // Your code here
        
        int prefixSum=0;
        int maxi = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];
            if(prefixSum==0){
                maxi = i+1;
            } else if(mp.find(prefixSum)!=mp.end()){
                maxi = max(maxi,i-mp[prefixSum]);
            } else {
                mp[prefixSum]=i;
            }
        }
        return maxi;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends