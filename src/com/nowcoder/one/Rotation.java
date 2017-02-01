package com.nowcoder.one;

public class Rotation {
	
	public boolean chkRotation(String A, int lena, String B, int lenb) {	
		if(lena!=lenb){
			return false;
	    }
		
	    String C = A + A;
	  
	    return C.contains(B);
    }
	
	public static void main(String[] args) {
		
	}

}
