<h2><a href="https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2980. Check if Bitwise OR Has Trailing Zeros</a></h2><h3>Easy</h3><hr><div><p>You are given an array of <strong>positive</strong> integers <code>nums</code>.</p>

<p>You have to check if it is possible to select <strong>two or more</strong> elements in the array such that the bitwise <code>OR</code> of the selected elements has <strong>at least </strong>one trailing zero in its binary representation.</p>

<p>For example, the binary representation of <code>5</code>, which is <code>"101"</code>, does not have any trailing zeros, whereas the binary representation of <code>4</code>, which is <code>"100"</code>, has two trailing zeros.</p>

<p>Return <code>true</code> <em>if it is possible to select two or more elements whose bitwise</em> <code>OR</code> <em>has trailing zeros, return</em> <code>false</code> <em>otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4,5]
<strong>Output:</strong> true
<strong>Explanation:</strong> If we select the elements 2 and 4, their bitwise OR is 6, which has the binary representation "110" with one trailing zero.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,4,8,16]
<strong>Output:</strong> true
<strong>Explanation: </strong>If we select the elements 2 and 4, their bitwise OR is 6, which has the binary representation "110" with one trailing zero.
Other possible ways to select elements to have trailing zeroes in the binary representation of their bitwise OR are: (2, 8), (2, 16), (4, 8), (4, 16), (8, 16), (2, 4, 8), (2, 4, 16), (2, 8, 16), (4, 8, 16), and (2, 4, 8, 16).
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,7,9]
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no possible way to select two or more elements to have trailing zeros in the binary representation of their bitwise OR.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>