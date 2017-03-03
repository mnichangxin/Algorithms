/* 相邻两数最大差值 */
package com.nowcoder.sort;

public class Gap {
	public int maxGap(int[] A, int n) {
        int min = 0;
        int max = 0;
        
        //寻找最大最小值
        for (int i = 0; i < n; i++) {
            min = Math.min(min, A[i]);
            max = Math.max(max, A[i]);
        }
        
        if (min == max) {
        	return 0;
        }
        
        boolean[] hasNum = new boolean[n + 1];
        
        int[] maxs = new int[n + 1];
        int[] mins = new int[n + 1];
        
        for (int i = 0; i < n; i++) {
            int bid = bucket(A[i], n, min, max); //算出桶号
            
            maxs[bid] = hasNum[bid] ? Math.max(maxs[bid], A[i]) : A[i];
            mins[bid] = hasNum[bid] ? Math.min(mins[bid], A[i]) : A[i];
            hasNum[bid] = true;
        }
        
        int res = 0;
        int lastMax = 0;
        int i = 0;
        
        while (i <= n) {
            if (hasNum[i++]) {
                lastMax = maxs[i - 1];
                break;
            }
        }
        
        for( ; i <= n; i++) {
            if (hasNum[i]) {
                res = Math.max(res, mins[i] - lastMax);
                lastMax = maxs[i];
            }
        }
        
        return res; 
    }
	
    public int bucket(long num, long length, long min, long max){
        return (int)((num - min) * length / (max - min));
    }
    
	public static void main(String[] args) {
	
	}
}