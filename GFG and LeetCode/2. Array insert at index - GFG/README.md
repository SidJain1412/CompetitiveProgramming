# 2. Array insert at index
## Easy
<div class="problem-statement">
                <p></p><p><em><span style="font-size:18px">Insertion is a basic but frequently used operation. Arrays in most languages cannnot be dynamically shrinked or expanded. Here, we will work with such arrays and try to insert an element at some index.</span></em></p>

<p><span style="font-size:18px">You are given an array <strong>arr</strong>(0-based index). The size of the array is given by <strong>sizeOfArray</strong>. You need to <strong>insert </strong>an <strong>element </strong>at given <strong>index </strong>and print the <strong>modified </strong>array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>sizeOfArray = 6
arr[] = {1, 2, 3, 4, 5}
index = 5, element = 90
<strong>Output: </strong>1 2 3 4 5 90<strong>
Explanation: </strong>90 is&nbsp;inserted at index
5(0-based indexing). After inserting,
array elements are like
1, 2, 3, 4, 5, 90.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>sizeOfArray = 6
arr[] = {1, 2, 3, 4, 5}
index = 2, element = 90
<strong>Output: </strong>1 2 90 3 4 5<strong>
Explanation: </strong>90 is&nbsp;inserted at index 
2(0-based indexing). After inserting,
array elements are like 
1, 2, 90, 3, 4, 5.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything.. The input is already taken care of by the driver code. You only need to complete the function <strong>insertAtIndex() </strong>that takes <em>arr</em><strong>, </strong><em>sizeOfArray</em><strong>, </strong><em>index</em><strong>, </strong><em>element</em> as input and modifies the array <em>arr&nbsp;</em>as per requirements. The <strong>printing </strong>is done by <strong>driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">2 &lt;= sizeOfArray &lt;= 10000<br>
0 &lt;= element, arr<sub>i </sub>&lt;= 10<sup>6</sup><br>
0 &lt;= index &lt;= sizeOfArray-1</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>