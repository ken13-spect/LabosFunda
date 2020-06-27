#include <iostream>

using namespace std;

void matriz (float arg[])
{
    cout << endl;
    for (int n =0 ;n<5;n++)
    {
        cout << "Ingrese  las notas obtenidas por el estudiante: "; cin >> arg[n];
    }
    cout << endl;
}

float resul (float arreglo[])
{
    float suma = 0, porcentaje, final;

    for (int i = 0; i < 5; i++)
    {
        porcentaje = arreglo[i] * 0.20;
        suma += porcentaje;
    }
    final = suma;
    cout << "La nota final es: " << final << endl;
    if (final >= 6) {
        cout << endl;
        cout << "El estudiante ha APROBADO" << endl;
        cout << endl;
    }else{
        cout << endl;
        cout << "El estudiante ha REPROBADO" << endl;
        cout << endl;
    }
}

int main ()
{
    cout<<"CALCULADOR DE NOTA FINAL"<<endl;
    int n;
    float notas[5];
    cout << "Ingrese el numero de estudiantes que se deseen evaluar: ";
    cin >> n;
    for (int i= 0;i<n; i++)
    {
        cout <<"Calculo del promedio para el " << i+1 << " estudiante :" << endl;
        matriz (notas);
        resul (notas);
    }
    return 0;
}