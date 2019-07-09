#include <iostream>
#include <string>

#include "sheet.h"

using namespace std;

int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "No arguments provided!" << endl;
        exit(0);
    }
    string filename = argv[1];
    Sheet test_sheet(filename);
    test_sheet.print();
}

