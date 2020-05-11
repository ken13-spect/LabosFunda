#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()  {
    string nombre;
    double cant,prec,gast;
     cout<<"ingrese el nombre de el producto: ";
     cin>>nombre;
     cout<<"ingrese la cantidad de producto comprado: ";
     cin>>cant;
     cout<<"ingrese el precio de el producto: ";
     cin>>prec;
      gast=prec*cant;
      cout << fixed;
     cout<<"el total gastado en "<<nombre<<" fue de: "<<setprecision(2)<<gast<<"$"<<endl;

}
