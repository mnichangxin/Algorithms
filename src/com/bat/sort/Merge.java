package com.bat.sort;

import java.util.Arrays;

public class Merge {
	public int[] mergeAB(int[] A, int[] B, int n, int m) {
		A = Arrays.copyOf(A, m + n);
		
		int i = n - 1;
		int j = m - 1;
		int k = m + n - 1;
		
		//同时遍历
		while (i >= 0 && j >= 0) {
			if (A[i] > B[j]) {
				A[k--] = A[i--];
			} else {
				A[k--] = B[j--];
			}
		}
		
		//遍历A剩余的部分
		while (i >= 0) {
			A[k--] = A[i--];
		}
		
		//遍历B剩余的部分
		while (j >= 0) {
			A[k--] = B[j--];
		}
		
		return A;
	} 
	
	public static void main(String[] args) {
		int[] C = new Merge().mergeAB(new int[] {1, 3, 5, 9, 10} , new int[] {2, 4, 6, 8, 13}, 5, 5);
	
		for (int i= 0; i < C.length; i++) {
			System.out.println(C[i]);
		}
	}
}
