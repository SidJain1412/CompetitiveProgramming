// Discover the Substring

// strstr is a function that returns 1 if one string is present as substring in another and 0 otherwise. You are to write a program to print the number of times one string is present in the other as a substring.

// Input Format

// Two lines of input consisting of two strings.

// Constraints

// 1 <= length of strings <= 100

// Output Format

// Output one number, the number of times any one string appears in the other.

// Sample Input 0

// banana
// ana
// Sample Output 0

// 2
// Explanation 0

// b(ana)na and ban(ana) so answer is 2

// Sample Input 1

// a
// adamant
// Sample Output 1

// 3
// Explanation 1

// (a)damant, ad(a)mant and adam(a)nt. So answer is 3.

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n;
        String str;
        String findStr;
        str=sc.nextLine();
        findStr=sc.nextLine();
        if(str.length()<findStr.length())
        {
            String temp=str;
            str=findStr;
            findStr=temp;
        }
        // System.out.println(str);
        // System.out.println(findStr);
        int lastIndex=0;
        int count=0;
        while(lastIndex!=-1)
        {
            lastIndex=str.indexOf(findStr,lastIndex);
            if(lastIndex!=-1)
            {
                count++;
                lastIndex++;
            }
        }
        System.out.println(count);
    }
}