#include <iostream>
#include "problemas.h"

using namespace std;

int main()
{
    char cadena1[256], cadena2[256], cadena[256], accion;
    short int problema;
    cout << "Ingrese numero de problema:" << endl;
    cin>>problema;
    switch(problema){
    case 1:{
        problema1();
        break;}
    case 3:{
        cout << "Ingrese la cadena 1: ";
        cin >> cadena1;
        cout << "Ingrese la cadena 2: ";
        cin >> cadena2;
        problema3(cadena1, cadena2);
        break;}
    case 5:{
        int num; char cadena[20];
        cout << "Ingrese numero: ";
        cin >> num;
        problema5(num,cadena);
        cout << "El numero convertido a caracteres es: " << cadena << endl;
        break;}
    case 7:{
        char cadena3[256];
        cout << "Ingrese la cadena: ";
        cin >> cadena3;
        cout<<"Original: "<<cadena3<<endl;
        cout<<"Sin repetidos: ";
        problema7(cadena3);

        break;
    }
    case 9:{
        long long int n;
        cout << "Ingrese n: ";
        cin >> n;
        cout << "Ingrese la cadena: ";
        cin >> cadena;
        problema9(cadena, n);
        break;}
    case 11:{
        char letra;int numero;
        cout << "Ingrese R para reserva, C para cancelar, 0 para terminar: ";
        cin>>accion;
        while (accion!='0'){
            cout<<"Ingrese asiento: ";
            cin>>letra>>numero;
            problema11(accion, letra, numero);
            cout << "Ingrese R para reserva, C para cancelar, 0 para terminar: ";
            cin>>accion;
        }
        break;}
    case 13:{
        int mat[6][8]={{0,3,4,0,0,0,6,8},
                     {5,13,6,0,0,0,2,3},
                     {2,6,2,7,3,0,10,0},
                     {0,0,4,15,4,1,6,0},
                     {0,0,7,12,6,9,10,4},
                     {5,0,6,10,6,4,8,0}};
        cout<<"Hay "<<problema13(*mat)<<" estrellas"<<endl;
        break;}
    case 15:{
        int A[4], B[4], C[4];
        cout << "Ingrese las coordenadas del rectangulo A (x y ancho altura): ";
            for (int i = 0; i < 4; ++i) {
            cin >> A[i];
        }
        cout << "Ingrese las coordenadas del rectangulo B (x y ancho altura): ";
            for (int i = 0; i < 4; ++i) {
            cin >> B[i];
        }

        problema15(A,B,C);

        if (C[2] > 0 && C[3] > 0) {
            cout << "Rectangulo interseccion: {" << C[0] << ", " << C[1] << ", " << C[2] << ", " << C[3] << "}" << endl;
        } else {
            cout << "No hay interseccion entre los rectangulos." << endl;
        }

        break;}
    case 17:{
        int num;
        cout << "Ingrese un numero: ";
        cin >>num;
        cout << "La suma es: "<<problema17(num)<<endl;
        break;}
    default:{
        break;}
    }
    return 0;
}
