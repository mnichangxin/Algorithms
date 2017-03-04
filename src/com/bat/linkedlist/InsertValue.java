/* 环形链表插值 */
package com.bat.linkedlist;

class ListNode {
	int val;
	ListNode next = null;
	
	ListNode(int val) {
		this.val = val;
	}
}

public class InsertValue {
	public ListNode insert(int[] A, int[] next, int val) {
		if (A == null || A.length == 0) {
			return new ListNode(val);
		}
		
		//构造环形链表
		ListNode head = new ListNode(A[0]); //头结点
		ListNode r = head; //当前指针 
		ListNode p; //新指针
		
		int i = 0;
		
		while (i < next.length - 1) {
			p = new ListNode(A[next[i]]);
			r.next = p;
			r = p;
			
			i++;
		}
		
		r.next = head; //首尾相连

		//插入结点
		ListNode node = new ListNode(val);
		ListNode cur = head;
		
		int j = 0;
		
		while (j < A.length - 1) {
			if (node.val >= cur.val && node.val < cur.next.val) {
				node.next = cur.next;
				cur.next = node;
				
				return head;
			}
			
			cur = cur.next;
			
			j++;
		}
		
		node.next = head;
		cur.next = node;
		
		if (node.val < cur.val) {
			return node;
		} else {
			return head;
		}
	}
	
	public static void main(String[] args) {
		int[] A = new int[]{1, 3, 4, 5, 7};
		int[] next = new int[]{1, 2, 3, 4, 0};
		
		System.out.println(new InsertValue().insert(A, next, 0).next.next.val);
	}
}
