/* 归并排序 */
package com.bat.sort;

public class MergeSort {
	
	public void merge(int[] A, int low, int high) {
		
		int mid = (low + high) / 2;
		
		int l = low;
		int r = mid + 1;
		
		int[] temp = new int[high - low + 1]; 
		int index = 0; 
		
		while(l <= mid && r <= high) {
			if (A[l] <= A[r]) {
				temp[index++] = A[l++];
			} else {
				temp[index++] = A[r++];
			}
		}
		
		while (l <= mid) {
			temp[index++] = A[l++];
		}
		
		while (r <= high) {
			temp[index++] = A[r++]; 
		}
		
		for (int i = 0; i < temp.length; i++) {
			A[low + i] = temp[i];
		}
	}
	
	public void pass(int[] A, int low, int high) {
		if (low == high) {
			return;
		}
		
		int mid = (low + high) / 2;
		
		pass(A, low, mid); 
		pass(A, mid + 1, high); 
		
		merge(A, low, high);
	}
	
	public int[] mergeSort(int[] A, int n) {
		pass(A, 0, n - 1);
		return A;
	}
	
	public static void main(String[] args) {
		
	}
}
