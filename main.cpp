#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int opcion=1;
    char caracter;
    while(opcion!=0){
        cout<<"Presione 1 para elegir ejercicios"<<endl;
        cout<<"Presione 2 para elegir problemas"<<endl;
        cout<<"Presione 0 para salir"<<endl;
        cin>>opcion;

        switch(opcion){
            int problema;
            case 1:{
            int ejercicio;
            cout<<"Ingrese el numero del ejercicio a probar"<<endl;
            cout<<"Ingrese 0 para retroceder"<<endl;
            cin>>ejercicio;
            switch (ejercicio) {
            case 1:{
                int A, B;
                cout<<"Ingrese numero A: ";
                cin>>A;
                cout<<"Ingrese numero B: ";
                cin>>B;
                cout<<"El residuo de la division "<<A<<"/"<<B<<" es: "<<A%B<<endl;
                break;
            }
            case 3:{
                int A, B;
                cout<<"Ingrese numero A: ";
                cin>>A;
                cout<<"Ingrese numero B: ";
                cin>>B;

                if (A>B) cout<<"El mayor es "<<A<<endl;
                else if (B>A) cout<<"El mayor es "<<B<<endl;
                else cout<<"Son el mismo numero"<<endl;
                break;
            }
            case 5:{
                int A,B,ent;float div;
                cout<<"Ingrese numero A: ";
                cin>>A;
                cout<<"Ingrese numero B: ";
                cin>>B;
                div = float (A)/B;
                ent = A/B;
                if (div-ent >= 0.5)
                    ent++;
                cout << A << '/' << B << '=' << ent << endl;
                break;
            }
            case 7:{
                int N;
                cout<<"Ingrese un numero: ";
                cin>>N;
                int suma=N*(N+1)/2;
                cout<<"La sumatoria desde 0 hasta "<<N<<" es: "<<suma<<endl;
                break;
            }
            case 9:{
                int N;
                float area, perimetro, pi=3.1416;
                cout<<"Ingrese un numero: ";
                cin>>N;
                perimetro=2*pi*N;
                area=pi*(N*N);
                cout<<"Perimetro: "<<perimetro<<endl;
                cout<<"Area: "<<area<<endl;
                break;
            }
            case 11:{
                int N;
                cout<<"Ingrese un numero: ";
                cin>>N;
                for (int i=1;i<=10;i++){
                    cout<<i<<'x'<<N<<'='<<i*N<<endl;
                }
                break;
            }
            case 13:{
                int N;
                cout<<"Ingrese un numero: ";
                cin>>N;

                for(int i=1;i<=N;i++){
                    if(N%i==0)cout<<i<<endl;
                }
                break;
            }
            case 15:{
                int suma=0;
                while(true){
                    int n;
                    cout<<"Ingrese un numero: ";
                    cin>>n;
                    suma+=n;
                    if (n==0) break;
                }
                cout<<"El resultado de la sumatoria es: "<<suma<<endl;
                break;
            }
            case 17:{
                float mayor=0;
                while(true){
                    int n;
                    cout<<"Ingrese un numero: ";
                    cin>>n;
                    if (n==0) {break;}
                    if(n>mayor) mayor=n;
                }
                cout<<"El numero mayor fue: "<<mayor<<endl;
                break;
            }
            case 19:{
                int n;bool primo=true;
                cout<<"Ingrese un numero: ";
                cin>>n;

                if (n == 0 || n == 1 || n == 4) {
                    primo=false;
                }
                else{
                    for (int x = 2; x < n / 2; x++) {
                        if (n % x == 0){
                        primo=false;
                        break;}
                    }
                }
                if (primo==true){
                    cout<<n<<" es un numero primo"<<endl;
                }else{
                    cout<<n<<" NO es un numero primo"<<endl;
                }
                break;
            }
            case 21:{
                char c,conv;
                cout<<"Ingrese una letra: ";
                cin>>c;
                if(c>=65 && c<=90){
                    conv=c+32;
                    cout<<"Letra convertida: "<<conv<<endl;
                }
                else if (c>=97 && c<=122){
                    conv=c-32;
                    cout<<"Letra convertida: "<<conv<<endl;
                }
                break;
            }
            case 23:{
                int A,B,i,max;
                cout<<"Ingrese un numero: ";
                cin>>A;
                cout<<"Ingrese un numero: ";
                cin>>B;
                if(A>B)max=A;
                else max=B;
                i=max;
                while ((max % A != 0) || (max % B != 0))
                        max+=i;
                cout<<"El MCM de "<<A<<" y "<<B<<" es: "<<max<<endl;
                break;
            }
            case 25:{
                int n,cont=1,copy;
                cout << "Ingrese un numero: ";
                cin>>n;
                copy=n;

                while(n>9){
                    n=n/10;
                    cont++;
                }
                cout<<copy<<" tiene "<<cont<<" digitos"<<endl;
                break;
            }
            case 27:{
                float num1,num2;char operador;
                cout << "Ingrese numero: ";
                cin>>num1;
                cout << "Ingrese operador: ";
                cin>>operador;
                cout << "Ingrese numero: ";
                cin>>num2;

                if(operador==43) cout<<num1<<operador<<num2<<'='<<num1+num2<<endl;
                else if (operador==45) cout<<num1<<operador<<num2<<'='<<num1-num2<<endl;
                else if (operador==47) cout<<num1<<operador<<num2<<'='<<num1/num2<<endl;
                else if (operador==120) cout<<num1<<operador<<num2<<'='<<num1*num2<<endl;
                else cout<<"Ingresรณ unoperador incorrecto"<<endl;
                break;
            }
            case 29:{
                int guess,min=0,max=100;

                while(true){
                    char operador;
                    srand(time(NULL));
                    guess=rand() % (max-min+1) + min;
                    cout<<guess<<endl;
                    cout<<"Simbolo: ";cin>>operador;

                    if(operador==61){
                        break;
                    }else if (operador==60 && max>guess){ //<
                        max=guess;
                    }else if (operador==62 && min<guess){ //>
                        min=guess;
                    }
                }
                break;
            }
            default:{
                if (ejercicio!=0){
                    cout<<"opcion no valida"<<endl;}
            }
            }
            break;
            }
            case 2:{
            cout<<"Ingrese el numero del problema a probar"<<endl;
            cout<<"Ingrese 0 para retroceder"<<endl;
            cin>>problema;
            switch (problema) {
                case 1:{
                    cout<<"Ingrese un caracter: ";
                    cin>>caracter;

                    if (caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u' ||
                        caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U'){
                        cout<<caracter<<" es una vocal"<<endl;
                    }
                    else if( caracter<65 || (caracter>90 && caracter<97) || (caracter>122)){
                        cout<<"No es una letra"<<endl;
                    }
                    else{
                        cout<<caracter<<" es una consonante"<<endl;
                    }
                    break;}
                case 3:{
                short int mes, dia;
                cout << "Ingrese mes y luego dia: ";
                cin >> mes >> dia;
                    if(dia>=1 && dia<=31 && mes>=1 && mes<=12){
                    if (mes==2){
                        if (dia<=28) cout <<"Fecha valida!"<<endl;
                        else if(dia==29) cout<<"Fecha valida en bisiesto" <<endl;
                        else cout << "Fecha invalida!" <<endl;
                    }
                    else if (mes<=7){
                        if (mes%2==1) cout << "Fecha valida!" <<endl;
                        else if (dia<=30) cout << "Fecha valida!" << endl;
                        else cout << "Fecha invalida!" <<endl;
                    }
                    }
                    else cout << "Fecha invalida!" <<endl;
                    break;}
                case 5:{
                    int num,fila,colum;
                    cout<<"Ingrese un numero impar: ";cin>>num;

                    for(fila=1;fila<=num;fila=fila+2){
                         for(colum=1;colum<=num-fila;colum=colum+2){
                            cout<<" ";}
                        for(colum=1;colum<=fila;colum++){
                            cout<<"*";}
                         cout<<endl;
                    }
                    for(fila=num-2;fila>=0;fila=fila-2){
                        for(colum=1;colum<=num-fila;colum=colum+2){
                            cout<<" ";}
                        for(colum=1;colum<=fila;colum++){
                            cout<<"*";}
                        cout<<endl;
                    }
                    break;
                }
                case 7:{
                    int n, num=1, aux, suma=0, ant=0;
                    cout << "Ingrese un numero: ";
                    cin >> n;
                    if (n>0){
                        while(num<n){
                            if (num%2==0){
                                suma+=num;
                            }
                            aux=num;
                            num+=ant;
                            ant=aux;
                        }
                        cout<<"El resultado de la suma es: "<<suma<<endl;
                    }else{
                        cout<<"Valor invalido"<<endl;
                    }
                    break;}
                case 9:{
                    int numero;
                    cout<<"Ingrese un numero: ";
                    cin>>numero;
                    int suma=0;
                    int digito;

                    while(numero>0){
                        digito=numero%10; //separa el ultimo digito
                        numero=numero/10;
                        int raiz=1;
                        for(int x=0;x<digito;x++){ //calcula la potencia
                            raiz*=digito;
                        }
                        suma+=raiz;
                    }
                    cout << "El resultado de la suma es: " << suma << endl;
                    break;}
                case 11:{
                int n,mul;
                bool band2=true,band;
                cout << "Ingrese un numero: ";
                            cin >> n;
                            for(int i=1;band2;i++){
                                mul=n*i;
                                band=true;
                                for(int j=n-1;band;j--){
                                    if(mul%j!=0) band=false;
                                    if(j==1){
                                        band=false;
                                        band2=false;
                                    }
                                }
                            }
                            cout << "El minimo comun multiplo de todos los enteros entre 1 y " << n << " es: " << mul<<endl;
                    break;}
                case 13:{
                    int num;
                    cout<<"ingrese un numero: ";
                    cin>>num;
                    int suma=0;

                    if (num<2){
                        cout<<"No existen primos menores al valor ingresado"<<endl;
                    }else{
                        for (int i=1;i<num;i++){
                            bool primo=true;
                            if (i == 0 || i == 1 || i == 4) {
                                primo=false;
                            }
                            else{
                                for (int x = 2; x < i / 2; x++) {
                                    if (i % x == 0){
                                    primo=false;
                                    break;}
                                }
                            }
                            if (primo==true){
                                suma+=i;
                            }
                        }
                        cout<<"El resultado de la suma es: "<<suma<<endl;
                    }
                    break;}
                case 15:{
                    int dim;
                    cout<<"Ingrese un numero impar: ";
                    cin>>dim;
                    int suma=1;
                    int diag=1; //tomarรก los valores de las diagonales
                    int i=2; //Cada cuantos numeros estรกn las diagonales

                    if(dim<=0 || dim%2==0){ //revisa la dimension sea impar
                        cout<<"Valor invalido"<<endl;
                    }else{
                        while(diag<dim*dim){ //mientras los numeros recorridos sean menores a la dimension
                            for(int x=1;x<=4;x++){ //recorre las 4 diagonales de cada capa
                                diag+=i; //cambia los valores de la diagonal
                                suma+=diag;
                            }
                            i+=2; //cada capa aumenta en dos numeros para llegar a la diagonal
                        }
                        cout<<"En una espiral de "<<dim<<"x"<<dim<<", la suma es: "<<suma<<endl;
                    }
                    break;}
                case 17:{
                    int triang,div=0,k,i=1,maxtriang;
                    cout<<"Ingrese un numero: ";
                    cin>>k;

                    while(div<k+1){
                        int cont=1;
                        triang=i*(i+1)/2;
                        for(int x=1;x<=triang/2;x++){
                            if(triang%x==0) cont++;
                        }
                        if(cont>div){
                            maxtriang=triang;
                            div=cont;
                        }
                        i++;
                    }
                    cout<<"El numero es: "<<maxtriang<<" que tiene "<<div<<" divisores"<<endl;
                    break;
                }
            default:{
                if (problema!=0){
                    cout<<"opcion no valida1"<<endl;}
            }
            break;
            }
            }
        }
    }
    return 0;
}
