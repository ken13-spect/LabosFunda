#include <iostream>
 
 using namespace std;
 int main(){
     int numero1, numero2;
     cout << "Ingrese el dividendo:" <<endl;
     cin>> numero1;
     cout << "Ingrese el divisor:" <<endl;
     cin>> numero2;
     if ( numero1 % numero2 == 0)
     {
         cout <<"El numero" <<endl<< numero1 << endl << "si es dibisible" <<endl;
     }else{
       cout <<"El numero" <<endl<< numero2 << endl << " no es dibisible" <<endl;
     }


}