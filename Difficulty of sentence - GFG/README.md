# Difficulty of sentence
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a sentence as a string <strong>S</strong>. Calculate difficulty of a given sentence. </span></p>

<p><span style="font-size:18px">Difficulty of sentence is defined as <strong>5*(number of hard words) + 3*(number of easy words)</strong>. A word in the given string is considered hard if it has 4 consecutive consonants or number of consonants are more than number of vowels. Else the word is easy.<br>
<strong>Note</strong>: uppercase and lowercase characters are same.</span></p>

<p><span style="font-size:18px"><strong>Example</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
S = "Difficulty of sentence"
<strong>Output</strong>:
13
<strong>Explanation</strong>:
2 hard words + 1 easy word</span></pre>

<p><strong><span style="font-size:18px">Example</span></strong></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
S = "I am good"
<strong>Output</strong>:
9
<strong>Explanation</strong>:
3 easy words</span></pre>

<div><span style="font-size:18px"><strong>Your task:</strong></span></div>

<div><span style="font-size:18px">You don't have to read input or print anything. Your task is to complete the functioin <strong>calcDiff() </strong>which takes the string <strong>S</strong> as input and returns the difficulty of the sentence.</span></div>

<div>&nbsp;</div>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(len(s)<br>
<strong>Expected Auxilliary Space</strong> : O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints</strong>:<br>
1&lt;= length( S ) &lt;= 105</span></p>
 <p></p>
            </div>