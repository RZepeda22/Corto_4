#include <iostream>
#include <cstring>
using namespace std;
void Ingreso(char palabra[],int tamano);
void Codificacion(char palabra[],char codificada[], int tamano);
void Imprimir(char palabra[], char codificada[],int tamano);
int main(){
    int tamano;
    cout << "Ingrese el tamano de letras a codificar:" << endl;
    cin >> tamano;
    char palabra[tamano];
    char codificacion[tamano];
    Ingreso(palabra,tamano);
    Codificacion(palabra,codificacion,tamano);
    Imprimir(palabra,codificacion,tamano);
    
    return 0;
}
void Ingreso(char palabra[],int tamano){
    cout << "Ingrese la palabra a codificar" << endl;
    cin.ignore();
    cin.getline(palabra,tamano+1,'\n');
}

void Codificacion(char palabra[],char codificada[], int tamano){
    char caracter;
    for(int i=0;i<tamano;i++){
        caracter=palabra[i];
        if(caracter==77||caracter==109){
            codificada[i] = '0';
        }else if(caracter==85||caracter==117){
            codificada[i] = '1';
        }else if(caracter==82||caracter==114){
            codificada[i] = '2';
        }else if(caracter==67||caracter==99){
            codificada[i] = '3';
        }else if(caracter==73||caracter==105){
            codificada[i] = '4';
        }else if(caracter==69||caracter==101){
            codificada[i] = '5';
        }else if(caracter==76||caracter==108){
            codificada[i] = '6';
        }else if(caracter==65||caracter==97){
            codificada[i] = '7';
        }else if(caracter==71||caracter==103){
            codificada[i] = '8';
        }else if(caracter==79||caracter==111){
            codificada[i] = '9';
        }else{
            codificada[i] = palabra[i];
        }
    }

}

void Imprimir(char palabra[], char codificada[], int tamano){
    cout << "La frase: ";
    for(int x=0;x<tamano;x++){
        cout << palabra[x];
    } 
    cout << " siendo codificada nos da el resultado: " << endl;
    for(int y=0;y<tamano;y++){
        cout << codificada[y];
    }
}
