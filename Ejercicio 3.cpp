#include <iostream>
#include <math.h>
 using namespace std;
 int main (){
   float a, b, c, x1, x2;  

    cout<<"ingrese a: ";
    cin>>a;
    cout<<"ingrese b: ";
    cin>>b;
    cout<<"ingrese c: ";
    cin>>c;

    x1 = (-b + sqrt(b * b - 4 * a * c))/ (2 *a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout<<" Respuesta positiva es: "<<x1;
    cout<<"\n" ;
    cout<<"Respuesta negativa es: "<<x2<<endl; 
 }

