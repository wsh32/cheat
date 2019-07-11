#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "sheet.h"

using namespace std;

Sheet::Sheet(string name) {
    this->name = name;
    this->path = DEFAULT_CHEAT_SHEET_PATH + name;
    this->infile = ifstream(this->path);
}

Sheet::~Sheet() {

}

void Sheet::print() const {
    if (this->exists()) {
        cout << this->infile.rdbuf();
    } else {
        cout << "Cheat sheet not found for " << this->name << endl;
    }
}

void Sheet::edit() const {
    string editor;

    if (getenv("EDITOR")) {
        editor = getenv("EDITOR");
    } else {
        editor = DEFAULT_EDITOR;
    }

    string cmd = editor + " " + this->path;
    cout << cmd << endl;
    std::system(cmd.c_str());
}

bool Sheet::exists() const {
    return this->infile.good();
}

vector<string> list() {
    return vector<string>();
}

vector<string> list(const std::string &path) {
    return vector<string>();
}

