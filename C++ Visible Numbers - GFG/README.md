# C++ Visible Numbers
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of integers having&nbsp;<strong>n </strong>elements, return the numbers that occur more than floor(n/3) times in that array in increasing order. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> arr[] = {1, 2, 1, 3, 1, 2}
<strong>Output:</strong> 1
<strong>Explanation:</strong>
Here we have 3 diffrent type of element 
1, 2 and 3. Now, You can count the frequency 
of all the elements
1 -&gt; 3
2 -&gt; 2
3 -&gt; 1 
So, the only element which have frequency
greater than </span> <span style="font-size:18px"><strong>⌊n/3⌋</strong></span> <span style="font-size:18px">is <strong>{1}</strong>.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> arr[] = {1, 2, 2, 3, 2, 3, 2, 3} <strong>
Output:</strong> 2 3</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>compute()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return the array of the elements that occur more than&nbsp;<strong>⌊n/3⌋</strong> times in increasing order. The driver code automatically returns -1 in case of no elements ocuring more than <strong>⌊n/3⌋ </strong>times.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ A[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>