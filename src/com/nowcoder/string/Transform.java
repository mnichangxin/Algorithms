package com.nowcoder.string;

public class Transform {
	public boolean chkTransform(String A, int lena, String B, int lenb) {
		if (lena != lenb) {
			return false;
		}
		
		char[] arr1 = A.toCharArray();
		char[] arr2 = B.toCharArray();
		
		int[] map = new int[256];
		
		for (int i = 0; i < arr2.length; i++) {
			map[arr1[i]]++;
		}
		for (int i = 0; i < arr2.length; i++) {
			if (map[arr2[i]]-- == 0) {
				return false;
			}
		}
		
		return true;
	}
	
	public static void main(String[] args) {
		
	}
}
