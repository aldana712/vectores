#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (){

    vector <int> vector1;
    vector1.push_back(1);
    vector1.push_back(3);
    for (auto numero = vector1.begin() ; numero != vector1.end(); numero ++){
        cout << *numero << endl;
    }

    vector1.pop_back();
    for (auto numero = vector1.begin(); numero != vector1.end(); numero ++)
    {
        cout << *numero << endl;
    }
    return 0;
    
}