#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
string m;
 char cstr[m.size() + 1];
  cout << "Ingrese una palabra:  " ;
    cin >> m;
	  strcpy(cstr, m.c_str());
    if(cstr[0]==cstr[m.size()-1]){
      cout << "La primera y la ultima letra de su palabra son las mismas.";
          cout << endl;
          cout << endl;
    }else{
            cout << "La primera y la ultima letra de su palabra no son iguales.";
          cout << endl;
          cout << endl;
    }
}