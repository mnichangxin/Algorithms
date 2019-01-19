/* 字符串移位 */
package com.bat.string;

public class Translation {
	//逆序函数
	public char[] reverse(char[] A, int start, int end) {
		char temp = ' ';
		
		while (start < end) {
			temp = A[start];
			A[start] = A[end];
			A[end] = temp;
			start++;
			end--;
		}
		
		return A;
	}
	
	public String stringTranslation(String A, int n, int len) {
		if (len == n) {
			return A;
		}
		if (len > n) {
			return null;
		} 
		
		char[] arr = A.toCharArray();
		
		//整体逆序
		arr = reverse(arr, 0, n - 1);
		
		//分别逆序
		arr = reverse(arr, 0, n - len - 1);
		arr = reverse(arr, n - len, n - 1);
		
		//输出
		String s = "";
		
		for (int i = 0; i < n; i++) {
			s += arr[i];
		}
		
		return s;
	}
	
	public static void main(String[] args) {
		System.out.println(new Translation().stringTranslation("ABCDE", 5, 3));
	}
}