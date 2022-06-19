# Doubly linked list Insertion at given position
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a doubly-linked list, a&nbsp;position <strong>p,</strong>&nbsp;and an integer <strong>x.</strong> The task is to add a&nbsp;new node with value <strong>x</strong> at the position just after <strong>p<sup>th</sup></strong> node&nbsp;in the doubly linked list.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 2&lt;-&gt;4&lt;-&gt;5
p = 2, x = 6 
<strong>Output: </strong>2 4 5 6<strong>
Explanation: </strong>p = 2, and x = 6. So, 6 is
inserted after p, i.e, at position 3
(0-based indexing).</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
p = 0, x = 44
<strong>Output: </strong>1 44 2 3 4<strong>
Explanation: </strong>p = 0, and x = 44 . So, 44
is inserted after p, i.e, at position 1
(0-based indexing).</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>addNode</strong>() which head reference, position and data to be inserted as the arguments, with no return type.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(N)<br>
<strong>Expected Auxilliary Space</strong> : O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>4</sup><br>
0 &lt;= p &lt; N</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>