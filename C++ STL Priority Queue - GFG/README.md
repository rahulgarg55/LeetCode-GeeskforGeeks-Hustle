# C++ STL Priority Queue
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:20px">Implement different operations on Priority Queue .i.e. adding element, removing element, size of priority queue, print the queue and top element of queue.&nbsp;</span></p>

<p><span style="font-size:20px"><strong>Input:</strong><br>
The first line of input contains an integer&nbsp;<strong>T</strong>&nbsp;denoting the no of test&nbsp;cases. For each test case, the first line of input contains an integer&nbsp;<strong>Q</strong>&nbsp;denoting the no of&nbsp;queries followed by&nbsp;<strong>Q</strong>&nbsp;space separated&nbsp;queries.&nbsp;<br>
A query can be of the following types:<br>
1 x (Adding x to the priority queue and print the queue)<br>
2 (Removing the element from the top of the priority&nbsp;queue and printing that element )<br>
3 (Get the element at the top of the priority queue)<br>
4 (Get the size of the priority queue)<br>
5 (Print the priority queue)&nbsp;</span></p>

<p><strong><span style="font-size:18px">Note: In&nbsp;<em><u>each</u></em>&nbsp;case return or print -1 if priority queue is empty</span></strong></p>

<p><span style="font-size:20px"><strong>Output:</strong><br>
For each test case, the output is according to the query&nbsp;<strong>Q</strong>&nbsp;performed&nbsp;and if the priority queue is empty the output is&nbsp;<strong>-1.</strong></span></p>

<p><span style="font-size:20px"><strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=Q&lt;=100</span></p>

<p><span style="font-size:20px"><strong>Example:<br>
Input:</strong><br>
1<br>
8<br>
1 6<br>
1 1<br>
1 7<br>
4<br>
3<br>
2<br>
5<br>
2<br>
<strong>Output:</strong><br>
6<br>
6 1<br>
7 6 1<br>
3<br>
7<br>
7&nbsp;<br>
6 1&nbsp;<br>
6</span></p>

<p><strong><span style="font-size:20px">Explanation:</span></strong><br>
<span style="font-size:20px">1 6 means adding 6 in the queue and printing that, similarly adding 1 and 7 in the queue and printing the queue i.e. 7 6 1. By 4 it returns the size of the queue i.e 3. With 3 as input, it returns the element at the top i.e 7. With 2 it removes the top element i.e 7 from the queue and prints the element i.e. 7. Having 5 as input, it prints the queue i.e. 6 1 and again 2 remove the element and prints that i.e 6.</span></p>
 <p></p>
            </div>