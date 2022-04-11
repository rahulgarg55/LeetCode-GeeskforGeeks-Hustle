# Sort in specific order
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>A</strong> of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 7
Arr = {1, 2, 3, 5, 4, 7, 10}
<strong>Output:</strong>
7 5 3 1 2 4 10
</span><strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Array elements 7 5 3 1 are odd
and sorted in descending order,
whereas 2 4 10 are even numbers
and sorted in ascending order.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 7
Arr = {0, 4, 5, 3, 7, 2, 1}</span>
<span style="font-size:18px"><strong>Output:</strong>
7 5 3 1 0 2 4</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>leftIndex()</strong>&nbsp;which takes the array <strong>Arr[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and modifies the array <strong>Arr[].</strong></span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N. Log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>6</sup><br>
0 &lt;= A<sub>i </sub>&lt;= 10<sup>18</sup></span></p>
 <p></p>
            </div>