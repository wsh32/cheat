#include <cstring>
#include <iostream>
#include <string>

#include "sheet.h"

using namespace std;

int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "No arguments provided!" << endl;
        exit(0);
    }
    if (string(argv[1]) == "-e") {
        string filename = argv[2];
        Sheet test_sheet(filename);
        test_sheet.edit();
    } else if (string(argv[1]) == "-l") {
        for (string sheet : list()) {
            cout << sheet << endl;
        }
    } else {
        string filename = argv[1];
        Sheet test_sheet(filename);
        test_sheet.print();
    }
}

