#ifndef CHEAT_SHEET_H
#define CHEAT_SHEET_H
#include <string>
#include <vector>
#include <fstream>

#define DEFAULT_CHEAT_SHEET_PATH "/etc/cheatsheets/"

class Sheet {
    private:
        std::string name;
        std::string path;
        std::ifstream infile;
        bool exists() const;

    public:
        Sheet(std::string name);

        ~Sheet();

        void print() const;
        void edit() const;
};

std::vector<std::string> list();
std::vector<std::string> list(const std::string &path);

#endif

