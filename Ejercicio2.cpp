#include <iostream>
using namespace std;
double CalculoMedia(double Estaturas[]);
void Comparacion(double Estaturas[], int MArriba, int MAbajo, double Media);
int main(){
    int MArriba=0, MAbajo=0;
    double Entrada,Estatura[25],Media;
    cout << "Promedio de Estatura de 25 Alumnos" << endl;
    for(int i=0;i<25;i++){
        cout << "Estatura del Alumno " << i+1 << endl;
        cin >>Entrada;
        Estatura[i] = Entrada;
    }
    Media = CalculoMedia(Estatura);
    cout << "La media es "<< Media << endl;
    Comparacion(Estatura,MArriba,MAbajo,Media);
    
}

double CalculoMedia(double Estaturas[]){
    double TEstaturas;
    for(int i=0;i<25;i++){
        TEstaturas += Estaturas[i];
    }
    TEstaturas = TEstaturas/25;
    return TEstaturas;
}

void Comparacion(double Estaturas[], int MArriba, int MAbajo, double Media){
    for(int i=0;i<25;i++){
        if(Estaturas[i]>Media){
            MArriba++;
        }else if(Estaturas[i]==Media){
            MArriba++;
        }else if(Estaturas[i]<Media){
            MAbajo++;
        }
    }
    cout << "Estaturas que se encuentran Arriba de la media: " << MArriba << endl;
    cout << "Estaturas que se encuentran Abajo de la media: " << MAbajo << endl;
}
