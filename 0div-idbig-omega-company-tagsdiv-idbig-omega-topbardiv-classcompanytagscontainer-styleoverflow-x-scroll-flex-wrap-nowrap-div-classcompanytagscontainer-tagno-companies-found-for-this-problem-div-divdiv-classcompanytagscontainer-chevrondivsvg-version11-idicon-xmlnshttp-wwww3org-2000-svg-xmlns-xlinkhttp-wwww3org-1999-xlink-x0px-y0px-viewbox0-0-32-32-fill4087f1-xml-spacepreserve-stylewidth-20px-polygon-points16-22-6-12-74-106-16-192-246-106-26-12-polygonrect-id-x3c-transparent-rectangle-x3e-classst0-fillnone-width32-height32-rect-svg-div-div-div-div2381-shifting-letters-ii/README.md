<h2><a href="https://leetcode.com/problems/shifting-letters-ii/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2381. Shifting Letters II</a></h2><h3>Medium</h3><hr><div><p>You are given a string <code>s</code> of lowercase English letters and a 2D integer array <code>shifts</code> where <code>shifts[i] = [start<sub>i</sub>, end<sub>i</sub>, direction<sub>i</sub>]</code>. For every <code>i</code>, <strong>shift</strong> the characters in <code>s</code> from the index <code>start<sub>i</sub></code> to the index <code>end<sub>i</sub></code> (<strong>inclusive</strong>) forward if <code>direction<sub>i</sub> = 1</code>, or shift the characters backward if <code>direction<sub>i</sub> = 0</code>.</p>

<p>Shifting a character <strong>forward</strong> means replacing it with the <strong>next</strong> letter in the alphabet (wrapping around so that <code>'z'</code> becomes <code>'a'</code>). Similarly, shifting a character <strong>backward</strong> means replacing it with the <strong>previous</strong> letter in the alphabet (wrapping around so that <code>'a'</code> becomes <code>'z'</code>).</p>

<p>Return <em>the final string after all such shifts to </em><code>s</code><em> are applied</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "abc", shifts = [[0,1,0],[1,2,1],[0,2,1]]
<strong>Output:</strong> "ace"
<strong>Explanation:</strong> Firstly, shift the characters from index 0 to index 1 backward. Now s = "zac".
Secondly, shift the characters from index 1 to index 2 forward. Now s = "zbd".
Finally, shift the characters from index 0 to index 2 forward. Now s = "ace".</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "dztz", shifts = [[0,0,0],[1,1,1]]
<strong>Output:</strong> "catz"
<strong>Explanation:</strong> Firstly, shift the characters from index 0 to index 0 backward. Now s = "cztz".
Finally, shift the characters from index 1 to index 1 forward. Now s = "catz".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length, shifts.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>shifts[i].length == 3</code></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt; s.length</code></li>
	<li><code>0 &lt;= direction<sub>i</sub> &lt;= 1</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>
</div>