/* 斐波那契数列，非递归方式  */
package com.offer;

public class Fibonacci {
	public long fibonacci(int n) {
		int[] arr = new int[]{0, 1};
		
		if (n < 2) {
			return arr[n];
		}
		
		long fibOne = 1;
		long fibTwo = 0;
		long fibN = 0;
		
		for (int i = 2; i <= n; i++) {
			fibN = fibOne + fibTwo;
			
			fibTwo = fibOne;
			fibOne = fibN;
		}
		
		return fibN;
	}
	
	public static void main(String[] args) {
		System.out.println(new Fibonacci().fibonacci(10));
	}
}
