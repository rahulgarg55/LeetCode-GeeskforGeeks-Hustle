# Print Pattern
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Print a sequence of numbers starting with <strong>N</strong>&nbsp;where A[0] = N, <strong><em>without using loop</em></strong>, in which&nbsp; A[i+1] = A[i] - 5,&nbsp; until A[i] &gt; 0.&nbsp;After that&nbsp;A[i+1] = A[i] + 5&nbsp; repeat it until A[i] = N.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 16
<strong>Output:</strong> 16 11 6 1 -4 1 6 11 16
<strong>Explaination:</strong> The value decreases until it 
is greater than 0. After that it increases 
and stops when it becomes 16 again.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 10
<strong>Output:</strong> 10 5 0 5 10
<strong>Explaination:</strong> It follows the same logic as 
per the above example.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>pattern()</strong> which takes N as input parameters and returns a list containing the pattern.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>4</sup>&nbsp;</span></p>
</div>