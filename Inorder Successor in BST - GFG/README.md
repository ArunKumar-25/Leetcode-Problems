# Inorder Successor in BST
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a BST, and a reference to a Node x in the BST. Find the Inorder Successor of the given node in the BST.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
&nbsp;     2</strong>
&nbsp;   /   \
<strong>   </strong>1     3
K(data of x) = 2
<strong>Output: </strong>3 
<strong>Explanation:</strong> 
Inorder traversal : 1 2 3 
Hence, inorder successor of 2 is 3.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong><strong>            </strong> 20
&nbsp;           /   \
&nbsp;          8<strong>     </strong>22
&nbsp;         / \
&nbsp;        4   12
&nbsp;           /<strong>  </strong>\
&nbsp;          10   14
K(data of x) = 8
<strong>Output: </strong>10<strong>
Explanation:
</strong>Inorder traversal: 4 8 10 12 14 20 22
Hence, successor of 8 is 10.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size:18px">&nbsp;<strong>inOrderSuccessor()</strong>. This function takes the root node and the reference node as argument and returns the node that is inOrder successor of&nbsp;the reference node. If there is no successor, return null value.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(Height of the BST).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000, where N is number of nodes</span></p>
 <p></p>
            </div>