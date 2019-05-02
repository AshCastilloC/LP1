#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> malapalabra;
    string word;
    bool found = false;

    malapalabra.push_back("shit");

    cout << "Ingresa una palabra: ";
    cin >> word;

    for(int i = 0; i < malapalabra.size(); i++) {
        if(malapalabra[i] == word) {
            found = true;
            break;
        }
    }
    if(found) {
        cout << "PIII";
    }else{
        cout << word;
    }
    return 0;
}
