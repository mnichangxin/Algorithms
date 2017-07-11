/* 访问单个结点的删除 */
package com.bat.linkedlist;

/*
class ListNode {
	int val;
	ListNode next = null;
	
	ListNode(int val) {
		this.val = val;
	}
}
*/

public class Remove {
	public boolean removeNode(ListNode pNode) {
		if (pNode.next == null) {
			return false;
		}
		
		pNode.val = pNode.next.val;
		pNode.next = pNode.next.next;
		
		return true;
	}
	
	public static void main(String[] args) {	
	}
}
