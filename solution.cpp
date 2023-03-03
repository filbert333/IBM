#include <iostream>

//Solution 1
int main () {
    int n;
    
    std::cin >> n;
    
    int available[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> available[i];
    }
    
    int m;
    
    std:cin >> m;
    
    int request[m];
    
    for (int i = 0; i < m; i++) {
        std::cin >> available[i];
    }
    
    
}

//Solution 2
int main() {
    int n;
    char current;
    char next;
    
    std:cin >> n;
    
    for (int i = 0; i < n; i++){
       std: cin >> current;
       if ( current == " ")
       {
           std:cin >> next;
           if (next = "f")
           {
               std::cout << "No" << std::endl;
           }
       }
     std::cout << "Yes" << std::endl;
    }
}
