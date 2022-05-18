# Maximum Integer Value
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a string <strong>S</strong> of digits(0-9).Find the <strong>maximum value</strong> that can be obtained from the string by putting either<strong> '*' or '+' </strong>operators in between the digits while traversing from left to right of the string and picking up a single digit at a time.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>S="01230"
<strong>Output: 
</strong>9
<strong>Explanation: 
</strong>we have 01230.We traverse from 
left and pick zero.Now we encounter '1'. 
We see if 0*1 gives maximum or 0+1.Now we 
have ans=1.Now we traverse further.We 
encounter '2'.Now we see whether 1*2 gives 
max or 1+2.Now we have ans=3.Now we 
traverse further. We encounter'3'.
We see if 3*3 gives max or 3+3.
The ans is now 9.Now we traverse further. 
We encounter 0, we see if 9+0 gives max or 
9*0. The ans is now 9. We've traversed the
whole string so we stop.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
S="891"
<strong>Output:</strong> 
73
<strong>Explanation:
</strong>We start at 8,then go to
9 and see whether 8+9 is greater or
8*9.Now we have 72,we traverse 
forward and check whether 72*1 is 
greater or 72+1.In this way, we get 
the answer as 73.
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>MaximumIntegerValue()&nbsp;</strong>which takes the string&nbsp;S&nbsp;as input parameter&nbsp;and returns the maximum integer value that can be&nbsp;created using given procedures</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |S|&nbsp;&lt;&nbsp;20<br>
S contains only digits from 0 to 9<br>
Leading 0's maybe present.</span></p>
 <p></p>
            </div>