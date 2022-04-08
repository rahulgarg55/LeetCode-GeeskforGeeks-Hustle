# G.F Series
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Siddhant made a special series and named it as G.F Series. The series follows this trend &nbsp;Tn=(Tn-2)2-(Tn-1) &nbsp;in which the first and the second term are 0 and 1 respectively. Help Siddhant to find up to N terms of the series.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 3</span>
<strong><span style="font-size:18px">Output:
</span></strong><span style="font-size:18px">0 1 -1</span>
<strong><span style="font-size:18px">Explanation:
</span></strong><span style="font-size:18px">First-term is given as 0 and the second 
term is 1. So the T3 = (T<sub>3-2</sub>)<sup>2</sup> - (T<sub>3-1</sub>) 
= T<sub>1</sub><sup>2</sup> - T<sub>2</sub> = 0<sup>2</sup> - 1 = -1</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 6</span>
<strong><span style="font-size:18px">Output:
</span></strong><span style="font-size:18px">0 1 -1 2 -1 5  </span>
<strong><span style="font-size:18px">Explanation:
</span></strong><span style="font-size:18px">first term : 0
second term : 1
third term : -1
fourth term = (1)<sup>2</sup> - (-1) = 2
fifth term = (-1)<sup>2</sup> - (2) = 1 - 2 = -1
sixth term = (2)<sup>2</sup> - (-1) = 4 + 1 = 5 </span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong></span><br>
<span style="font-size:18px">You don't need to read input. Your task is to complete the function&nbsp;</span><strong>gfSeries</strong><span style="font-size:18px">()&nbsp;which takes an integer N as an input parameter and print first N term of the series.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>:&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 15</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>