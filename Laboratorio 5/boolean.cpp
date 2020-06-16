#include <iostream>
using namespace std;

bool comparador (int a){
    if(a % 4 ==0 && a % 100 !=0 || a%4 ==0) return true;
    else return false;
}
int main(){
    int a;
    cout<< "Ingrese un a\244o :"<< endl;
    cin>>a;
    if(comparador(a)==true){
        cout<<"El a\244o ingresado es biciesto" << endl;
    }else{
        cout<<"El a\244o ingresado no es biciesto" << endl;
    }
}





        
      
   

