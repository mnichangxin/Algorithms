/* 选择排序 */
package com.nowcoder.sort;

public class SelectionSort {

	public int[] selectionSort(int[] A, int n) {
		
		for (int i = 0; i < n - 1; i++) {
			int temp = 0;
			int index = i; //用来保存最小值的索引
			
			//寻找第i个最小值
			for (int j = i + 1; j < n; j++) {
				if (A[index] > A[j]) {
					index = j;
				}
			}
		
			//将寻找的第i个小的数值放在第i个位置上
			temp = A[index];
			A[index] = A[i];
			A[i] = temp;
		}
		
		return A;
	}
	
	public static void main(String[] args) {

	}
}
