// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k){
        //code here.
    vector<int>v;
    unordered_map<int,int>ump;
    int dist=0;
    for(int i=0;i<k;i++){
        if(ump[arr[i]]==0) dist++;
        ump[arr[i]]++;
    }
    v.push_back(dist);
    
    for(int i=k;i<n;i++){
        if(ump[arr[i-k]]==1){
            dist--;
        }
        ump[arr[i-k]]--;
        if(ump[arr[i]]==0){
            dist++;
        }
        ump[arr[i]]++;
        v.push_back(dist);
    }
    return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends