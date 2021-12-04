#include <iostream>

/*
Exercício de AEDS 1, calcular o fatorial de 5 recursivamente.
*/

using namespace std;

int fat (int n){
    int r;
    
    if(n == 1){
        r = n;
    }
    
    else{
        r = n*fat(n - 1);
    }
    
    return r;
}

int main(void){
    int n = 5, valor = 0;

    valor = fat(n);
    
    cout << "!5 = " << valor << endl;
    
    return 0;
}
