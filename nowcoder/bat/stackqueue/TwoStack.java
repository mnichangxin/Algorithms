/* 双栈队列 */
package com.bat.stackqueue;

import java.util.Stack;

class Queue {
	private Stack<Integer> pushStack = new Stack<Integer>();
	private Stack<Integer> popStack = new Stack<Integer>();
	
	public void push(int node) {
		pushStack.push(node);
	}
	
	public int pop() {
		if (!popStack.isEmpty()) {
			return popStack.pop(); 
		}
		
		while (!pushStack.isEmpty()) {
			popStack.push(pushStack.pop()); //pushStack倒入popStack，关键:保证pushStack为空！
		}
		
		return popStack.pop();
	}
}

public class TwoStack {
	public int[] twoStack(int[] ope, int n) {
		Queue q = new Queue();
		
		int j = 0;
		int k = 0;
		
		for (int i = 0; i < ope.length; i++) {
			if (ope[i] == 0) {
				j++;
			}
		}
		
		int[] arr = new int[j];
		
		for (int i = 0; i < ope.length; i++) {
			if (ope[i] > 0) {
				q.push(ope[i]);
			} else {
				arr[k++] = q.pop();
			}
		}		
		
		return arr;
	}
	
	public static void main(String[] args) {
	
	}
}