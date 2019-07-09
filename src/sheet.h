#include <string>

#define CHEAT_SHEET_PATH "/etc/cheatsheets/"

class Sheet {
    private:
        std::string filename;

    public:
        Sheet(std::string filename);
        void print();
};
