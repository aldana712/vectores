#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){


    vector <int> vector2 = {2,3,3,78,1,45,9};

    cout << "vector original: " << endl;

    for(int numero : vector2){
        cout << numero <<" " <<endl;
    }

    vector2.erase(vector2.begin(), vector2.begin()+3);
    
    cout << "vector modificado: "<< endl;
    for (int numero : vector2){
        cout << numero <<" "<< endl;
    }


    return 0;
 }