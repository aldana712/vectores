#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    typedef map <int, string> map1;

    map1 mapa;
    map1 mapa2;
    int num = 4;
    vector<pair<int,string>> elementos = {
        {1, "Uno"},
        {2, "Dos"},
        {3, "Tres"},
        {4, "Cuatro"},
        {5, "Cinco"}
    };

    // Insertar elementos en el mapa en orden aleatorio
    for (const auto& elemento : elementos) {
       mapa.insert(elemento);
    }

    // Imprimir el mapa
    cout << "Mapa original:" << endl;
    for (const auto& par : mapa) {
        cout << par.first << ": " << par.second << endl;
    }

    cout << "Mapa dos: " <<endl;
    mapa2.insert(mapa.begin(), mapa.end());
    for (const auto &entry :mapa2 )
    {
        cout << "{ "<<entry.first<< " , " <<entry.second << " }"<<endl;
    }

    auto iter = mapa2.begin();
    while(iter != mapa2.end()&& iter->first<=3){
       iter = mapa2.erase(iter);
    }
    cout << "Mapa modificado: "<<endl;
    for (const auto &par : mapa2){
        cout << "{" << par.first << ", " << par.second << "}" <<endl;
    }

    auto iterEliminar = mapa2.begin();
    while (iterEliminar != mapa2.end()) {
        if (iterEliminar->first == num) {
            iterEliminar = mapa2.erase(iterEliminar);
        } else {
            ++iterEliminar;
        }
    }
    cout <<"mapa sin elemento con valor 4: "<<endl;
    for (const auto &par : mapa2){
        cout << "{" << par.first << ", " << par.second << "}" <<endl;
    }    
    return 0;
}