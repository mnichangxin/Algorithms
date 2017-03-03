package com.nowcoder.one;

import java.util.ArrayList;
import java.util.LinkedList;

class TreeNode {
	int val = 0;
	TreeNode left = null;
	TreeNode right = null;
	
	public TreeNode(int val) {
		this.val += val;
	}
}

public class TreePrinter {
	
	public int [][] printTree(TreeNode root) {
		
		if(root == null) {
        	return null;
        }
        
        LinkedList<TreeNode> queue = new LinkedList<TreeNode>();
        ArrayList<Integer> arr = new ArrayList<Integer>(); 
        ArrayList<ArrayList<Integer>> layer = new ArrayList<ArrayList<Integer>>();
        
        TreeNode last = root;
        TreeNode nlast = null;
        
        queue.add(root);
        
        while(!queue.isEmpty()) {
            TreeNode tem = queue.poll(); //���ӣ���������ӽ�ȥ
            arr.add(tem.val);
            
            if(tem.left!=null) {
                queue.add(tem.left); //ÿ���һ���ڵ㣬�͸���nlast
                nlast = tem.left;
            }
            if(tem.right!=null) {
                queue.add(tem.right);
                nlast = tem.right;
            }
            if(tem == last) { //last����ʱ������lastΪlast���ҽڵ㣬Ҳ�������µ�nlast
                layer.add(arr);
                arr = new ArrayList<Integer>();
                last = nlast;
            }
        }
        
        int[][] num = new int[layer.size()][];
        
        for(int i=0; i < layer.size(); i++) {
            num[i] = new int[layer.get(i).size()]; //���鸳ֵǰҪȷ������ 
            
            for(int j=0; j<layer.get(i).size(); j++) {
                num[i][j] = layer.get(i).get(j);
            }
        }
        
        return num;
	}
	
	public static void main(String[] args) {

	}

}

