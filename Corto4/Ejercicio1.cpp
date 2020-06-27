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
        if(palabra[i]=='m')
        palabra[i]='0';

        else if (palabra[i]=='u')
        palabra[i]='1';

        else if(palabra[i]=='r')
        palabra[i]='2';

        else if(palabra[i]=='c')
        palabra[i]='3';

        else if(palabra[i]=='i')
        palabra[i]='4';

        else if(palabra[i] =='e')
        palabra[i]='5';

        else if(palabra[i]=='l')
        palabra[i]='6';

        else if(palabra[i]=='a')
        palabra[i]='7';

        else if(palabra[i]=='g')
        palabra[i]='8';

        else if(palabra[i]=='0')
        palabra[i]='9';
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