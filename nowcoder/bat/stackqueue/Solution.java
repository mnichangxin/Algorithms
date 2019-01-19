/* 实现栈的数据结构 */
package com.bat.stackqueue;

import java.util.Stack;

public class Solution {
	private Stack<Integer> dataStack = new Stack<Integer>(); //数据栈
	private Stack<Integer> minStack = new Stack<Integer>(); //最小栈
	
	public void push(int node) {
		dataStack.push(node);
	
		if (minStack.empty() || minStack.peek() >= node) {
			minStack.push(node);
		}
	}
	
	public void pop() {
		if (dataStack.empty()) {
			throw new RuntimeException("Stack is empty!");
		}
		if (dataStack.peek() == minStack.peek()) {
			minStack.pop();
		}
		
		dataStack.pop();
	}
	
	public int top() {
		return dataStack.peek();
	}
	
	public int min() {
		if (minStack.empty()) {
			throw new RuntimeException("Stack is empty!");
		}
		
		return minStack.peek();
	}
	
	public static void main(String[] args) {

	}
}
