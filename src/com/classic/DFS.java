/* DFS深度优先遍历 */
package com.classic;

import java.util.ArrayList;
import java.util.LinkedList;

/* 邻接矩阵模型类 */
class AMWGraph {
	private ArrayList vertexList; // 存储点的链表
	private int[][] edges; // 邻接矩阵，用于存储边
	private int numOfEdges; // 边的数目
	private boolean[] isVisited;
	
	// 初始化矩阵
	public AMWGraph(int n) {
		edges = new int[n][n];
		vertexList = new ArrayList(n);
		numOfEdges = 0;
		
		isVisited = new boolean[n];
		
		for (int i = 0; i < n; i++) {
			this.isVisited[i] = false;
		}
	}
	
	// 得到结点的个数
	public int getNumOfVertex() {
		return vertexList.size();
	}
	
	public int getNumOfEdges() {
		return numOfEdges;
	}
	
	// 得到结点i的数据
	public Object getValueByIndex(int i) {
		return vertexList.get(i);
	}
	
	// 返回v1, v2的权值
	public int getWeight(int v1, int v2) {
		return edges[v1][v2];
	}
	
	// 插入结点
	public void insertVertex(Object vertex) {
		vertexList.add(vertexList.size(), vertex);
	}
	
	// 插入结点
	public void insertEdge(int v1, int v2, int weight) {
		edges[v1][v2] = weight;
		numOfEdges++;
	}
	
	// 删除结点
	public void deleteEdge(int v1, int v2) {
		edges[v1][v2] = 0;
		numOfEdges--;
	}
	
	// 得到第一个邻接结点的下标
	public int getFirstNeighbor(int index) {
		for (int j = 0; j < vertexList.size(); j++) {
			if (edges[index][j] > 0) {
				return j;
			}
		}
		
		return -1;
	}
	
	// 根据前一个邻接结点的下标来取得下一个邻接结点
	public int getNextNeigbor(int v1, int v2) {
		for (int j = v2 + 1; j < vertexList.size(); j++) {
			if (edges[v1][j] > 0) {
				return j;
			}
		}
		
		return -1;
	}

	// 私有函数，深度优先遍历
	private void depthFirstSearch(boolean[] isVisited, int i) {
		System.out.print(this.getValueByIndex(i) + " ");
		
		isVisited[i] = true; // 置该结点为访问
		
		int w = this.getFirstNeighbor(i);
		
		while (w != -1) {
			if (!isVisited[w]) {
				this.depthFirstSearch(isVisited, w);
			}
			
			w = this.getNextNeigbor(i, w);
		}
	}
	
	// 对外公开函数，深度优先遍历
	public void depthFirstSearch() {
		for (int i = 0; i < this.getNumOfVertex(); i++) {
			// 对于非连通图，并不是通过一个节点就一定可以遍历所有结点的
			if (!isVisited[i]) {
				this.depthFirstSearch(isVisited, i);
			}
		}
	}
}

public class DFS {
	public static void main(String[] args) {
		int n = 8, e = 8;
		String[] labels = {"1", "2", "3", "4", "5", "6", "7", "8"};
		
		AMWGraph graph = new AMWGraph(n);
		
		// 插入结点
		for (String label : labels) {
			graph.insertVertex(label);
		}
		
		// 插入九条边
		graph.insertEdge(0, 1, 1);
        graph.insertEdge(0, 2, 1);
        graph.insertEdge(1, 3, 1);
        graph.insertEdge(1, 4, 1);
        graph.insertEdge(3, 7, 1);
        graph.insertEdge(4, 7, 1);
        graph.insertEdge(2, 5, 1);
        graph.insertEdge(2, 6, 1);
        graph.insertEdge(5, 6, 1);
        graph.insertEdge(1, 0, 1);
        graph.insertEdge(2, 0, 1);
        graph.insertEdge(3, 1, 1);
        graph.insertEdge(4, 1, 1);
        graph.insertEdge(7, 3, 1);
        graph.insertEdge(7, 4, 1);
        graph.insertEdge(6, 2, 1);
        graph.insertEdge(5, 2, 1);
        graph.insertEdge(6, 5, 1);
		
		System.out.println("深度优先搜索序列为：");
		graph.depthFirstSearch();
		System.out.println();
	}
}
