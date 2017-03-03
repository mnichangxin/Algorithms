/* 桶排序：计数排序 */
package com.bat.sort;

public class CountingSort {
	public int[] countingSort(int[] A, int n) {
		int min = A[0];
		int max = A[0];
		
		//寻找最大值和最小值
		for (int i = 1; i < n; i++) {
			min = Math.min(min, A[i]);
			max = Math.max(max, A[i]);
		}
		
		int[] countA = new int[max - min + 1]; //计数数组
		
		for (int i = 0; i < n; i++) {
			countA[A[i] - min]++;
		}
		
		int index = 0;
		
		for (int i = 0; i < countA.length; i++) {
			while (countA[i]-- > 0) {
				A[index++] = i + min;
			}
		}
		
		return A;
	}
	
	public static void main(String[] args) {

	}
}
