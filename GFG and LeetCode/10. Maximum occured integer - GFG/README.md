# 10. Maximum occured integer
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given <strong>n</strong>&nbsp;integer ranges, the task is to find the maximum occurring integer in these ranges. If more than one such integer exits, find the smallest one. The ranges are given as two arrays <strong>L</strong>[] and <strong>R</strong>[].&nbsp; L[i] consists of starting point of range and R[i] consists of corresponding end point of the range. </span></p>

<p><span style="font-size:18px">For example consider the following ranges.<br>
L[] = {2, 1, 3}, R[] = {5, 3, 9)<br>
Ranges represented by above arrays are.<br>
[2, 5] = {2, <strong>3</strong>, 4, 5}<br>
[1, 3] = {1, 2, <strong>3</strong>}<br>
[3, 9] = {<strong>3</strong>, 4, 5, 6, 7, 8, 9}<br>
The maximum occurred integer in these ranges is 3.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 4
L[] = {1,4,3,1}
R[] = {15,8,5,4}
<strong>Output: </strong>4<strong>
Explanation: </strong>The given ranges are [1,15]
 [4, 8] [3, 5] [1, 4]. The number that 
is most common or appears most times in 
the ranges is 4.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 5
L[] = {1,5,9,13,21}
R[] = {15,8,12,20,30}
<strong>Output: </strong>5<strong>
Explanation: </strong>The given ranges are 
[1,15] [5, 8] [9, 12] [13, 20] 
[21, 30]. The number that is most 
common or appears most times in 
the ranges is 5.</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>maxOccured</strong>() which returns the maximum occured integer in all ranges.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n+maxx).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(maxx).<br>
-maxx is maximum element in R[]</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n ≤ 10<sup>6</sup><br>
0 ≤ L[i], R[i] ≤ 10<sup>6</sup></span></p>
 <p></p>
            </div>