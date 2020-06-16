#include <iostream>
using namespace std;

int main(){
    int h,m,s;
    cout << "Indicaciones:"<<endl;
    cout<<" Ingrese la hora segun se le vaya indicando y pulse  para seguir"<< endl;
    cout<<"Ingrese la hora deseada en formato de 24 horas:" << endl;

    cout <<"Hora:" ; cin >> h ;cout<<"Minutos:"; cin >> m; cout<<"Segundos:";cin>> s;
   if(h > 24 || m > 60 ||s > 60){
       cout << "Hora ingresada no valida!! Ingrese una hora valida por favor:)";
   }else{
    s = s +1;
    if(s >= 60){
        s =0;
        m = m + 1;
        if(m >=60){
            m = 0;
            h = h + 1;
            if(h >= 24){
                h =0;
            }
    
            }
        }
        cout << "La hora un segundo despues es:" << endl;
    if(h < 10 ) cout << "0";
    cout << h;
    cout << ":" ;
    if(m < 10) cout << "0";
    cout<< m ;
    cout<< ":";
    if (s < 10) cout <<"0";
    cout << s ;

    
    }
}

    

    
