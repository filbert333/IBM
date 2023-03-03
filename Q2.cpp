#include <iostream>
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
           if (next = "f") //if the letter start with F, then it's false
           {
               std::cout << "No" << std::endl;
           }
       }
     std::cout << "Yes" << std::endl;
    }
}
