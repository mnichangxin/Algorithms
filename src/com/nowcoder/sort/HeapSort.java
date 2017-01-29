/* 堆排序 */
package com.nowcoder.sort;

public class HeapSort {
	//建堆
	public int[] buildMaxHap(int[] A) {
		for (int i = A.length / 2; i >= 0; i--) {
			adjustHeap(A, i, A.length);
		}
		
		return A;
	}
	
	//堆的调整：将元素A[k]自下往上逐步调整树形结构
	public void adjustHeap(int[] A, int k, int n) {
		int temp = A[k];
		
		for (int i = 2 * k + 1; i < n; i = 2 * i + 1) {
			if (i != n - 1 && A[i] < A[i + 1]) {
				i++; //右 -> 左，取右
			}
			if (temp > A[i]) {
				break; //根 -> 右，结束
			} else {
				A[k] = A[i]; //改变根植，并继续向下调整
				k = i; //修改k值，以便继续向下调整
			}
		}
		
		A[k] = temp; //被调整的结点的值放入最终位置
	}
	
	public int[] heapSort(int[] A, int n) {
		//建立大根堆
		A = buildMaxHap(A);
		
		//调整排序
		for (int i = n - 1; i > 0; i--) {
			//堆顶和堆底元素交换
			int temp = A[0];
			A[0] = A[i];
			A[i] = temp;
			adjustHeap(A, 0, i); //将剩余的元素整理成堆
		}
		
		return A;
	}
	
	public static void main(String[] args) {
		int[] arr = {32,103,24,88,95,70,97,15,102,6,79,46,51,37,93,108,9,58,53,58,79,36,58,91,78,58,61,81};
	
		int[] arrPrint = new HeapSort().heapSort(arr, arr.length);
		
		for (int i = 0; i < arrPrint.length; i++) {
			System.out.println(arrPrint[i]);
		}
	}
}
 