#include <iostream>

using namespace std;
int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin>>n;
if (n == 0){
    cout << "el numero" << n << "es nulo";
}else{
    if(n >= 0)
    {
        cout << "El numero" << endl << n << endl << "es positivo"<< endl;
    }else{
        cout << "El numero" << endl << n << endl << "es negativo"<< endl;
    }
}
}