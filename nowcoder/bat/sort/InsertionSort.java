/* 插入排序 */
package com.bat.sort;

public class InsertionSort {
	
	public int[] insertionSort(int[] A, int n) {
		for (int i = 1; i < n; i++) {
			int index = i;
			for (int j = i - 1; j >= 0; j--) {
				if (A[index] < A[j]) {
					int temp = A[index];
					A[index] = A[j];
					A[j] = temp;
					index = j;
				}
			}
		}
		
		return A;
	}
	
	public static void main(String[] args) {
		
	}
}
