#include <iostream>
#include <soma.h>
#include <functional>

int mainBasic() {
    std::cout << "Hello World";
    std::cout << renato::sum(2,4);
    std::cin.get();

    return 0;
}

int somaPorReferencia(int &valor){
    valor = 5;
    return renato::sum(valor,3);
}

int somaPorValor(int valor){
    valor = 5;
    return renato::sum(valor,3);
}


int mainFunctions(){
    int numero = 30;
    std::cout << "numero " << numero << "\n";
    std::cout << "soma por valor " << somaPorValor(numero) << "\n";
    std::cout << "numero " << numero << "\n";
    std::cout << "soma por ref " << somaPorReferencia(numero) << "\n";
    std::cout << "numero " << numero << "\n";
    std::cin.get();

    return 0;
}
    
using namespace std;

function<int(int)> lambdaFunction(int valorA){
    return [=](int valorB) {
        return valorA + valorB;
    };
}

int main(){
    function<int(int)> soma4 = lambdaFunction(4);
    cout << "lambda " << soma4(6) ;

    int value = 1;
    int bitwiseValue = value << 2;
    int *pointer = &value;
    cout << bitwiseValue << endl;
    cout << pointer;

    std::cin.get();

    return 0;

}