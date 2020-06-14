#include <iostream>
using namespace std;
int main(){
    int a;
    cout <<"Introduzca el a\244o a calcular:" << endl;
    cin>>a;

        if(a % 4 ==0 && a % 100 !=0 || a%4 ==0){
            cout <<"El a\244o es Biciesto"<< endl;
        }else{
            cout << "El a\244o no es Biciesto" << endl;
        }
    }
