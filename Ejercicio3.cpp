#include <iostream>
using namespace std;
void IngresoNotas(float Notas[]);
float CalculoNotas(float Notas[],float Ponderacion,int Tamano);
int main(){
	int Tamano;
	float Notas[5],Ponderacion,aprobacion;
	cout<<"Ingrese cantidad de alumnos:";
	cin>>Tamano;
  cout<<"Ingrese la nota para aprobar el curso: " << endl;
	cin >> aprobacion;
	float Estudiantes[Tamano];
	for(int i=0;i<Tamano;i++){
		IngresoNotas(Notas);
		Estudiantes[i] = CalculoNotas(Notas,Ponderacion,Tamano);
		if(Estudiantes[i]>=aprobacion){
			cout << "El estudiante ha aprobado" << endl;
		}else{
			cout << "El estudiante he reprobado" << endl;
		}
	}
}

void IngresoNotas(float Notas[]){
	float Entrada;
	for(int i=0;i<5;i++){
		cout<<"Ingrese la nota" << i+1 << endl;
		cin >>Entrada;
    Notas[i] = Entrada;
	}
}

float CalculoNotas(float Notas[], float Ponderacion,int Tamano){
	float Calculo;
	for(int i=0;i<5;i++){
		Calculo=Notas[i]*0.20;
		Ponderacion += Calculo;
	}
	return Ponderacion;
}
