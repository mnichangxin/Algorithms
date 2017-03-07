/* 旋转数组最小值 */
package com.offer;

public class MinNumberRotatedArray {
	public int min(int[] A) {
		int index1 = 0; //左指针
		int index2 = A.length - 1; //右指针
		int mid = index1; //中间位置
		
		while (A[index2] <= A[index1]) {
			if (index2 - index1 == 1) {
				mid = index2;
				break;
			}
			
			mid = (index1 + index2) / 2;
			
			//如果为index1, index2, mid 三个值相等，则执行顺序查找
			if (A[index1] == A[index2] && A[index1] == A[mid]) {
				return minOrder(A, index1, index2);
			}
			
			//移动左指针或右指针到中间位置
			if (A[mid] >= A[index1]) {
				index1 = mid;
			} else if (A[mid] <= A[index2]) {
				index2 = mid;
			}
		}
		
		return A[mid];
	}
	
	//顺序查找
	public int minOrder(int[] A, int index1, int index2) {
		int res = A[index1];
		
		for (int i = index1 + 1; i <= index2; i++) {
			if (res > A[i]) {
				res = A[i];			
			}
		}
		
		return res;
	}
	
	public static void main(String[] args) {
	}
}
