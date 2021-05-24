//El objetivo del programa es permitir al usuario registrar el inventario de dispositivos que hay en la casa. Una vez que se tiene el inventario, se debe introducir la cantidad de horas que estuvo encendido cada dispositivo para luego calcular el total de consumo que tuvo la casa durante el mes

/* me falto explicar algunas líneas de código y extender la lista de string, 
mañana en el transcurso del día si me lo permite la enviaré terminada*/


/* el programa mostrará el consumo de 5 dispositivos eléctricos, los cuales son: 
a-termoducha 
b-cargador 
c-bombillo 
d-pantalla 
e-micro
*/

#include <iostream>
using namespace std;

int main() {  // inicia nuestro programa

//agrego las siguientes variables enteras que necesitaré en mi programa
int Total_de_horas=0; int entrada=0; int dispositivo_eléctrico;

string nombres[5];/* el string es para agregar los dispositivos en cadena de texto,
se le llama nombres y se le asigna un tamaño de 5 */

cout<<"igrese el dispositivo eléctrico a la lista  "<<endl; /*mensaje para 
indicar al usuario que agrgue un dispositivo a la lista, con un salto de 
línea al final para mejorar la legibilidad*/

//declaro las siguientes variables de tipo string para guardar y mostrar el nombre de los dispositivos ingresados
string a; string b;string c;string d;string e;

//ingreso los nombre, usando el ciclo white
int i=0;               // declaro la i como variable entera y la inicio en 0 

// luego ejecuto el ciclo white
while(i<5)             // la condición para que se ejecute es que i<5
{
cin>>nombres[i];      // agrego nombres a las posiciones de i, entre 0 y 4 ( total de 5 posiciones)
i++;                  // sumo en 1 el valor de i, hasta llegar a 4, ya que lo definí con ese tamaño 
}

cout<< endl <<endl;   // agrego dos saltos de línea, para mejorar la legibilidad
cout<< "los nombres ingresados son: " << endl;    // el programa muestra los 5 nombres ingresados

a=nombres[0];         // se le asiga a la variable a, el nombre ingresado en la posición 0 
cout<<a<<endl;        // se muestra el nombre guardado en la variable a, y agrego salto de línea para mejorar la legibilidad         
b=nombres[1];         // se le asiga a la variable b, el nombre ingresado en la posición 1
cout<<b<<endl;        // se muestra el nombre guardado en la variable b, y agrego salto de línea para mejorar la legibilidad

c=nombres[2];         // se le asiga a la variable a, el nombre ingresado en la posición 2 
cout<<c<<endl;        // se muestra el nombre guardado en la variable c, y agrego salto de línea para mejorar la legibilidad         
d=nombres[3];         // se le asiga a la variable b, el nombre ingresado en la posición 3
cout<<d<<endl;        // se muestra el nombre guardado en la variable d, y agrego salto de línea para mejorar la legibilidad

e=nombres[4];         // se le asiga a la variable b, el nombre ingresado en la posición 4
cout<<e<<endl;        // se muestra el nombre guardado en la variable e, y agrego salto de línea para mejorar la legibilidad

cout<<endl<<endl<<endl; // se generó 3 espacios con el retorno de carro

// ahora ingresaremos al programa las horas de cosumo de cada dispositivo
cout << "Escriba la cantidad de horas de consumo del siguiente dipositivo: \n" ;
cout<<a<<endl; 
cin>> entrada;       // ingreso las horas de consumo para el dispositivo mostrado en la varible a
cout <<"Las horas de consumo del dispositivo eléctrico  " <<a<< "  son de: "<<endl;cout<<entrada<< " horas"; // el programa muestra las horas de consumo ingresadas en el paso anterior
cout <<"\n""\n""\n";  // se generó 3 espacios con el retorno de carro


// se calcula el total de horas y se van contando las horas de todos los dispositivos
Total_de_horas= Total_de_horas+entrada;    // en este caso el total es el mismo valor que el agregado en la variable a, ya que es el primero, y la variable entrada se inicia en 0
cout <<"EL TOTAL DE HORAS DE CONSUMO EN EL HOGAR SON DE: "<<endl;
cout<<Total_de_horas<<" horas";     // se muestra el total de horas calculadas en el paso anterios
cout <<"\n""\n""\n";


// para los siguientes pasos la lógica es la misma que la anterios,por lo que mejor no voy a explicar el código, para no llenar el programa con más palabras

cout << "Escriba la cantidad de horas de consumo del siguiente dipositivo: \n" ;
cout<<b<<endl;
cin>> entrada ;
cout <<"Las horas de consumo del dispositivo eléctrico  " <<b<< "  son de: "<<endl;cout<<entrada<< " horas";
cout <<"\n""\n""\n";
Total_de_horas= Total_de_horas+entrada; 
cout <<"EL TOTAL DE HORAS DE CONSUMO EN EL HOGAR SON DE: "<<endl;
cout<<Total_de_horas<<" horas";
cout <<"\n""\n""\n";


cout << "Escriba la cantidad de horas de consumo del siguiente dipositivo: \n" ;
cout<<c<<endl;
cin>> entrada ;
cout <<"Las horas de consumo del dispositivo eléctrico  " <<c<< "  son de: "<<endl;cout<<entrada<< " horas";
cout <<"\n""\n""\n";
Total_de_horas= Total_de_horas+entrada; 
cout <<"EL TOTAL DE HORAS DE CONSUMO EN EL HOGAR SON DE: "<<endl;
cout<<Total_de_horas<<" horas";
cout <<"\n""\n""\n";


cout << "Escriba la cantidad de horas de consumo del siguiente dipositivo: \n" ;
cout<<d<<endl;
cin>> entrada ;
cout <<"Las horas de consumo del dispositivo eléctrico  " <<d<< "  son de: "<<endl;cout<<entrada<< " horas";
cout <<"\n""\n""\n";
Total_de_horas= Total_de_horas+entrada; 
cout <<"EL TOTAL DE HORAS DE CONSUMO EN EL HOGAR SON DE: "<<endl;
cout<<Total_de_horas<<" horas";
cout <<"\n""\n""\n";


cout << "Escriba la cantidad de horas de consumo del siguiente dipositivo: \n" ;
cout<<e<<endl;
cin>> entrada ;
cout <<"Las horas de consumo del dispositivo eléctrico  " <<e<< "  son de: "<<endl;cout<<entrada<< " horas";
cout <<"\n""\n""\n";
Total_de_horas= Total_de_horas+entrada; 
cout <<"EL TOTAL DE HORAS DE CONSUMO EN EL HOGAR SON DE: "<<endl;
cout<<Total_de_horas<<" horas";
cout <<"\n""\n""\n";


}
