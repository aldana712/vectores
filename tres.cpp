#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    vector <int> miVector = {9,8,7,22,31,76};
    int elemento;
    cout << "ingrese un elemento que desee buscar: ";
    cin >> elemento;

    auto iterador= find(miVector.begin(), miVector.end(), elemento);
    if (iterador != miVector.end() ){
        cout <<"Elemento encontrado en la posicion:  "<< distance(miVector.begin(), iterador)<< endl;
        miVector.erase(iterador);
        cout <<"Elemento eliminado" << endl;
    }
    else{
        cout <<"Elemento no encontrado" << endl;
    }

    for (int numero : miVector){
        cout << numero <<" "<<endl;
    }
    
}