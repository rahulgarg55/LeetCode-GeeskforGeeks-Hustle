# C++ 2-D Arrays | Set-2
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given <strong>n*n</strong> spaced integers of a 2-d Array. Task is to set every value in the matrix to 0 if that row or columns contains a 0.</span></p>

<p><span style="font-size:20px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:20px"><strong>â€‹</strong><strong>Input :</strong> a[ ] = {{1,2,3}, {4,0,5},
{0,6,7}} and n = 3
<strong>Output :</strong> 0 0 3 0 0 0 0 0 0</span><span style="font-size:18px">&nbsp;</span><span style="font-size:20px">
<strong>Explanation:</strong>
1 2 3
4 0 5
0 6 7
row = 1 and 2
column = 2 and 3.
will be having 0.
</span></pre>

<p><br>
<span style="font-size:20px"><strong>â€‹Example 2:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input :</strong> a[ ] = {{1,2}, {1,2}} and n = 2 <strong>
Output :</strong>  1 2 1 2 </span></pre>

<p>&nbsp;</p>

<p><span style="font-size:20px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>final_matrix()</strong> that takes 2-d&nbsp;array <strong>(a)</strong>, sizeOfArray <strong>(n)</strong>, and return the final matrix formed after performing the required task. The driver code takes care of the printing.</span></p>

<p><br>
<span style="font-size:20px"><strong>Expected Time Complexity:</strong>&nbsp;O(n<sup>2</sup>).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(n<sup>2</sup>).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=n&lt;=100<br>
0&lt;=a[i][j]&lt;=1000</span></p>
 <p></p>
            </div>