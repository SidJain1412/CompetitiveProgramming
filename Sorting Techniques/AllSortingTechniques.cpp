#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void selectionSort(int arr[], int n)
{
    int i,j,pos;
    int min;
    
    for(i=0;i<n-1;i++)
    {
        min = arr[i];
        pos = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[pos] = temp;
    }
    printArr(arr, n);
}

void bubbleSort(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArr(arr, n);
}

void insertionSort(int arr[], int n)
{
    int i,j, hole,value;
    for(i=1;i<n;i++)
    {
        hole = i;
        value = arr[i];
        while(hole>0 && value<arr[hole-1])
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
    printArr(arr, n);
}

void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 =  r-m;
    int L[n1], R[n2];
    
    for (i=0;i<n1;i++)
        L[i] = arr[l+i];
    for (j=0;j<n2;j++)
        R[j] = arr[m+1+j];
    
    i = 0;
    j = 0;
    k = l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2) 
    { 
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int partition(int arr[], int start, int end)
{
    int i;
    int pivot = arr[end];
    int partitionIndex = start;
    
    for(i=start;i<end;i++)
    {
        if(arr[i]<pivot)
        {
            swap(&arr[i], &arr[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(&arr[partitionIndex], &arr[end]);
    return partitionIndex;
}

void quickSort(int arr[], int start, int end)
{
    if(start<end)
    {
        int partitionIndex = partition(arr, start, end);
        quickSort(arr, start, partitionIndex-1);
        quickSort(arr, partitionIndex+1, end);
    }
}

int main()
{
    cout<<"Hello World"<<endl;
    
    int n=10,i;
    int arr[] = {4,8,2,10,7,9,1,3,5,6};
    cout<<"Init array:"<<endl;
    printArr(arr, n);
    cout<<"Selection sort:"<<endl;
    selectionSort(arr, n);
    cout<<"Bubble sort:"<<endl;
    bubbleSort(arr, n);
    cout<<"Insertion sort:"<<endl;
    insertionSort(arr, n);
    cout<<"Merge sort:"<<endl;
    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    cout<<"Quick sort:"<<endl;
    quickSort(arr, 0, n);
    printArr(arr, n);
    return 0;
}