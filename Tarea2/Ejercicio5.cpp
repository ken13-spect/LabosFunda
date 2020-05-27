#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    char l1, l2; 
    string palabra;
    cout << "Ingrese una palabra por favor: " << endl;
    cin >> palabra;
    
     l1 = palabra.front();
     l2 = palabra.back();
     if(l1 == l2)
     {
         cout <<"La primera y la ultima letra de su palabra son iguales " << endl;
         cout << endl;
         cout << endl;
     }else{
         cout <<"La primera y la ultima letra de su palabra no son iguales " << endl;
         cout << endl;
         cout << endl;
     }
}    