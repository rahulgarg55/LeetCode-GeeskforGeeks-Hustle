# No of Carry Operations
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two numbers A and B, the task is to find the number of carry operations required when two numbers are added</span></p>

<p><span style="font-size:18px"><strong>Note: </strong>Both numbers are always of the same length.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
</span><strong><span style="font-size:18px">A = </span></strong><span style="font-size:18px">1234</span>
<span style="font-size:18px"><strong>B = </strong>5678</span>
<span style="font-size:18px"><strong>Output: </strong>
2</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">1234
+
5678
--------
6912
--------
4+8 = 2 and carry 1
carry+3+7 = carry 1
carry+2+6 = 9, carry 0
carry+1+5 = 6</span>

<span style="font-size:18px">So, there are 2 Carry Operations.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
</span><strong><span style="font-size:18px">A = </span></strong><span style="font-size:18px">555</span>
<span style="font-size:18px"><strong>B = </strong>555</span>
<span style="font-size:18px"><strong>Output: </strong>
3</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">555
+
555
--------
1110
--------
5+5 = 0 and carry 1
carry+5+5 = 0 carry 1
carry+5+5 = 0, carry 1</span>

<span style="font-size:18px">So, there are 3 Carry Operations.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>countCarry()</strong> which takes two Integers A and B and returns the answer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= A, B &lt;= 10<sup>18</sup></span></p>
 <p></p>
            </div>