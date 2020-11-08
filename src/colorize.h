#ifndef CHEAT_COLORIZE_H
#define CHEAT_COLORIZE_H
#include <string>
#include <iostream>


namespace colorize {
    const std::string ESC = "\033[";
    const std::string DELIM = ";";
    const std::string END = "m";

    enum Foreground {
        DEFAULT_FG = -1,
        BLACK_FG = 30,
        RED_FG = 31,
        GREEN_FG = 32,
        YELLOW_FG = 33,
        BLUE_FG = 34,
        MAGENTA_FG = 35,
        CYAN_FG = 36,
        WHITE_FG = 37,
        GRAY_FG = 90
    };

    enum Background {
        DEFAULT_BG = -1,
        BLACK_BG = 40,
        RED_BG = 41,
        GREEN_BG = 42,
        YELLOW_BG = 43,
        BLUE_BG = 44,
        MAGENTA_BG = 45,
        CYAN_BG = 46,
        WHITE_BG = 47,
        GRAY_BG = 100
    };

    enum Font {
        DEFAULT = -1,
        NORMAL = 0,
        BOLD = 1,
        UNDERLINE = 4,
        INVERSE = 7,
        BOLD_OFF = 21,
        UNDERLINE_OFF = 24,
        INVERSE_OFF = 27
    };

    struct Style {
        Style(): fg(DEFAULT_FG), bg(DEFAULT_BG), font(DEFAULT) {};
        colorize::Foreground fg;
        colorize::Background bg;
        colorize::Font font;
    };

    std::string colorString(const std::string& inString, const colorize::Style& style);
    void printColor(const std::string& inString, std::ostream& ostream,
            const colorize::Style& style);
};


#endif
