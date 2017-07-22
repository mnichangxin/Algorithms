#include <cstdio>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	struct ListNode* next;
};

class Solution {
	public:
		vector<int> printListFormTailToHead(ListNode* head) {			
			vector<int> v;
	        stack<int> s;
	        ListNode* p = head;
	        
	        if ( head != NULL ) {
				while ( p != NULL ) {
	                s.push(p->val);
	                p = p->next;
	            }
			}
	            
	        while ( !s.empty() ) {
	            v.push_back(s.top());
	            s.pop();
	        }
	        
	        return v;
		}
};
