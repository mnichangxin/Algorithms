/* 滑动窗口 */
package com.bat.stackqueue;

import java.util.Stack;

public class SlideWindow {
	public int[] slide(int[] arr, int n, int w) {
        int[] res = new int[n - w + 1];
        int index = 0;
        
        for(int i = 0; i <= n - w; i++) {
            res[index++] = getMax(arr, i, i + w);
        }
        
        return res;
    }
     
    //求数组最大值并返回
    public int getMax(int[] arr,int start,int end){
        int max = arr[start];
        
        for(int i = start; i < end; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        return max;
    }
	
	public static void main(String[] args) {
	}
}