/* �������� */
package com.nowcoder.sort;

public class QuickSort {
	public int sort(int[] A, int low, int high) {
		
		int key = A[low]; //��׼ֵ
		int i = low; //��ָ��
		int j = high; //��ָ��
		
		if (low < high) {
			while (i < j) {
				while (i < j && A[j] >= key) {
					j--;
				}
				A[i] = A[j];
				while (i < j && A[i] <= key) {
					i++;
				}
				A[j] = A[i];
			}	
			
			A[i] = key; //�����м�ֵ
		}
		
		return i;
	}
	
	public int[] quick(int[] A, int low, int high) {
		if (low < high) {
			int mid = sort(A, low, high);
			
			quick(A, low, mid - 1); //�ݹ�������
			quick(A, mid + 1, high); //�ݹ�������
		}
		
		return A;
	}
	
	public int[] quickSort(int[] A, int n) {
		return quick(A, 0, n - 1);
	}
	
	public static void main(String[] args) {
		int[] arr = {54,35,48,36,27,12,44,44,8,14,26,17,28};
		
		int[] printArr =  new QuickSort().quickSort(arr, arr.length);
	
		for (int i = 0; i < printArr.length; i++) {
			System.out.println(printArr[i]);
		}
	}
}
