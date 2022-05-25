# Make the hit in power game !
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">There are two integers (<strong>X&nbsp;and N</strong>).&nbsp;You&nbsp;have to make a number in such a way&nbsp;that it contains the first digit and last digit occurring in <strong>X<sup>1&nbsp;</sup>, X<sup>2&nbsp;</sup>, X<sup>3</sup>, &nbsp;.... X<sup>N</sup></strong>.</span></p>

<p><span style="font-size:18px">For Example: let's take &nbsp;X=12&nbsp;and N=5.<br>
let l is last digit and f is first digit.<br>
12<sup>1 &nbsp;</sup>= 12, the <strong>first </strong>digit of 12 is <strong>1</strong>(f1) and <strong>last&nbsp;</strong>digit is <strong>2</strong> (l1).<br>
12<sup>2</sup>&nbsp;= 144, the <strong>first </strong>digit of 144 is <strong>1</strong> (f2) and <strong>last </strong>digit is <strong>4</strong> (l2).<br>
12<sup>3</sup>&nbsp;= 1728, the <strong>first </strong>digit of 1728&nbsp;is <strong>1</strong> (f3) and <strong>last </strong>digit is <strong>8</strong> &nbsp;(l3).<br>
12<sup>4</sup>&nbsp;= 20736, the <strong>first </strong>digit of 20736&nbsp;is <strong>2&nbsp;</strong>(f4) and <strong>last </strong>digit is <strong>6</strong> (l4).<br>
12<sup>5</sup>&nbsp;= 248832, the <strong>first </strong>digit of 248832&nbsp;is <strong>2</strong>&nbsp;(f5) and <strong>last </strong>digit is <strong>2</strong> (l5).<br>
We made a number in the format f1 l1 f2 l2 f3 l3 f4 l4 f5 l5 .<br>
so number becomes <strong>1214182622</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<strong><span style="font-size:18px">X = </span></strong><span style="font-size:18px">10, <strong>N = </strong>2</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">1010</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">10<sup>1</sup> = 10. So, f1=1 and l1=0</span>
<span style="font-size:18px">10<sup>2</sup> = 100. So, f2=1 and l2=0</span>
<span style="font-size:18px">Therefore, Output is 1010.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<strong><span style="font-size:18px">X = </span></strong><span style="font-size:18px">99, <strong>N = </strong>1</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">99</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">99<sup>1</sup> = 99. So, f1=9 and l1=9</span>
<span style="font-size:18px">Therefore, Output is 99.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>powerGame()</strong> which takes 2 Integers X and N as input and returns the answer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*(Sum of number of digits in X<sup>1</sup>, X<sup>2</sup>..., X<sup>N</sup>))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">10 &lt;= X &lt;= 100</span><br>
<span style="font-size:18px">1 &lt;= N &lt;= 8</span></p>
 <p></p>
            </div>