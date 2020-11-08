#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

#include "colorize.h"
#include "sheet.h"

using namespace std;

Sheet::Sheet(string name) {
    this->name = name;
    this->path = DEFAULT_CHEAT_SHEET_PATH + name;
    this->infile = ifstream(this->path);
    
    if (this->exists()) {
        std::ostringstream out;
        out << this->infile.rdbuf();
        this->data = out.str();
    } else {
        this->data = "Cheat sheet not found for " + this->name + "\n";
    }
}

Sheet::~Sheet() {

}

void Sheet::print() const {
    cout << this->data;
}

void Sheet::printColor() const {
    // TODO insert syntax highlighting here
    std::string tmp;
    std::stringstream ss(this->data);

    while (std::getline(ss, tmp, '\n')) {
        colorize::Style style;
        if (tmp[0] == '#') {
            style.fg = colorize::GRAY_FG;
        } else {
            style.fg = colorize::WHITE_FG;
        }
        colorize::printColor(tmp, cout, style);
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
    // TODO: List all available cheat sheets
    return vector<string>();
}

vector<string> list(const std::string &path) {
    // TODO: List files in the path
    return vector<string>();
}

