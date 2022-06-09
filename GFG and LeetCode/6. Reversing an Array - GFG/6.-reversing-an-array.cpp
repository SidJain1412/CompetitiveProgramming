// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// This function should reverse contents of
// arr[0..sizeOfArray-1]
void arrayReversal(int arr[],int sizeOfArray) 
{
   //Write your code here
//   
    int low  = 0, high = sizeOfArray-1;
    
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

// { Driver Code Starts.

int main() 
{
	int testcases;
	cin>>testcases; //testcases
	while(testcases--)
	{
	    int sizeOfArray; //size of the array
	    cin>>sizeOfArray;
	    int arr[sizeOfArray]; //array is declared with size as sizeOfArray
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i]; //inputting the elements of the array
	    
	    arrayReversal(arr,sizeOfArray); //calling the reversal function
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cout<<arr[i]<<" "; //printing the array
	    
	    cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends