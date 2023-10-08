#include <iostream>
#include "problemas.h"
#include "auxiliar.h"
//#include <cstdlib>

/*ejercicio 1
    *direccion de memoria: 0x62fdf0, como es arreglo de enteros
        cada elemento ocupa 4 bytes
    *direccion de array[3]: 0x62fdfc contiene el elemento 3
    * fun_b invierte el array */
//ejercicio5 https://www.tinkercad.com/things/jieuDLCa4TP
//https://www.tinkercad.com/things/9ywFy4qs8oL-copy-of-proyecto-parcial1-/editel?sharecode=vQTARq0DT3wLwNhXtaMqL5DHPVaZUrIYVrtzBs2u79U


void problema1(){
    int cantidad;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    int valores[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidadValores[10] = {0};

    for (int i = 0; i < 10; ++i) {
        while (cantidad >= valores[i]) {
            cantidad -= valores[i];
            cantidadValores[i]++;
        }
    }
    for (int i = 0; i < 10; ++i) {
        cout << valores[i] << " : " << cantidadValores[i] << endl;
    }
    cout << "Faltante: " << cantidad << endl;
}

bool problema3(char *c1, char*c2){  
    short int x=0;
    char caracter1, caracter2;
    while(true){
        caracter1=*(c1+x);
        caracter2=*(c2+x);
        if(caracter1!=caracter2){
            return false;
        }else if((caracter1=='\0' && caracter2!='\0')||(caracter1!='\0' && caracter2=='\0')){
            return false;
        }else if(caracter1=='\0' && caracter2=='\0'){
            return true;
        }
        else{x+=1;}
    }
}

void problema5(int num, char *cadena){
    int numCopiado = num;
    int longitud=0;

    while (numCopiado != 0) {
        numCopiado /= 10;
        longitud++;
    }

    numCopiado = num;
    for (int i = longitud - 1; i >= 0; i--) {
        cadena[i] = '0' + numCopiado % 10;
        numCopiado /= 10;
    }
    cadena[longitud] = '\0';
}

void problema7(char *c){
    char norep[26];
    bool flag=false;
    int index=0;
    for (int i=0;*(c+i)!='\0';i++){
        char caracter=*(c+i);
        for (int x=0;x<26;x++){
            if(norep[x]==caracter){
                flag=true;
                break;
            }
        }
        if(!flag){
            norep[index]=caracter;
            index++;
        }
        flag=false;
    }
    norep[index]='\0';
    cout<<"Original: "<<c<<endl;
    cout<<"Sin repetidos: "<<norep<<endl;}

long long int problema9(char *c, long long int n){
    long int num=0;
    for(int i=0;*(c+i)!='\0';i++){
        num =  (*(c+i) - '0')  + (num * 10);
    }
    int base=potencia10(n);
    long long int suma=0;
    while(num>1){
        int cifras=num%base;
        num/=base;
        suma+=cifras;
    }
    return suma;}

void problema11(char accion, char  letra, int numero){
    static char cine[15][20]; // Usar un arreglo 2D de 15x20 para representar los asientos
    int fila, columna;

    fila = int(letra) - 65;
    columna= numero - 1;

    if (accion == 'R') {
        cine[fila][columna] = '+';
    } else if (accion == 'C') {
        cine[fila][columna] = '-';
    }

    // Mostrar el estado actual de la sala de cine
    for (int i = 0; i < 15; i++) {
        cout << char(65 + i) << " "; // Imprimir la letra de la fila

        for (int j = 0; j < 20; j++) {
            if (cine[i][j] == '+') {
                cout << "+ "; // Asiento reservado
            } else {
                cout << "- "; // Asiento disponible
            }
        }
        cout << endl;
    }
}

int problema13(int *mat){

    int imagen[6][8],estrellas=0;
    float formula;
    for(int f=0,i=0;f<6;f++){
        for(int c=0;c<8;c++){
            imagen[f][c]=*(mat+i);
        }
    }
    for(int f=1;f<5;f++){
        for(int c=1;c<7;c++){
            formula=(imagen[f][c]+imagen[f][c-1]+imagen[f][c+1]+imagen[f-1][c]+imagen[f+1][c])/5.0;
            if (formula>6){
                estrellas++;
            }
        }
    }
    return estrellas;
}

void problema15(int *A, int *B, int *C){
    int x1 = max(A[0], B[0]);
    int y1 = max(A[1], B[1]);
    int x2 = min(A[0] + A[2], B[0] + B[2]);
    int y2 = min(A[1] + A[3], B[1] + B[3]);

    if (x1 < x2 && y1 < y2) {
        C[0] = x1;
        C[1] = y1;
        C[2] = x2 - x1;
        C[3] = y2 - y1;
    } else {
        // No hay intersección, establecer el rectángulo de intersección como inválido
        C[0] = C[1] = C[2] = C[3] = 0;
    }
}

int problema17(int num){
    int suma=0;
    while(num>1){
        if(divisores(num)){
            suma+=num;
        }
        num--;
    }
    return suma;}
