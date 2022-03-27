# Juggler Sequence
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Juggler Sequence is a series of integers&nbsp;in which the first term starts with a positive integer number&nbsp;<em>a</em>&nbsp;and the remaining terms are generated from the immediate previous term using the below recurrence relation:<br>
<br>
<img alt=" a_(k+1)={|_a_k^(1/2)_|   for even a_k; |_a_k^(3/2)_|   for odd a_k, " src="http://mathworld.wolfram.com/images/equations/JugglerSequence/NumberedEquation1.gif" style="height:80px; width:220px" class="img-responsive"><br>
<br>
Given a number N, find the&nbsp;Juggler Sequence for this number as the first term of the sequence.</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 9
<strong>Output:</strong> 9 27 140 11 36 6 2 1
<strong>Explaination:</strong> We start with 9 and use 
above formula to get next terms.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 6
<strong>Output:</strong> 6 2 1
<strong>Explaination:</strong> 
6<sup>1/2</sup> = 2. 
2<sup>1/2</sup> = 1.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your Task is to complete the function<strong> jugglerSequence()</strong> which takes N as input parameter and returns a list of integers denoting&nbsp;the generated sequence.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N</span><span style="font-size:18px">)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 100</span></p>
 <p></p>
            </div>