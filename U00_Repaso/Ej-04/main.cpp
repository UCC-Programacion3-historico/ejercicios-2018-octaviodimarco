#include <iostream>

using namespace std;

int main() {
    int a,h,m,s;
    cout << "Ejercicio 00/04\n" << endl;
    cout<<"Ingrese el timepo en segundos"<<endl;
    cin>>a;

    h=a/3600;
    m=(a-h*3600)/60;
    s=a-(h*3600+m*60);

    cout<<a<<" segundos representan a "<<h<<" horas, "<<m<<" minutos y "<<s<<" segundos."<<endl;

    return 0;
}