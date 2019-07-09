#include <iostream>
#include <string>

#include "sheet.h"

using namespace std;

int main(int argc, char** argv) {
    string filename = argv[1];
    Sheet test_sheet(filename);
    test_sheet.print();
}
