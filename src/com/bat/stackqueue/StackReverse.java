/* 栈的逆序 */
package com.bat.stackqueue;

public class StackReverse {
	public int[] reverseStack(int[] A, int n) {
		if (A == null || n < 2) {
			return A;
		}
		
		int popStack = A[0];
		
		for (int i = 1; i < n; i++) {
			A[i - 1] = A[i];
		}
		
		reverseStack(A, n - 1);
		
		A[n - 1] = popStack;
		
		return A;
	}
	
	public static void main(String[] args) {
		
	}
}
