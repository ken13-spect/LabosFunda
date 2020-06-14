#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n,i,k,q;
    float Stotal,Ds,Da,Sreal,Renta;
    cout <<"CALCULO DE SALARIO" <<endl;
    cout << "Ingrese la cantidad de empleados a los cuales calculara el salario:"<< endl;
    cin>>n;

    for(i=n;i>0;i = i-1){
        cout << endl << endl;

cout << "Ingrese el numero de horas trabajadas:"<<endl;
cin>>k;
cout << "Ingrese el numero de horas extras realizadas:"<<endl;
cin>>q;

Stotal = (k*1.75)+(q*2.50);

cout << "El salario Total del empleado es de: $" << Stotal << endl;

Ds = Stotal*0.04;
Da = Stotal*0.0625;
Sreal = Stotal - Ds - Da;

if(Stotal>500){
    float Real;
    Renta = Sreal*0.1;
    Real = Stotal - Ds -Da - Renta;
     cout<<"El sueldo real del empleado es:$"<< Real <<endl;
     }else{

    cout<<"El sueldo real del empleado es: $"<< Sreal <<endl; ;
}

}
return 0;
}


