// Square in a Circle

// A square is kept inside a circle. It keeps expanding untill all four of its vertices touch the circumfernce of the circle. Another smaller circle is kept inside the square now and it keeps expanding untill its circumference touches all four sides of the square. The outer and the inner circle form a ring. Find the area of this ring.

// Input
// Input consists of multiple test cases. 
// Each test case contains one integer a denoting the side-length of the square between the two circles.

// Output
// Print the area of the ring.

// Sample Input 0

// 3
// 3
// 4
// 5
// Sample Output 0

// 7.068583
// 12.566371
// 19.634954


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int t;
    double a;
    scanf("%d",&t);
    for(int i=1;i<=t;++i)
    {
        scanf("%lf",&a);
        double r1=a/2;
        double c=sqrt(2*a*a);
        double r2=c/2;
        double a=(3.14159265358979323846)*(r2*r2-r1*r1);
        printf("%0.6lf\n",a);
    }
    return 0;
}
