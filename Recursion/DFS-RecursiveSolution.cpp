#include <iostream>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int n=5;
void DFSrecursive(int matrix[5][5], int visit[],int visitTo=0){
    
    cout<<(char)(visitTo+65)<<" "; // prints the letter 
    
    visit[visitTo]=1; // if it has been visited the value in visit will become 1
    
    for(int i=0; i<5; i++){
        if(matrix[visitTo][i] && !visit[i])
            DFSrecursive(matrix,visit,i);
    }
}
int main()
{
  
    int matrix[5][5]={ 
        {0,1,1,0,1}, 
        {1,0,0,1,1},
        {1,0,0,0,1},
        {0,1,0,0,0},
        {1,1,1,0,0} 
        
    };
    
    int visit[5]={0};
    
    DFSrecursive(matrix,visit);
    return 0;
}
