// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element){
        //Your code here
        int temp;
        for(int i=0;i<sizeOfArray;i++){
            if(i==index){
                temp = arr[i];
                arr[i] = element;
            }
        }
        int temp2;
        for(int i=index+1;i<sizeOfArray;i++){
            swap(arr[i],temp);
        }
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        
        int sizeOfArray; 
        
        //input size of Array
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        //input elements in the Array
        for(int i = 0; i < sizeOfArray-1; i++)
        cin>>arr[i];
        
        int index;
        //input index
        cin>>index;
        int element;
        //input element
        cin>>element;
        Solution obj;
        //calling insertAtIndex() function
        obj.insertAtIndex(arr, sizeOfArray, index, element); //Complete this function
        
        for(int i = 0; i < sizeOfArray; i++)//Printing the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends