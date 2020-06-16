#include <iostream>

using namespace std;
int Mcd(int mayor, int Menor, int residuo)
{
     cout <<"Digite el numero mayor:";
    cin>> mayor;
    cout <<"Digite el numero menor:";
    cin>>Menor;
    do
    { residuo= mayor % Menor;
    if(residuo!=0){
        mayor=Menor;
        Menor=residuo;
    }
    } while (residuo!=0);
    cout << "El MCD es:";
    return Menor;
}
int main(){
int mayor,Menor,residuo;
    cout<<"Calculador de MCD de dos numeros"<<endl;
    cout << Mcd(mayor,Menor, residuo) << endl;
}
