/* 替换空格 */
package com.offer;

import java.util.Arrays;

public class ReplaceSpace {
	public String replaceSpace(String str) {
		char[] s = str.toCharArray(); //转换成字符数组
			
		int space = 0; //空格个数
		
		//遍历寻找空格的个数
		for (int i = 0; i < s.length; i++) {
			if (s[i] == ' ') {
				space++;
			} 
		}
		
		s = Arrays.copyOf(s, s.length + 2 * space);
		
		int k1 = str.length() - 1; //字符指针
		int k2 = s.length - 1; //尾指针
		
		while (k1 >= 0) {
			if (s[k1] == ' ') {
				s[k2--] = '0';
				s[k2--] = '2';
				s[k2--] = '%';
			} else {
				s[k2--] = s[k1];
			}
			
			k1--;
		}
		
		//输出
		String res = "";
		
		for (int i = 0; i < s.length; i++) {
			res += s[i];
		}
		
		return res;
	}

	public static void main(String[] args) {
	}
}
