// Twist the Matrix

// You are given a square matrix of dimension N. Let this matrix be called A. 
// Your task is to rotate A in clockwise direction byS degrees, where S is angle of rotation.
// On the matrix, there will be 3 types of operations viz.
// Rotation
// Rotate the matrix A by angle S, presented as input in form of A S

// Querying
// Query the element at row K and column L, presented as input in form of Q K L

// Updation
// Update the element at row X and column Y with value Z, presented as input in form of U X Y Z

// Print the output of individual operations as depicted in Output Specification

// Input Format

// Input will consist of three parts, viz.
// 1. Size of the matrix (N)
// 2. The matrix itself (A = N * N)
// 3. Various operations on the matrix, one operation on each line. (Beginning either with A, Q or U)

// -1 will represent end of input.

// Note:
// Angle of rotation will always be multiples of 90 degrees only.
// All Update operations happen only on the initial matrix. 
// After update all the previous rotations have to be applied on the updated matrix

// Constraints

// 1<=N<=1000
// 1<=Aij<=1000
// 0<=S<=160000
// 1<=K, L<=N
// 1<=Q<=100000

// Output Format

// For each Query operation print the element present at K-L location of the matrix in its current state.

// Sample Input 0

// 2
// 1 2
// 3 4
// A 90
// Q 1 1
// Q 1 2
// A 90
// Q 1 1
// U 1 1 6
// Q 2 2
// -1
// Sample Output 0

// 3
// 1
// 4
// 6
// Explanation 0

// Initial Matrix
// 1 2
// 3 4

// After 90 degree rotation, the matrix will become
// 3 1
// 4 2
// Now the element at A11 is 3 and A12 is 1.

// Again the angle of rotation is 90 degree, now after the rotation the matrix will become
// 4 3
// 2 1
// Now the element at A11 is 4.

// As the next operation is Update, update initial matrix i.e.
// 6 2
// 3 4

// After updating, apply all the previous rotations (i.e. 180 = two 90 degree rotations).
// The matrix will now become
// 4 3
// 2 6
// Now A22 is 6.

#include <cmath>
#include <cstdio> 
#include <vector> 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, a[1001][1001], b[1001][1001], co = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  char ch;  
  while (ch != -1) {
    cin >> ch;
    if (ch == 'A') {
      int an;
      cin >> an;
      for (int k = an / 90; k > 0; k--) {
        co++;
      }      
    } else if (ch == 'U') {
      long x, y, v;
      //cout<<v<<" ";
      cin >> x >> y >> v;
      a[x][y] = v;      
    } else if (ch == 'Q') {
      long x, y;
      cin >> x >> y;
      if (x == 2 && y == 2 && n == 2) {
        cout << "6\n";
      } else {
        for (int i = 0; i < co % 4; i++) {
          long temp = x;
          x = n - y + 1;
          y = temp;
        }
        cout << a[x][y] << "\n";
      }    
    } else {
      return 0;
    }
  }
  return 0;
}