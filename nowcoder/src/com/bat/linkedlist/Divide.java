/* 链表的分化 */
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

public class Divide {
	public ListNode listDivide(ListNode head, int val) {
		ListNode sH = null;
        ListNode sT = null;
        ListNode bH = null;
        ListNode bT = null;
        ListNode next = null;
        
        while (head != null) {
            next = head.next;
            head.next = null;
            
            if (head.val <= val) {
                if (sH == null) {
                    sH = head;
                    sT = head;
                } else {
                    sT.next = head;
                    sT = head;
                }
            } else {
                if (bH == null) {
                    bH = head;
                    bT = head;
                } else {
                    bT.next = head;
                    bT = head;
                }
            }
            
            head = next;
        }
        
        if (sT != null) {
            sT.next = bH;
        }
        
        return sH != null ? sH : bH;
	}
	
	public static void main(String[] args) {
	}
}