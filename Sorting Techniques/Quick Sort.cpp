// Tisha and her Orange Sorting

// You have seen Tisha and he oranges in the previous question. Her eldest son on the other hand, sees what his mother does and decides to help her sort out the oranges in increasing order of size. He is also quick to realize that they should be following the quicksort algorithm and finds this pseudocode from this Data Structures text book. Assume the oranges are neatly stacked in a row.

// Quicksort Pseudocode :

// Quicksort(arr, l, r) : 
	// if (l < r) : 
		// p = partition(arr, l, r)
		// print(p)
		// print(arr from l to r)
		// Quicksort(arr, l, p - 1)
		// Quicksort(arr, p + 1, r)
// INPUT

// The first line of input is n (1≤n≤100), the number of oranges Tisha plucked from the orchard 
// The second line of input are the diameters of the oranges you just took (positive numbers) each separated by a space. Assume the first orange in the row to be the pivot element each time.

// OUTPUT

// Print the sizes of the oranges in a row after the sorting has been done

// Sample Input 0

// 10
// 2 4 6 8 10 1 3 5 7 9


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1],arr[high]); 
    return (i + 1); 
} 
 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    int i=0;
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
        cout<<pi<<endl;
        // Separately sort elements before 
        // partition and after partition 
        for(i=low;i<high+1;i++)
        {
            cout<<arr[i]<<" ";;
        }
        cout<<endl;
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num,a[1000],k,temp,i;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,num-1);
    return 0;
}