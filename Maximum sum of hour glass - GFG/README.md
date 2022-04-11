# Maximum sum of hour glass
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two integers N, M and a 2D matrix Mat of dimensions NxM, the task is to find the maximum sum of<br>
an hourglass.<br>
An hourglass is made of 7 cells in the following form.<br>
&nbsp;&nbsp;&nbsp; A B C<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; D<br>
&nbsp;&nbsp;&nbsp; E F G</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3,M=3
Mat=[[1,2,3],[4,5,6],[7,8,9]]
<strong>Output:</strong>
35
<strong>Explanation:</strong>
There is only one hour glass which is
1 2 3
   5
7 8 9 and its sum is 35.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=2,M=3
Mat=[[1,2,3],[4,5,6]]
<strong>Output:</strong>
-1
<strong>Explanation:</strong>
There are no hour glasses in this matrix.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>findMaxSum()</strong> which takes the two integers N, M, and the 2D matrix Mat as input parameters and returns the maximum sum of an hourglass in the matrix. If there are no hourglasses, it returns -1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(N*M)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N,M,Mat[i][j]&lt;=1000&nbsp;</span></p>
 <p></p>
            </div>