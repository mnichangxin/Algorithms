#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	  
    int res = 0, j;  
    
	for (int i = 1; i <= n; i++) {  
        j = i;  
        
        while (j % 5 == 0){  
            res++;  
            j = j / 5;  
        }  
    } 
    
    cout << res;
} 
