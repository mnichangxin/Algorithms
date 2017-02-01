/* 拓扑结构相同子树 */
package com.nowcoder.string;

import java.util.Stack;

//二叉树
class TreeNode {
	int val = 0;
	
	TreeNode left = null;
	TreeNode right = null;
	
	public TreeNode(int val) {
		this.val = val;
	}
}

public class IdenticalTree {
    public boolean chkIdentical(TreeNode A, TreeNode B) {
        String strA = serialize(A);
        String strB = serialize(B);
        
        int[] next = getNext(strB);
        char[] strAArray = strA.toCharArray();
        char[] strBArray = strB.toCharArray();

        int j = 0;
        int i = 0;
        
        while (i < strAArray.length && j<strBArray.length) {
            if(j == -1 || strAArray[i] == strBArray[j]) {
                i++;
                j++;
            } else {
                j = next[j];
            }
        }
        if(j == strBArray.length) {
            return true;
        } else {
            return false;
        }
    }
 
    //二叉树的
    public String serialize(TreeNode root) {
        if(root == null) {
            return null;
        }
        
        StringBuilder str = new StringBuilder("");
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode node = root;
        
        while(node != null || stack.size() > 0) {
            while(node != null) {
                str.append(node.val).append("!");
                stack.push(node);
                node = node.left;
            }
            
            str.append("#!");
        
            if(stack.size() > 0) {
                node = stack.pop();
                node = node.right;
 
            }
        }
        
        str.append("#!");
        
        return str.toString();
    }
 
    public int[] getNext(String str) {
        int[] next = new int[str.length()];
        char[] strArray = str.toCharArray();
        int k = -1;
        int j = 0;
        
        next[0] = -1;
        
        while(j < strArray.length - 1) {
            if(k == -1 || strArray[k] == strArray[j]) {
                k++;
                j++;
                if(strArray[k] != strArray[j]) {
                    next[j] = k;
                } else {
                    next[j] = next[k];
                }
            } else {
                k = next[k];
            }
        }
        
        return next;
    }
}