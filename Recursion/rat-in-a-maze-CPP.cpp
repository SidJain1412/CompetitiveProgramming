/*Solution to the Rat in a maze problem by recursion in CPP.

Problem- In this problem, there is a given maze . The source and the destination location is top-left cell and bottom right cell respectively.
Some cells are valid to move and some cells are blocked. If one rat starts moving from start vertex to destination vertex, we have to find 
that is there any way to complete the path, if it is possible then mark the correct path for the rat.
The maze is given using a matrix, where it is marked with 0, it is a valid path, otherwise X for a blocked cell.
NOTE: The rat can only move in two directions, either to the right or to the down.
*/

//Solution:

#include<iostream>
using namespace std;

bool RatInMaze(char maze[][100],int sol[100][100],int i,int j,int n,int m){
    // Base case
    if(i==n-1 && j==m-1){
        // Print the path
        sol[i][j] = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<sol[i][j]<<' ';
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }

    sol[i][j] = 1;

    // Check right
    if(j+1<m && maze[i][j+1]!='X'){
        bool right = RatInMaze(maze,sol,i,j+1,n,m);
        if(right == true){
            return true;
        }
    }

    // Check down
    if(i+1<n && maze[i+1][j]!='X'){
        bool down = RatInMaze(maze,sol,i+1,j,n,m);
        if(down){
            return true;
        }
    }

    sol[i][j] = 0;
    return false;
}


char maze[100][100];
int sol[100][100]={0};
int main(){
       int n,m;
       string str;
       cout << "Enter maze length: ";
       cin >> m;
       cout << "Enter maze breadth: ";
       cin >> n;
       for(int i=0;i<n;i++){
	       cout << "Enter maze row(Should be equal to maze-breadth): ";
	       cin >> str;
           for(int j=0;j<str.length();j++){
               maze[i][j] = str[j];
           }
       }
   
    /* char maze[5][5]={
        "0000",
        "00XX",
        "0000",
        "XX00"
    };
    */
    
    RatInMaze(maze,sol,0,0,n,m);


    return 0;
}
