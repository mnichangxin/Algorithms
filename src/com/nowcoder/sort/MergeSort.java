/* 归并排序 */
package com.nowcoder.sort;

public class MergeSort {
	//归并函数
	public void merge(int[] A, int low, int high) {
		
		int mid = (low + high) / 2;
		
		int l = low; //左序列的起始位置
		int r = mid + 1; //右序列起始位置
		
		int[] temp = new int[high - low + 1]; //临时存储的序列
		int index = 0; 
		
		//扫描左序列和右序列并比较
		while(l <= mid && r <= high) {
			if (A[l] <= A[r]) {
				temp[index++] = A[l++];
			} else {
				temp[index++] = A[r++];
			}
		}
		
		//左序列没扫描的部分
		while (l <= mid) {
			temp[index++] = A[l++];
		}
		
		//右序列没扫描的部分
		while (r <= high) {
			temp[index++] = A[r++]; 
		}
		
		//复制临时序列到原序列
		for (int i = 0; i < temp.length; i++) {
			A[low + i] = temp[i];
		}
	}
	
	//分解函数，递归调用
	public void pass(int[] A, int low, int high) {
		if (low == high) {
			return;
		}
		
		int mid = (low + high) / 2;
		
		pass(A, low, mid); //划分左序列
		pass(A, mid + 1, high); //划分右序列
		
		merge(A, low, high);
	}
	
	public int[] mergeSort(int[] A, int n) {
		pass(A, 0, n - 1);
		return A;
	}
	
	public static void main(String[] args) {
		
	}
}
