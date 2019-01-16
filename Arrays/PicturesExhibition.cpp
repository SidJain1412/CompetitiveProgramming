/*1. There are n pictures delivered for the new exhibition. The i-th painting has beauty ai. We know that a visitor becomes happy every time he passes from a painting to a more beautiful one.

   We are allowed to arranged pictures in any order. What is the maximum possible number of times the visitor may become happy while passing all pictures from first to last. In other words, we are allowed to rearrange elements of array a in any order. What is the maximum possible number of indices i (1 <= i <= n - 1), such that ai + 1 > ai.

   Input Format

   The first line of the input contains integer n — the number of painting.

   The second line contains the sequence a1, a2, ..., an, where ai means the beauty of the i-th painting.

   Constraints

   1 <= n <= 1000
   1 <= ai <= 1000

   Output Format

   Print one integer — the maximum possible number of neighbouring pairs, such that ai + 1 > ai, after the optimal rearrangement.


   input
   5
   20 30 10 50 40
   output
   4
   input
   4
   200 100 100 200
   output
   2
 */





#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
        int a, k;
        cin >> a;
        int b[a];
        for (int i = 0; i < a; i++) {
                cin >> b[i];
        }
        sort(b, b + a);
        for (int i = 1; i < a; i++) {
                for (int j = i; j < a; j++) {
                        if (b[i-1] < b[j]) {
                                k=b[j];
                                for(int k=j; k>i; k--) {
                                        b[k]=b[k-1];
                                }
                                b[i]=k;
                                break;
                        }
                }
        }
        k=0;
        for (int i = 1; i < a; i++) {
                if (b[i]>b[i-1]) {
                        k++;
                }
        }
        cout<<k;
}
