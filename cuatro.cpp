#include <iostream>
#include <vector>
#include <algorithm> // Necesario para la función find

using namespace std;

int main() {
    vector<int> miVector = {2, 2, 3, 4, 22};
    vector<int>::iterator iter;
    int elemento;

    miVector.push_back(8);
    miVector.push_back(5);

    cout << "Vector original" << endl;
    for (iter = miVector.begin(); iter != miVector.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    miVector.erase(miVector.begin(), miVector.begin() + 3);

    cout << "Vector modificado" << endl;
    for (iter = miVector.begin(); iter != miVector.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "Ingrese un elemento que desea buscar: ";
    cin >> elemento;

    iter = find(miVector.begin(), miVector.end(), elemento);

    if (iter != miVector.end()) {
        cout << "Elemento encontrado en la posicion: " << distance(miVector.begin(), iter) << endl;
        miVector.erase(iter);
        cout << "Elemento eliminado" << endl;
    } else {
        cout << "Elemento no encontrado" << endl;
    }

    cout << "Vector modificado" << endl;
    for (iter = miVector.begin(); iter != miVector.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
