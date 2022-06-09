// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max1 = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         vector<int> ans;
         
         for(int i=0;i<sizeOfArray;i++){
             if(max1<arr[i]){
                 max2 = max1;
                 max1 = arr[i];
                 
             }
             if(arr[i]>max2&&arr[i]<max1){
                 max2=arr[i];
             }
         }
         ans.push_back(max1);
         if(max2 == max1 or max2==INT_MIN){
             ans.push_back(-1);
         } else{
             ans.push_back(max2);
         }
         
         return ans;
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends