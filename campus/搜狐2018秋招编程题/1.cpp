#include <iostream>
#include <stack>

using namespace std;

string simplifyPath(string path) {
    stack<string> sk;
	
	int i = 0;
	while(i < path.size()) {
        while(i < path.size() && '/' == path[i]) {
			i++;
		}
		
        string s = "";
        while(i < path.size() && path[i] != '/') {
			s += path[i++];
		}
        	
        if(".." == s && !sk.empty()) {
			sk.pop();
		} else if(s != "" && s != "." && s != "..") {
			sk.push(s);
		}
    }
         
    if(sk.empty()) {
		return "/";
	}
     
    string s = "";
    while(!sk.empty()) {
        s = "/" + sk.top() + s;
        sk.pop();
    }
         
    return s;
}

int main() {
	string s;
	cin >> s;
	
	cout << simplifyPath(s);
	
	return 0;
} 
