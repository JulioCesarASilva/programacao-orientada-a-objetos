#include <iostream>

int main() {
    int altura=6;
    int largura=40;
    
    for(int y = 0; y < altura; y++) {
        for(int x = 0; x < largura; x++) {
            (x == 0 || x == largura -1 || y == 0 || y == altura -1)
                ? std::cout << "*" 
                : std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}