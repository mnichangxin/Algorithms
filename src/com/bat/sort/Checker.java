/* 重复值判断  */
package com.bat.sort;

public class Checker {
	public void heapAdjust(int[] A, int parent, int n) {
		int temp = A[parent]; //保存父结点
		int child = 2 * parent + 1; //保存左孩子结点
		
		while (child < n) {
			//判断左孩子是否小于右孩子
			if (child + 1 < n && A[child] < A[child + 1]) {
				child++;
			}
			//判断父结点是否大于孩子结点
			if (temp >= A[child]) {
				break;
			}
			A[parent] = A[child];
			parent = child;
			child = 2 * parent + 1;
		}
		
		A[parent] = temp;
	}
	
	public int[] heapSort(int[] A, int n) {
		//建立初始堆
		for (int i = n / 2; i >= 0; i--) {
			heapAdjust(A, i, n - 1);
		}
		
		//排序
		for (int i = n - 1; i > 0; i--) {
			int temp = A[0];	
			A[0] = A[i];
			A[i] = temp;
			
			heapAdjust(A, 0, i);
		}
		
		return A;
	}
	
	public boolean checkDuplicate(int[] A, int n) {
		A = heapSort(A, n);
		
		for (int i = 1; i < n; i++) {
			if (A[i] == A[i - 1]) {
				return true;
			}
		}
		
		return false;
	}
	
	public static void main(String[] args) {

	}
}
