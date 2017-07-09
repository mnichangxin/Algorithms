/* DFS深度优先遍历 */
package com.classic;

import java.util.ArrayList;
import java.util.Stack;

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
	
	public void traverse(int i) {
		this.isVisited[i] = true;
		
		System.out.print(this.vertices[i] + " ");
		
		for (int j = 0; j < this.vexnum; j++) {
			if (this.arcs[i][j] == 1 && this.isVisited[j] == false) {
				traverse(j);
			}
		}
	}
	
	// 深度优先遍历（递归）
	public void DFSTraverse() {
		for (int i = 0; i < this.vexnum; i++) {
			if (this.isVisited[i] == false) {
				this.traverse(i);
			}
		}
	}
	
	// 深度优先遍历（非递归）
	public void DFS() {
		Stack<Integer> s = new Stack<Integer>();
        
		for (int i = 0; i < vexnum; i++) {
            if (!this.isVisited[i]) {
                //连通子图起始节点
                s.add(i);
                do{ 
                    // 出栈
                    int curr = s.pop();

                    // 如果该节点还没有被遍历，则遍历该节点并将子节点入栈
                    if(this.isVisited[curr]==false) {
                        // 遍历并打印
                        this.traverse(curr);
                        this.isVisited[curr] = true;

                        // 没遍历的子节点入栈
                        for (int j = vexnum - 1; j >= 0; j--) {
                            if (this.arcs[curr][j] == 1 && this.isVisited[j] == false) {
                                s.add(j);
                            }
                        }
                    }
                } while(!s.isEmpty());
            }
        }
	}
}

/* 主类  */
public class DFS {
	public static void main(String[] args) {
		AMWGraph g = new AMWGraph(9);
		
        String[] vertices = {"A", "B", "C", "D", "E", "F", "G", "H", "I"};
 
        g.setVertices(vertices);

        g.setArcs(0, 1);
        g.setArcs(0, 5);
        g.setArcs(1, 0);
        g.setArcs(1, 2);
        g.setArcs(1, 6);
        g.setArcs(1, 8);
        g.setArcs(2, 1);
        g.setArcs(2, 3);
        g.setArcs(2, 8);
        g.setArcs(3, 2);
        g.setArcs(3, 4);
        g.setArcs(3, 6);
        g.setArcs(3, 7);
        g.setArcs(3, 8);
        g.setArcs(4, 3);
        g.setArcs(4, 5);
        g.setArcs(4, 7);
        g.setArcs(5, 0);
        g.setArcs(5, 4);
        g.setArcs(5, 6);
        g.setArcs(6, 1);
        g.setArcs(6, 3);
        g.setArcs(6, 5);
        g.setArcs(6, 7);
        g.setArcs(7, 3);
        g.setArcs(7, 4);
        g.setArcs(7, 6);
        g.setArcs(8, 1);
        g.setArcs(8, 2);
        g.setArcs(8, 3);

        System.out.print("深度优先遍历（递归）：");
        g.DFSTraverse();
	}
}
