/* 空格替换 */
package com.bat.string;

public class Replacement {
	public String replaceSpace(String iniString, int length) {
		char[] s = iniString.toCharArray();
		
		//寻找空格
		int len = length;
		
		for (int i = length - 1; i >= 0; i--) {
			if (s[i] == ' ') {
				len += 2; 
			} 
		}
		
		//新序列用于存储
		char[] t = new char[len];
		
		int j = 0; //新序列指针
		
		for (int i = 0; i < s.length; i++) {
			if (s[i] != ' ') {
				t[j] = s[i];
				j++;
			} else {
				t[j] = '%';
				t[j + 1] = '2';
				t [j + 2] = '0';
				j += 3;
			}
		} 
		
		//输出
		String p = "";
		
		for (int k = 0; k < t.length; k++) {
			p += t[k];
		}
		
		return p;
	}
	
	public static void main(String[] args) {

	}
}