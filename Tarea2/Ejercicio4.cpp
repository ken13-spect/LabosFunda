#include <iostream>
#include <string>


using namespace std;
int main(){
     int size,mag1;
     string palabra;

     cout << "Ingrese una palabra porfavor:  " ;
      cin >> palabra;
      size= palabra.size();
      mag1=size%2;
    if(size>10){
      cout << "el numero de caracteres de la palabra ingresada es: "<<size<<endl ;
      cout << "la palabra ingresada es mayor a 10 caracteres"<<endl ;
      if((mag1)==0){
          cout << "El numero de letras de la palabra ingresada es un numero par.";
          cout << endl;
          
        }else{
          cout << "El numero de letras de la palabra ingresada es un numero impar";
          cout << endl;
          
        }
    }else{
      cout << "la palabra ingresada es menor que 10 caracteres"<<endl ;
        if((mag1)==0){
          cout << "El numero de letras de la palabra ingresada es un numero par.";
          cout << endl;
          
        }else{
          cout << "El numero de letras de la palabra ingresada es un numero impar";
          cout << endl;
      
        }
    }
}