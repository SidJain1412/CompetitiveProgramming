# 5. Strongest Neighbour
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>arr</strong>[] of <strong>n</strong> positive integers. The task is to find the maximum for every adjacent pairs in the array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 6
arr[] = {1,2,2,3,4,5}
<strong>Output: </strong>2 2 3 4 5<strong>
Explanation: </strong>Maximum of arr[0] and arr[1]
is 2, that of arr[1] and arr[2] is 2, ...
and so on. For last two elements, maximum 
is 5.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 2
arr[] = {5, 5}
<strong>Output: </strong>5<strong>
Explanation: </strong>We only have two elements 
so max of 5 and 5 is 5 only.</span></pre>

<p><span style="font-size:18px"><strong>Your&nbsp;Task:</strong><br>
The task is to complete the function <strong>maximumAdjacent</strong>(), which takes <strong>sizeOfArray (n) </strong>and<strong> array(arr) </strong>as<strong> </strong>parameters and <strong>prints </strong>the <strong>maximum </strong>of all adjacent pairs (space separated).</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 &lt;= n &lt;= 10<sup>6</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>6</sup></span></p>
 <p></p>
            </div>