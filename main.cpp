#include <iostream>
#include <math.h>
using namespace std;
int main() {

float radio,area,perimetro;
      cout<< "Ingrese el radio del circulo en centimetros: ";
      cin>>radio;
      area=3.1416*(pow(radio,2));
      perimetro=2*3.1416*radio;
      cout<<"el area de el circulo es de: "<< area<<"cm"<<endl;
      cout<<"el perimetro de el circulo es de: "<<perimetro<<"cm"<<endl<<endl;
}