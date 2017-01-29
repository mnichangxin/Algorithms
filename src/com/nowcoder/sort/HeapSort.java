/* ������ */
package com.nowcoder.sort;

public class HeapSort {
	//����
	public int[] buildMaxHap(int[] A) {
		for (int i = A.length / 2; i >= 0; i--) {
			adjustHeap(A, i, A.length);
		}
		
		return A;
	}
	
	//�ѵĵ���
	public void adjustHeap(int[] A, int k, int n) {
		int temp = A[k];
		
		for (int i = 2 * k + 1; i < n; i = 2 * i + 1) {
			if (i != n - 1 && A[i] < A[i + 1]) {
				i++; //��  -> ��ȡ��
			}
			if (temp > A[i]) {
				break; //��  -> �ң� ����
			} else {
				A[k] = A[i]; //�ı��ֵ�����������µ���
				k = i;
			}
		}
		
		A[k] = temp;
	}
	
	public int[] heapSort(int[] A, int n) {
		//���������
		A = buildMaxHap(A);
		
		//��������
		for (int i = n - 1; i > 0; i--) {
			int temp = A[0];
			A[0] = A[i];
			A[i] = temp;
			adjustHeap(A, 0, i);
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
 