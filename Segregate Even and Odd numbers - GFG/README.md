# Segregate Even and Odd numbers
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>Arr[]</strong>, write a program that segregates <strong>even </strong>and <strong>odd </strong>numbers. The program should put all even numbers first in sorted order, and then odd numbers in sorted order.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 7
Arr[] = {12, 34, 45, 9, 8, 90, 3}
<strong>Output:</strong> 8 12 34 90 3 9 45
<strong>Explanation:</strong> Even numbers are 12, 34,
8 and 90. Rest are odd numbers. After
sorting even numbers 8 12 34 90 and 
after sorting odd numbers 3 9 45. Then
concat both.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 5
Arr[] = {0, 1, 2, 3, 4}
<strong>Output:</strong> 0 2 4 1 3
<strong>Explanation:</strong> 0 2 4 are even and 1 3
are odd numbers.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>segregateEvenOdd</strong><strong>()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr[]</strong><strong>&nbsp;</strong>and <strong>n&nbsp;</strong>as parameters and returns void. You need to modify the array itself.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N log(N))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ Arr[i] &lt;=10<sup>5</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>