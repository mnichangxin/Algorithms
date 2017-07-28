#include <cstdio>
#include <stack>

using namespace std;

class Solution {
	private:
		stack<int> stack1;
		stack<int> stack2;
	
	public:
		void push(int node) {
			stack1.push(node);	
		}
		int pop() {
			while (!stack1.empty()) {
				stack2.push(stack1.top());
				stack1.pop();
			}
			
			int top = stack2.top();
			stack2.pop();
			
			while (!stack2.empty()) {
				stack1.push(stack2.top());
				stack2.pop();
			}
			
			return top;
		}
}; 

int main() {
	Solution s;
	s.push(1);
	s.push(2); 
	s.push(3);
	s.push(4);
	printf("%d", s.pop());
	return 0;
}
