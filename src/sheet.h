#ifndef CHEAT_SHEET_H
#define CHEAT_SHEET_H
#include <string>
#include <vector>
#include <fstream>

const std::string DEFAULT_EDITOR = "vim";

const std::string DEFAULT_CHEAT_SHEET_PATH = std::string(getenv("HOME"))+"/.cheat/";


class Sheet {
    private:
        std::string name;
        std::string path;
        std::ifstream infile;
        std::string data;
        bool exists() const;

    public:
        Sheet(std::string name);

        ~Sheet();

        void print() const;
        void printColor() const;
        void edit() const;
};

std::vector<std::string> list();
std::vector<std::string> list(const std::string &path);

#endif

