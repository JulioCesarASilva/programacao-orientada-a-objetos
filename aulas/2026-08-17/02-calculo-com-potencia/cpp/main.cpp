#include <iostream>
#include <math.h>

int main() {
    float venda= 3.2;
    float taxa= 1.3;
    int meses = 3;
    float resultado = venda * pow(taxa,meses);
    std::cout << "O resultado é " << resultado << std::endl;
    return 0;
}