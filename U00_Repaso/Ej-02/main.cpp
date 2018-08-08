#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {

        Calculadora<int, long> micalc;
        Calculadora<float, double> micalcDouble;
        cout << "Ejercicio 00/02\n" << endl;
        cout<<micalc.sumar(2,2)<<endl;
        cout<<micalc.restar(2,3)<<endl;
        cout<<micalc.multiplicar(5,8)<<endl;

    try {
        cout<<micalc.dividir(4,0)<<endl;
    } catch (int e){
        cout<<"error: "<<e<<endl;
    }



        cout<<micalcDouble.sumar(2,2)<<endl;
        cout<<micalcDouble.restar(2,3)<<endl;
        cout<<micalcDouble.multiplicar(5,8)<<endl;
        cout<<micalcDouble.dividir(4,3)<<endl;
    return 0;
}