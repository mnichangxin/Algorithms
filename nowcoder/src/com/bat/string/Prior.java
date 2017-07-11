/* 拼接最小字典序 */
package com.bat.string;

import java.util.Arrays;
import java.util.Comparator;

public class Prior {
	public class MyComparator implements Comparator<String> {
		@Override
		public int compare(String s1, String s2) {
			return (s1 + s2).compareTo(s2 + s1);
		}
		
	}
	
	public String findSmallest(String[] strs, int n) {
		if (strs == null || n == 0) {
			return "";
		}
		
		//根据新的比较方式排序
		Arrays.sort(strs, new MyComparator());
	
		String res = "";
		
		for (int i = 0; i < n; i++) {
			res += strs[i];
		}
		
		return res;
	}
	
	public static void main(String[] args) {
		System.out.println(new Prior().findSmallest(new String[] {"ibc", "de", "fg", "hi"}, 4));
	}
}
