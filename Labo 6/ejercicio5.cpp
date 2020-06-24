#include <iostream>

using namespace std;
int main (){
    int n,i,contador,d;
    contador=0;
    cout << "Ingrese el tama\244o de su arreglo:"<< endl;
    cin>>n;
    int k[n];
    cout<<"Digite los " << n << " elementos de su arreglo:"<<endl;
    for(i=0;i <n;i++)
    cin>>k[i];
    cout<<endl;

    cout<<"Ingrese un numero,para verificar cuantas veces se repite en el arreglo:"<<endl;
    cin>>d;
    for(i=0;i<n;i++)
    { if(contador==0){
        n=0;
        cout << "El numero ingresado no se repite dentro de su arreglo" <<endl;
    }else {
        if(d==k[i]){
            contador ++;
          cout << "El numero "<< d << " se repite "<< contador << " veces"<<endl;  
        }
    } 

   
    }
     return 0;
}
   


   
   

