#include <iostream>
using  namespace std;
int mayor=0,menor=0;//contadores
    
float promedio(double estat[]){
    
    float suma=0.00;
    float promedio=0.00;
    for(int i=0;i<25;i++){
        suma +=estat[i];
    }
    suma =suma/25.00;
    promedio=suma;
    cout<<"El promedio de las "<< 25 << " estaruras ingresadas es de:" <<promedio << " cm"<<endl;
    cout<<endl;
    return promedio;
}
void comparacion(double est[],float promedio)
{
    for(int c=0;c<25;c++){
        if(est[c]<promedio){
            menor +=1;
        }else{
            mayor +=1;
        }
    }
}


int main (){
    cout<<"CALCULADOR DEL PROMEDIO DE ESTATURA DE UNA CLASE DE 25 ALUMNOS"<<endl;
    double estatura[25];
    for(int n=0;n<25;n++){
    cout <<"Ingrese la estatura del "<< n+1 <<" estudiante en cm:"<<endl;
    cin>>estatura[n];
    }
    float prom =promedio(estatura);//la guardo dentro de prom, para liego poderla poner en la funcion comparacion
    comparacion(estatura,prom);
    cout<< "El numero estudiantes con altura arriba del promedio es:"<< mayor << endl;
    cout<<endl;
    cout<< "El numero estudiantes con altura por debajo del promedio es:"<< menor << endl;
    cout <<endl;

    return 0;
    
}
    


 



