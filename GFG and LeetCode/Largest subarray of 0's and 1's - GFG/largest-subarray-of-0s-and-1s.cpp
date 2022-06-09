// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        
        int sum = 0, ans = 0;
       unordered_map<int, int> map;
       map[0] = -1;
       for(int i = 0; i < N; i++){
           if(arr[i] == 0) arr[i] = -1;
           sum += arr[i];
           if(map.count(sum)){
               ans = max(ans, i-map[sum]);
           }
           else map[sum] = i;
       }
       return ans;
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends