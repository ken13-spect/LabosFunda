#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
string murcielago(){// esta es la funcion encarga de codificar las letras que sean ingresadas
    char palabra[25];//Este es el arreglo que cree para almacenar la palabra o frase del usuario
    gets(palabra);
    int longt = strlen(palabra);// aqui estoy delimitando el arreglo
    for(int i = 0;i<longt;i++)
    {
      switch(palabra[i]){
          {  case 'm':
              palabra[i]='0';
              break;}

             { case 'u':
              palabra[i]='1';
              break;
          }
          {
              case 'r':
              palabra[i]='2';
              break;
          }
          {
              case 'c':
              palabra[i]='3';
              break;
          }
          {
              case 'i':
              palabra[i]='4';
              break;
          }
          {
              case 'e':
              palabra[i]='5';
              break;
          }
          {
              case 'l':
              palabra[i]='6';
              break;
          }
          {
              case 'a':
              palabra[i]='7';
              break;
          }
          {
              case 'g':
              palabra[i]='8';
              break;
          }
          {
              case 'o':
              palabra[i]='9';
              break;
          }
          default:
          palabra[i]=palabra[i];
      }
    }
    cout<<"La codificacion de la frase incresada es:"<<endl;
    cout<<palabra;
}
int main()
{
    cout<<"BIENVENIDO AL CODIFICADOR DE FRASES A CLAVE MURCIELAGO"<<endl;
    cout<<"Ingrese la frase que desee codificar:" << endl;
    murcielago();// mando a llamar la funcion

}