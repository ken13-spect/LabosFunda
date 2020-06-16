#include <iostream>
using namespace std;
bool M(int year){
    return(year%4==0 && year%100 !=0|| year % 400 ==0);
}
int DM(int mes, int year){
    int dias=31;
    if(mes== 4|| mes == 6||mes ==9||mes ==11){
        dias=30;
    }else{
        if(mes==2){
            if(M(year)){
                dias=29;
            }else{
             dias=28;   
            }
            }
            
        }
        return dias;
    }

int main(){
    int dia, mes, year;
cout << "Indicaciones:"<<endl;
cout<< "Ingrese la fecha segun se valla indicando y pulse para avanzar" <<endl;
cout << "Dia:" ; cin >> dia ; cout<<"Mes:"; cin >> mes; cout<<"A\244o:"; cin >> year; cout<< endl;

if(dia > 31 || mes > 12 ){
    cout <<"Fecha invalida!!! Por favor ingrese una fecha valida gracias:)" <<endl;}
    else{

dia ++;
if(dia > DM(mes,year) ){
    dia = 1;
    mes++;
    if(mes > 12){
        mes =1;
        year++;
    }
}




cout << "La fecha del dia siguiente es:" << endl;
if(dia < 10) cout << "0";
cout<< dia;
cout << '/';
if(mes > 10) cout << "0";
cout << mes ;
cout<< '/';
cout << year;
cout << endl;


}
}
