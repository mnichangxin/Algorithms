/* DFS深度优先遍历 */
package com.classic;

import java.util.ArrayList;
import java.util.LinkedList;

/* 邻接矩阵模型类 */
class AMWGraph {
	private ArrayList vertexList; // 存储点的链表
	private int[][] edges; // 邻接矩阵，用于存储边
	private int numOfEdges; // 边的数目
	
	// 初始化矩阵
	public AMWGraph(int n) {
		edges = new int[n][n];
		vertexList = new ArrayList(n);
		numOfEdges = 0;
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
}

public class DFS {
	public static void main(String[] args) {
		int n = 4, e = 4;
		String[] labels = {"V1", "V1", "V3", "V4"};
		
		AMWGraph graph = new AMWGraph(n);
		
		// 插入结点
		for (String label : labels) {
			graph.insertVertex(label);
		}
		
		// 插入四条边
		graph.insertEdge(0, 1, 2);
		graph.insertEdge(0, 2, 5);
		graph.insertEdge(2, 3, 8);
		graph.insertEdge(3, 0, 7);
		
		System.out.println("结点的个数是：" + graph.getNumOfVertex());
		System.out.println("边的个数是：" + graph.getNumOfEdges());
	
		graph.deleteEdge(0, 1);
		
		System.out.println("结点的个数是：" + graph.getNumOfVertex());
		System.out.println("边的个数是：" + graph.getNumOfEdges());
	}
}
