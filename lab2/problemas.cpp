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
    char norep[26] = {0}; // Inicializar con valores nulos
    for (int i = 0; c[i] != '\0'; i++) {
        char caracter = c[i] - 'a'; // Convertir el carácter a un índice de 0 a 25
        if (norep[caracter] == 0) {
            norep[caracter] = 1;
            cout << c[i]; // Imprimir el carácter no repetido
        }
    }
    cout << endl;
}

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

    float formula=0;
    int estrellas=0;
    for(int f=1;f<5;f++){
        for(int c=1;c<7;c++){
            formula=(mat[f * 8 + c] + mat[f * 8 + c - 1] + mat[f * 8 + c + 1] + mat[(f - 1) * 8 + c] + mat[(f + 1) * 8 + c])/5.0;
            if (formula>6){
                estrellas++;
            }
        }
    }
    return estrellas;
}

void problema15(int *A, int *B, int *C){
    int x1 = max(A[0], B[0]); //x sup izquierda
    int y1 = max(A[1], B[1]); //y sup izquierda
    int x2 = min(A[0] + A[2], B[0] + B[2]); //esquina superior derecha
    int y2 = min(A[1] + A[3], B[1] + B[3]); //esqina inferior izquierda

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
    int suma = 0;

    for (int a = 1; a < num; a++) {
        int b = sumaDivisores(a);
        if (a != b && a == sumaDivisores(b)) {
            suma += a;
        }
    }
    return suma;}
