package com.bat.string;

public class Parenthesis {
	public boolean chkParenthesis(String A, int n) {
		if (n % 2 == 1) {
			return false;
		}
		
		char[] s = A.toCharArray();
		
		int status = 0; //左括号数目

		for (int i = 0; i < n; i++) {
			if (s[i] == '(') {
				status++;
			} else if (s[i] == ')' && status > 0) {
				status--;
			} else {
				return false;
			}
		}
		
		if (status != 0) {
			return false;
		}
		
		return true;
	}
	
	public static void main(String[] args) {
		System.out.println(new Parenthesis().chkParenthesis("()()()", 6));
	}
}