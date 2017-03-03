/* 有序矩阵查找  */
package com.nowcoder.sort;

public class Finder {
	public boolean findX(int[][] mat, int n, int m , int x) {
		int i = n - 1;
		int j = 0;
		
		while (i >=0 && j < m && i < n && j >= 0) {
			if (x == mat[i][j]) {
				return true;
			} else if (x < mat[i][j]) {
				i--;
			} else {
				j++;
			}
		}
		
		return false;
	}
	
	public static void main(String[] args) {
	
	}
}
