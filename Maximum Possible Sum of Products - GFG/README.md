# Maximum Possible Sum of Products
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:20px">You will be given two arrays A and B of positive integers. The number of values in both the arrays will be the same say&nbsp;N. Your task is to find the maximum sum of products of their elements. Each element in A has to be multiplied with exactly one element in B and vice versa such that each element of both the arrays appears exactly once and the sum of product produced is maximum. </span></p>

<p><span style="font-size:20px">if A = {5,1,3,4,2} and B = {8,10,9,7,6} then a possible sum of product is 5*6 + 1*7 + 3*9 + 4*10 + 2*8.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
A[] = {1, 2, 3}
B[] = {4, 5, 1}
<strong>Output:</strong> 24
<strong>Explanation: </strong>5*3 + 4*2 + 1*1 = 24</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
A[] = {1, 2}
B[] = {4, 4}
<strong>Output:</strong> 12
</span><span style="font-size:18px"><strong>Explanation:</strong> 4*2 + 4*1 = 12</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>MaxSum()</strong>&nbsp;which takes the array<strong> A[], B[],</strong>&nbsp;and&nbsp;<strong>N</strong><strong>&nbsp;</strong>as inputs and returns the answer.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(N</span><span style="font-size:15px">&nbsp;* <span style="font-size:18px">log N</span></span><span style="font-size:18px">)</span><br>
<span style="font-size:18px"><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup></span><br>
<span style="font-size:18px">1 ≤ A[i], B[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>