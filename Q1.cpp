#include <iostream>

//Solution 1
int main () {
    int n;
    
    std::cin >> n;
    
    char available[n][];
    
    for (int i = 0; i < n; i++) {
        char check;
        while ( check != " ")
        {
        std::cin >> available[i][];
        }
    }
    
    int m;
    
    std:cin >> m;
    
    int request[m][];
    
    for (int j = 0; j < m; j++) {
        char check;
        while ( check != " ")
        {
        std::cin >> available[j];
        }
    }
    
    for (int k = 0; k < m; k++){
        for ( int l = 0; l < n; l++){
            if ( request[k] <= available[l]){
                request[l] = 0 ; //Set the array to become unavalable
                break;
            }
        }
    }
    
    for (int z = 0; z < m; n++){
        if (request[z] != 0){ //if the request array become nothing then all the request is satisfied
            std::cout << "Yes" << std::endl;
        }
    }
    
}

