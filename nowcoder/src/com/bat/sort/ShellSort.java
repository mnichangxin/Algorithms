/* 希尔排序 */
package com.bat.sort;

public class ShellSort {
	
	public int[] shellSort(int[] A, int n) {
		int gap = n / 2;
		
		while (gap >= 1) {
			//把距离为gap的元素编为一个组，扫描所有组
			for (int i = gap; i < n; i++) {
				int j;
				int temp = A[i];
				
				//对距离为gap的元素组进行排序
				for (j = i - gap; j >=0 && temp < A[j]; j = j -gap) {
					A[j + gap] = A[j];
				}
				
				A[j + gap] = temp;
			}
			
			gap /= 2;
		}
				
		return A;
	}
	
	public static void main(String[] args) {
		int[] arr = {12, 12, 34, 2, 68, 32, 54, 1, 4, 32};
		
		int[] printArr = new ShellSort().shellSort(arr, arr.length);
	
		for (int i = 0; i < printArr.length; i++) {
			System.out.println(printArr[i]);
		}
	}
}
