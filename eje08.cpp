#include <iostream>
using namespace std;

int numeromayor(int a, int b, int c){
    if(a >=b && a>=c){
        return a;
    } else if(b >=a && b >=c){
        return b;
    } else{
        return c;
    }
}
int main(){
    int a, b, c;
    cout<<"Ingrese el primer numero"<<endl;
    cin>> a;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>> b;
    cout<<"Ingrese el tercer numero"<<endl;
    cin>> c;
    cout<<"El numero mayor es:"<<numeromayor(a,b,c)<<endl;
    
    return 0;
}