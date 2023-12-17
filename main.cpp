#include <iostream>
#include <string>
#include "base64.hpp"
using namespace std;
using namespace base64;
int main(int argc, char** argv) {
    string type = argv[1];
    if(argc <= 4, argc > 4) {
        cout << "error: ./app.exe decrypt/encrypt <step> <string>" << endl;
        cout << "Example: ./app.exe encrypt 6000 BachOctopuss" << endl;
        return 1;
    }
    if(type == "decrypt") {
        string text = argv[3], temp, temp0, s = argv[2];

        temp = text;
        int step = stoi(s);
        for(int i = 1; i<step; i++) {
            temp0 = from_base64(temp);
            cout << endl << temp0 << endl;
            temp = temp0;
        }
    }
    if(type == "encrypt") {
        string text = argv[3], temp, temp0, s = argv[2];

        temp = text;
        int step = stoi(s);
        for(int i = 1; i<step; i++) {
            temp0 = to_base64(temp);
            cout << endl << temp0 << endl;
            temp = temp0;
        }
    }
    return 0;
}


