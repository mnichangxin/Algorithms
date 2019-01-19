/* 二维数组中的查找 */
package com.offer;

public class Finder {
	public boolean Find(int target, int[][] array) {
		int rows = array.length; //行数
		int cols = array[0].length; //列数
		
		int i = rows - 1; 
		int j = 0;
		
		while (i >= 0 && j < rows && i < cols && j >= 0) {
			if (target == array[i][j]) {
				return true;
			} else if (target < array[i][j]) {
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