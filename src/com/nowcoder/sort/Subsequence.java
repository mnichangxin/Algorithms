/* 最短子数组 */
package com.nowcoder.sort;

public class Subsequence {
	public int shortestSubsequence(int[] A, int n) {
		int max = A[0];
		int min = A[n - 1];
		
		int left = 0;
		int right = 0;
		
		for (int i = 0; i < n; i++) {
			if (A[i] >= max) {
				max = A[i];
			} else {
				left = i;
			}
			System.out.println("left: " + left);
		}
		
		for (int j = n - 1; j >= 0; j--) {
			if (A[j] <= min) {
				min = A[j];
			} else {
				right = j;
			}
			System.out.println("right: " + right);
		}
		
		if (left == right) {
			return 0;
		} else {
			return (left - right + 1);
		}
	}
	
	public static void main(String[] args) {
		
	}
}