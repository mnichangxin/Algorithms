/* 从头到尾打印链表  */
package com.offer;

import java.util.ArrayList;
import java.util.Stack;

class ListNode {
	int val;
	
	ListNode next = null;
	
	ListNode(int val) {
		this.val = val;
	}
}

public class PrintList {
	public ArrayList<Integer> printListFormTailToHead(ListNode listNode) {
		ArrayList<Integer> array = new ArrayList<Integer>(); 
		Stack<Integer> stack = new Stack<Integer>();
		
		if (listNode == null) {
			return array;
		}
		
		while (listNode.next != null) {
			stack.push(listNode.val);
			listNode = listNode.next;
		}
		
		stack.push(listNode.val);
		
		while (!stack.isEmpty()) {
			array.add(stack.pop());
		}
		
		return array;
	}
	
	public static void main(String[] args) {
	}
}
