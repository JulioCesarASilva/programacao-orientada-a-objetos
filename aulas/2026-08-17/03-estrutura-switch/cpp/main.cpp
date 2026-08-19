#include <iostream>
#include <stdio.h>

int main() {
    int resposta; 
    do {
        std::cout << "Digite um numero de 1 a 5" << std::endl;
        std::cin >> resposta;
    
        switch (resposta) {
            case 1:
                std::cout << "Foi 1." << std::endl;
                break;
            case 2: 
                std::cout << "Foi 2." << std::endl;
                break;
            case 3: 
                std::cout << "Foi 3." << std::endl;
                break;
            case 4: 
                std::cout << "Foi 4." << std::endl;
                break;
            case 5: 
                std::cout << "Foi 5." << std::endl;
                break;
            default: 
                std::cout << "Saindo!" << std::endl;
        }
        
    } while (resposta>=1 && resposta <=5);
    return 0;
}