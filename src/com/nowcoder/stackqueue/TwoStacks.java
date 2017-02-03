/* 双栈排序 */
package com.nowcoder.stackqueue;

import java.util.ArrayList;

public class TwoStacks {
	public ArrayList<Integer> twoStacksSort(int[] numbers) {
		int top1 = 0;
		int top2 = numbers.length - 1;
		
		int[] help = new int[numbers.length];
		
		while (top1 < numbers.length) {
			int mid = numbers[top1++];
			
			if (top2 == help.length - 1) {
				help[top2--] = mid;
			} else {
				if (mid < help[top2 + 1]) {
					help[top2--] = mid;
				} else {
					int k = top2 + 1;
					
					while (k < numbers.length && help[k] <= mid) {
						help[k - 1] = help[k];
						k++;
					}
					
					help[k - 1] = mid;
					top2--;
				}
			}
		}
		
		ArrayList<Integer> ans = new ArrayList<Integer>();
		
		for (int i = help.length - 1; i >=0; i--) {
			ans.add(help[i]);
		}
		
		return ans;
	}
	
	public static void main(String[] args) {
	
	}
}