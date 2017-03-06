package com.bat.linkedlist;

import javax.xml.soap.Node;

/*
class ListNode {
	int val;
	ListNode next = null;
	
	ListNode(int val) {
		this.val = val;
	}
}
*/

public class Divide {
	public ListNode listDivide(ListNode head, int val) {
		if (head == null) {
			return null;
		}
		
		ListNode p = head;
		
		while (p!= null) {
			if (p.val < val) {
				 
			} else if (p.val > val) {
				
			} else {
				
			}
		}
	}
	
	public static void main(String[] args) {
	}
}
