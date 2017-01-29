package com.nowcoder.one;

import java.util.Iterator;
import java.util.LinkedList;

public class Rotation {
	
	public boolean chkRotation(String A, int lena, String B, int lenb) {
        // write code here
		
		if(lena!=lenb){
			return false;
	    }
		
	    String C = A + A;
	  
	    return C.contains(B);
    }
	
	public static void main(String[] args) {
		
	}

}
