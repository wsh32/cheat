#include <string>

#include "colorize.h"


std::string colorize::colorString(const std::string& inString, 
        const colorize::Style& style) {
    // TODO: return formatted string
    return colorize::ESC + std::to_string(style.fg) + colorize::DELIM + 
        std::to_string(style.bg) + colorize::DELIM + std::to_string(style.font) + 
        colorize::END + inString + colorize::ESC + std::to_string(colorize::NORMAL) + 
        colorize::END;
}

void colorize::printColor(const std::string& inString, std::ostream& ostream,
        const colorize::Style& style) {
    // TODO: print formatted string
    ostream << colorize::colorString(inString, style);
}

