// Down to Zero

// You are given Q queries. Each query consists of a single number N. You can perform any of the 2 operations on N in each move:

// 1: If we take 2 integers a and b where N = a x b (a!=1, b!=1), then we can change N = max(a,b)

// 2: Decrease the value of N by 1.

// Determine the minimum number of moves required to reduce the value of N to 0.

// Sample Input
// 2
// 3
// 4

// Sample Output
// 3
// 3

// For test case 1, We only have one option that gives the minimum number of moves.
// Follow 3 -> 2 -> 1 -> 0. Hence, 3 moves.

// For the case 2, we can either go 4 -> 3 -> 2 -> 1 -> 0 or 4 -> 2 -> 1 -> 0. The 2nd option is more optimal. Hence, 3 moves.

int main() 
{
    int max=1000001;
    int i, j, nums[max];
    
    //Initializing the array
    for(i=0;i<max;i++) 
        nums[i] = -1;
    nums[0] = 0;
    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 3;
    
    for(i=0;i<max;i++)
    {
        if(nums[i]==-1 || nums[i]>(nums[i-1]+1))
            nums[i]=nums[i-1]+1;
        for(j=1; j<=i && j*i<max; j++)
            if(nums[j*i]==-1 || (nums[i]+1)<nums[j*i])
                nums[j*i]=nums[i]+1;
    }
    
    int q;
    cin>>q;
    for(i=0; i<q; i++)
    {
        int n;
        cin>>n;
        cout<<nums[n]<< endl;
    }
    return 0;
}