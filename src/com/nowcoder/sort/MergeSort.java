/* �鲢���� */
package com.nowcoder.sort;

public class MergeSort {
	//�鲢����
	public void merge(int[] A, int low, int high) {
		
		int mid = (low + high) / 2;
		
		int l = low; //�����е���ʼλ��
		int r = mid + 1; //��������ʼλ��
		
		int[] temp = new int[high - low + 1]; //��ʱ�洢������
		int index = 0; 
		
		//ɨ�������к������в��Ƚ�
		while(l <= mid && r <= high) {
			if (A[l] <= A[r]) {
				temp[index++] = A[l++];
			} else {
				temp[index++] = A[r++];
			}
		}
		
		//������ûɨ��Ĳ���
		while (l <= mid) {
			temp[index++] = A[l++];
		}
		
		//������ûɨ��Ĳ���
		while (r <= high) {
			temp[index++] = A[r++]; 
		}
		
		//������ʱ���е�ԭ����
		for (int i = 0; i < temp.length; i++) {
			A[low + i] = temp[i];
		}
	}
	
	//�ֽ⺯�����ݹ����
	public void pass(int[] A, int low, int high) {
		if (low == high) {
			return;
		}
		
		int mid = (low + high) / 2;
		
		pass(A, low, mid); //����������
		pass(A, mid + 1, high); //����������
		
		merge(A, low, high);
	}
	
	public int[] mergeSort(int[] A, int n) {
		pass(A, 0, n - 1);
		return A;
	}
	
	public static void main(String[] args) {
		
	}
}
