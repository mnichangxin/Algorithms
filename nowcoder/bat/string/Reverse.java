/* 句子的逆序 */
package com.bat.string;

public class Reverse {
	public char[] reverse(char[] str, int start, int end) {
		while (start < end) {
			char temp = str[start];
			str[start] = str[end];
			str[end] = temp;
			start++;
			end--;
		}
		
		return str;
	}
	
	public String reverseSentence(String A, int n) {
		char[] str = A.toCharArray();
		
		//整体逆序
		str = reverse(str, 0, n - 1);
		
		//寻找单个单词，并逆序
		int i = 0;
		
		for (int j = 0; j < n; j++) {
			if (str[j] == ' ') {
				str = reverse(str, i, j - 1);
				i = j + 1;
			}
			if (j == n - 1) {
				str = reverse(str, i, j);
			}
		}
		
		//输出
		String s = "";
		
		for (int k = 0; k < n; k++) {
			s += str[k];
		}
		
		return s;
	}

	public static void main(String[] args) {

	}
}