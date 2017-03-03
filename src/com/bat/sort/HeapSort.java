/* 堆排序 */
package com.bat.sort;

public class HeapSort {	
	//堆的调整，大根堆
	public void heapAdjust(int[] A, int parent, int n) {
		int temp = A[parent]; //保存当前父结点
		int child = 2 * parent + 1; //获得左孩子
		
		while (child < n) {
			//如果右孩子结点值大于左孩子结点值，则选取右孩子结点
			if (child + 1 < n && A[child] < A[child + 1]) {
				child++;
			}
			//如果父结点值大于孩子结点的值，则直接结束
			if (temp >= A[child]) {
				break;
			}
			
			A[parent] = A[child]; //把孩子结点的值赋给父结点
			
			parent = child;
			child = 2 * parent + 1;
		}
		
		A[parent] = temp;
	}
	
	//堆的建立
	public int[] buildMaxHeap(int[] A, int n) {
		//循环建立初始堆
		for (int i = n / 2; i >= 0; i--) {
			heapAdjust(A, i, n - 1);
		}
		
		//进行n-1次循环，完成排序
		for (int i = n - 1; i > 0; i--) {
			//最后一个元素和第一元素进行交换
			int temp = A[i];
			A[i] = A[0];
			A[0] = temp;
		
			//筛选 R[0]结点，得到i-1个结点的堆
			heapAdjust(A, 0, i);
		}
		
		return A;
	}
	
	public int[] heapSort(int[] A, int n) {
		return buildMaxHeap(A, n);
	}
	
	public static void main(String[] args) {
		int[] arr = {11, 12, 1, 43, 5, 7, 32, 68, 86, 12, 53, 65, 27, 43};
		
		int[] printArr = new HeapSort().heapSort(arr, arr.length);
		
		for (int i = 0; i < printArr.length; i++) {
			System.out.println(printArr[i]);
		}
	}
}
