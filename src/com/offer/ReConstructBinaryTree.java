/* 重建二叉树 */
package com.offer;

import java.util.ArrayList;

/* 二叉树 */
class TreeNode {
	int val;
	TreeNode left;
	TreeNode right;
	
	TreeNode(int val) {
		this.val = val;
	}
}

public class ReConstructBinaryTree {
	public TreeNode construct(int[] pre, int startPre, int endPre, int[] in, int startIn, int endIn) {
		int rootValue = pre[startPre]; //根结点值
		
		TreeNode root = new TreeNode(rootValue); //根结点
		
		if (startPre == endPre) {
			return root;
		}
		
		//遍历中序序列，找到根结点索引
		int rootIndex = startIn; //中序序列起始索引
		
		while (rootIndex <= endIn && in[rootIndex] != rootValue) {
			rootIndex++;
		}
		
		int leftLength = rootIndex - startIn;
		
		int leftPreEndIndex = startPre + leftLength;
		
		//构建左子树
		if (leftLength > 0) {
			root.left = construct(pre, startPre + 1, leftPreEndIndex, in, startIn, rootIndex - 1);
		}
		
		//构建右子树
		if (leftLength < endPre - startPre) {
			root.right = construct(pre, leftPreEndIndex + 1, endPre, in, rootIndex + 1, endIn);
		}
		
		return root;
	}
	
	public TreeNode reConstructBinaryTree(int[] pre, int[] in) {
		if (pre == null || in == null) {
			return null;
		}
		
		return construct(pre, 0, pre.length - 1, in, 0 , in.length - 1);
	} 
	
	public static void main(String[] args) {
	}
}