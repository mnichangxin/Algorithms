/* 最长无重复子串 */
package com.bat.string;

public class DistinctSubstring {
	public int longestSubstring(String A, int n) {
		char[] s = A.toCharArray();
		
		int[] map = new int[256];
		
		//构造Hash表
		for (int i = 0; i < 256; i++) {
			map[i] = -1;
		}
		
		int len = 0; //
		int pre = -1; //每个字符上次出现的位置
		int cur = 0; //当前字符为止的最长无重复字符串的长度
		
		for (int i = 0; i < n; i++) {
			pre = Math.max(pre, map[s[i]]);
			cur = i - pre;
			len = Math.max(len, cur);
			map[s[i]] = i;
		}
		
		return len;
	}	
	
	public static void main(String[] args) {
		
	}
}