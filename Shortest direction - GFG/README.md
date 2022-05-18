# Shortest direction
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">A person wants to go from origin to a particular location, he can move in only 4 directions(i.e East, West, North, South) but his friend gave him a long route, help a person to find <strong>minimum Moves</strong> so that he can reach to the destination.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong>&nbsp;You need to print the lexicographically sorted string. Assume the string will have only ‘E’ ‘N’ ‘S’ ‘W’ characters.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "SSSNEEEW"
<strong>Output:</strong> EESS
<strong>Explanation</strong>: Following the path SSSNEEEW
and EESS gets you at the same final point.
There's no shorter path possible.</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "NESNWES"
<strong>Output:</strong> E
<strong>Explanation</strong>: Following the path NESNWES
and E gets you at the same final point.
There's no shorter path possible.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>shortestPath()&nbsp;</strong>which takes the string S as input and returns the resultant string denoting the shortest path in lexicographic order.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|) for output.</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=|S|&lt;=10<sup>5</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>