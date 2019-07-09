#include <string>
#include <iostream>
#include <fstream>

#include "sheet.h"

using namespace std;

Sheet::Sheet(string filename) {
    this->filename = filename;
}

void Sheet::print() {
    cout << CHEAT_SHEET_PATH + this->filename << endl;
    ifstream ifs(CHEAT_SHEET_PATH + this->filename);
    cout << ifs.rdbuf();
}

