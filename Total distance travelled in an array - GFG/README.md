# Total distance travelled in an array
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an array <strong>arr[]</strong> of size <strong>N</strong>.<br>
The array&nbsp;consists of a permutation of the set<strong> {1, 2, 3, … , N} </strong>for some positive integer N. You have to start at the position which has <strong>1</strong> in the array and then travel to the position which has <strong>2</strong>. Then from <strong>2</strong>, you travel to <strong>3</strong> and so on till you reach the position which has <strong>N</strong>.<br>
When you travel from <strong>Arr[i]</strong> to <strong>Arr[j]</strong>, the <strong>distance travelled is | i– j |</strong>.<br>
Find the total distance you have to travel to reach <strong>N</strong> when you start from <strong>1</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
Arr[] = {5, 1, 4, 3, 2}
<strong>Output:</strong> 7
<strong>Explanation:</strong> The numbers and their respective 
indices are given below:
1-&gt;1
2-&gt;4
3-&gt;3
4-&gt;2
5-&gt;0
Total distance =|4-1|+|3-4|+|2-3|+|0-2| 
= 3+1+1+2 = 7.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6
Arr[] = {6, 5, 1, 2, 4, 3}
<strong>Output:</strong> 8
<strong>Explanation:</strong>&nbsp;
Total distance = |2-3|+|3-5|+|5-4|+|4-1|+|1-0| 
= 1+2+1+3+1 = 8.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>distance()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr[]</strong>&nbsp;and its size&nbsp;<strong>n&nbsp;</strong>as input parameters and returns the total distance.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>7</sup><br>
1&lt;= Arr<sub>i </sub>&lt;= N</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>