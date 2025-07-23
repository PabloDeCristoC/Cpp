#include <iostream>

bool ParNegativo(int n1){
    bool result = false; 
    if(n1%2 == 0 && n1){
         result = true;
    }
    return result;
}

bool DivisionExacta(int n1, int n2){
    bool result = false;
    if (n1%n2 == 0){
        result = true;
    }
    return result;
}


using namespace std;

int main(){
    int n1, n2;
    cout<<"Ingrese el numero n1: "; cin>>n1;
    cout<<"Ingrese el numero n2: "; cin>>n2;
    cout<<ParNegativo(n1);
    cout<<DivisionExacta(n1, n2);
    return 0;
}