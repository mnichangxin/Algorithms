/* 两串旋转 */
package com.bat.string;

public class Rotation {
	public boolean chkRotation(String A, int lena, String B, int lenb) {
		if (lena != lenb) {
			return false;
		}
		
		A = A + A;
		
		return A.contains(B);
	}
	
	public static void main(String[] args) {
	
	}
}
