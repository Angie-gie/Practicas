#include <iostream>
#include "auxiliar.h"
using namespace std;

int sumaDivisores(int num) {
    int suma = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma;
}
int potencia10(long int n){
    int res=10;
    while(n>1){
        res*=10;
        n--;
    }
    return res;
}
