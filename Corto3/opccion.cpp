#include <iostream>

using namespace std;

int main(){
    
    int num,NumAdi= 13,k=0;// en este cas yo elegi el numero magico y lo guarde en una variable
    cout<<"Bienvenido al juego del numero magico"<< endl;
   cout<<"Indicaciones"<<endl;
   cout<<"Usted tendra 5 oportunidades para poder adivinar un numero elegido de manera aleatoria de entre el 1-100"<< endl;
cout<< "Si en algun momento desea parar el juego pulse 0"<< endl;
cout<< endl;
for(int i=0; i<5; i++)// utilze un for para poder contar la cantidad de veces que se tenia que repetir el bucle
    { 
        cout << "Intentos restantes :" << 5-i<< endl;

        cout << "Ingrese un numero:"<< endl;
        cin>>num;
        if(num==0){
          
            cout<<"Muchas gracias por participar";
            k=1;
            i=6;
        }else{
            if(num==NumAdi){
                cout<< "Felicidades usted ha adivinado el numero"<<endl;
                i=6;
                k=1;
            
        }else{
            if(num>NumAdi){
                cout<< "El numero ingresado es mayor a el numero magico"<<endl;
            }else{
                cout << "El numero ingresado es menor a el numero magico" << endl;
            }
        }
}


    }
    if(k==0){
    cout << "Mejor suerte para la proxima gracias por jugar";
}
return 0;
    }



    