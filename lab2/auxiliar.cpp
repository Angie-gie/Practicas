#include <iostream>
#include "auxiliar.h"
using namespace std;

bool divisores(int num){
    int suma1=0, suma2=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            suma1+=i;
        }
    }
    for (int i=1;i<=suma1/2;i++){
        if(suma1%i==0){
            suma2+=i;
        }
    }
    if(suma1==suma2 && num!=suma2){
        return true;
    }else{
        return false;
    }
}
int potencia10(long int n){
    int res=10;
    while(n>1){
        res*=10;
        n--;
    }
    return res;
}
