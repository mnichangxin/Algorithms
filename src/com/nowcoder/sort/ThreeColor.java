/* 三色排序 */
package com.nowcoder.sort;

public class ThreeColor {
	public void swap(int[] A, int index1, int index2) {
		int temp = A[index1];
		A[index1] = A[index2];
		A[index2] = temp;
	}
	
	public int[] sortThreeColor(int[] A, int n) {
		
		int i = 0; //指针
		
		int k = 1; //标志1
		
		int l = -1; //左区域初始指针
		int r = n; //右区域初始指针
		
		while (i < r) {
			if (A[i] < k) {
				swap(A, ++l, i++);
			} else if (A[i] > k) {
				swap(A, i, --r);
			}  else {
				i++;
			}
		}
		
		return A;
	}
	
	public static void main(String[] args) {
		int[] A = new ThreeColor().sortThreeColor(new int[] {0, 1, 1, 0, 2, 2}, 6);
		
		for (int i = 0; i < A.length; i++) {
			System.out.println(A[i]);
		}
	}
}
