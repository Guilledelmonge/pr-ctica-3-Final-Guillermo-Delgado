//El objetivo del programa es permitir al usuario registrar el inventario de dispositivos que hay en la casa. Una vez que se tiene el inventario, se debe introducir la cantidad de horas que estuvo encendido cada dispositivo para luego calcular el total de consumo que tuvo la casa durante el mes

/* me falto explicar algunas líneas de código y extender la lista de string, 
mañana en el transcurso del día si me lo permite la enviaré terminada*/

#include <iostream>
//#include <locale.h> //admite configuraciones específicas de localización
using namespace std;

int main() {  // inicia nuestro programa
int i=0;
int Total_de_horas=0;
int entrada;
int Bombillo_Led; int Microondas; 
int dispositivo_eléctrico;

string nombres[2];
cout<<"igrese el dispositivo  "<<endl;
string a;
string b;

while(i<2)
{
cin>>nombres[i];
i++;
}

cout<< endl <<endl;
cout<< "los nombres ingresados son: " << endl;

a=nombres[0];
cout<<a<<endl;
b=nombres[1];
cout<<b;
cout<<endl<<endl<<endl; // se generó 3 espacios con el retorno de carro


cout << "Escriba la cantidad de horas de consumo del siguiente dipositivo: \n" ;
cout<<a<<endl;
cin>> entrada;
cout <<"Las horas de consumo del dispositivo eléctrico  " <<a<< "  son de: "<<endl;cout<<entrada<< " horas";
cout <<"\n""\n""\n";
Total_de_horas= Total_de_horas+entrada;
cout <<"EL TOTAL DE HORAS DE CONSUMO EN EL HOGAR SON DE: "<<endl;
cout<<Total_de_horas<<" horas";
cout <<"\n""\n""\n";


cout << "Escriba la cantidad de horas de consumo del siguiente dipositivo: \n" ;
cout<<b<<endl;
cin>> entrada ;
cout <<"Las horas de consumo del dispositivo eléctrico  " <<b<< "  son de: "<<endl;cout<<entrada<< " horas";
cout <<"\n""\n""\n";
Total_de_horas= Total_de_horas+entrada;
cout <<"EL TOTAL DE HORAS DE CONSUMO EN EL HOGAR SON DE: "<<endl;
cout<<Total_de_horas<<" horas";
cout <<"\n""\n""\n";


}
