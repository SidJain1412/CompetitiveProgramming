/* Tower of Hanoi is a mathematical puzzle whit three rods and n number of disks.

 The objective of this puzzle is to move the entire stack from one rod to another rod 
 with the help of the third rod. 
 
 These are the following simple rules of the puzzle:

1. We can only move one disk at a time.

2. We can only move the upper most disk from one of the stacks and placing it on top of another stack.

3. Disks should be placed in ascending order i.e. uppermost most disk should be the smallest and 
the lowermost should be the largest disk.

OUTPUT:

(If we take number of disks 3 then the output of the program will be following: )

Enter the number of disk:3 
A to C
A to B
C to B
A to C
B to A
B to C
A to C

(If we take number of disks 2 then the output of the program will be following: )

Enter the number of disk:2
A to B
A to C
B to C
*/

#include <stdio.h>
#include <stdlib.h>
void TOH(int n,char A,char B,char C)
{
	if(n==1)
	{
		printf("%c to %c\n",A,C); //if the number of disk is one in that case we can directly move the disk from A to C
	}
	else
    /* if the number of disks is greater than one in that case, we will 1st move the (n-1) Disks from rod A to rod B with
            the help of the Rod C then we will move the remaining one disk from rod A to rod C then finally we will move 
            (n-1) disks from rod B to rod C */
	{

		TOH(n-1,A,C,B); //recursive call
		TOH(1,A,B,C);
		TOH(n-1,B,A,C);
	}
}
int main(void)
{
	int n;
	char c1 = 'A', c2 ='B', c3 = 'C';
	printf("Enter the number of disk:");
	scanf("%d",&n);
	TOH(n,c1,c2,c3);
	return 0;
}