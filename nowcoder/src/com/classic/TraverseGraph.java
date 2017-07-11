/* DFS 深度优先遍历 ，BFS 广度优先遍历  */
package com.classic;


import java.util.Queue;
import java.util.Stack;
import java.util.LinkedList;

/* 邻接矩阵模型类 */
class AMWGraph {
	private String[] vertices; // 存储结点的信息
	private int[][] arcs; // 邻接矩阵
	private int vexnum; // 结点的数目
	private boolean[] isVisited; // 存储结点是否被访问
	
	public AMWGraph(int n) {
		this.vexnum = n;
		this.arcs = new int[n][n];
		this.isVisited = new boolean[n];
		
		for (int i = 0; i < arcs.length; i++) {
			for (int j = 0; j < arcs[i].length; j++) {
				arcs[i][j] = 0;
			}
		}
		
		for (int i = 0; i < n; i++) {
			this.isVisited[i] = false;
		}
	}
	
	public void setVertices(String[] vertices) {
		this.vertices = vertices;
	}
	
	public void setArcs(int i, int j) {
		this.arcs[i][j] = 1;
	}
	
	// 深度优先遍历（递归）
	public void dfsTvr(int i) {
		isVisited[i] = true;
		
		System.out.print(vertices[i] + " ");
		
		for (int j = 0; j < vexnum; j++) {
			if (arcs[i][j] == 1 && isVisited[j] == false) {
				dfsTvr(j);
			}
		}
	}
	
	public void DFSTraverse() {
		for (int i = 0; i < vexnum; i++) {
			if (isVisited[i] == false) {
				dfsTvr(i);
			}
		}
	}
	
	// 深度优先遍历（非递归）
	public void DFS() {
		Stack<Integer> s = new Stack<Integer>();
        
		for (int i = 0; i < vexnum; i++) {
            if (isVisited[i] == false) {
                s.add(i); //连通子图起始节点
              
                while (!s.isEmpty()) {
                	int cur = s.pop(); // 出栈
                	
                	if (isVisited[cur] == false) {
                		isVisited[cur] = true;
                    	
                    	System.out.print(vertices[cur] + " ");
                    	
                    	for (int j = vexnum - 1; j >= 0; j--) {
                    		if (arcs[cur][j] == 1 && isVisited[j] == false) {
                    			s.add(j); // 入栈
                    		}
                    	}
                	} 
                }
            }
        }
	}
	
	// 广度优先遍历
	public void BFS() {
		Queue<Integer> q = new LinkedList<Integer>();
		
		for (int i = 0; i < vexnum; i++) {
			if (isVisited[i] == false) {
				q.offer(i); // 入队列
				
				while (!q.isEmpty()) {
					int cur = q.poll(); // 出队列
					
					isVisited[cur] = true;
					
					System.out.print(vertices[cur] + " ");
					
					for (int j = 0; j < vexnum; j++) {
						if (arcs[cur][j] == 1 && isVisited[j] == false) {
							q.offer(j); // 入队列
						}
					}
				}
			}
		}
	}
}

/* 主类  */
public class TraverseGraph {
	public static void main(String[] args) {
		AMWGraph g = new AMWGraph(7);
		
        String[] vertices = {"A", "B", "C", "D", "E", "F", "G"};
 
        g.setVertices(vertices);

        g.setArcs(0, 1);
        g.setArcs(0, 2);
        g.setArcs(1, 3);
        g.setArcs(1, 4);
        g.setArcs(2, 5);
        g.setArcs(2, 6);

//        System.out.print("深度优先遍历（递归）：");
//        g.DFSTraverse();
//        System.out.println();
//        System.out.print("深度优先遍历（非递归）：");
//        g.DFS();
        System.out.println();
        System.out.print("广度优先遍历：");
        g.BFS();
	}
}
