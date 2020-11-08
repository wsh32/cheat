#include <string>
#include <sstream>

#include "colorize.h"


std::string colorize::colorString(const std::string& inString, 
        const colorize::Style& style) {
    std::ostringstream outString;

    bool started = false;

    // Foreground styling
    if (style.fg != colorize::DEFAULT_FG) {
        if (!started) {
            outString << colorize::ESC;
            started = true;
        } else {
            outString << colorize::DELIM;
        }
        outString << std::to_string(style.fg);
    }

    // Background styling
    if (style.bg != colorize::DEFAULT_BG) {
        if (!started) {
            outString << colorize::ESC;
            started = true;
        } else {
            outString << colorize::DELIM;
        }
        outString << std::to_string(style.bg);
    }

    // Font styling
    if (style.font != colorize::DEFAULT) {
        if (!started) {
            outString << colorize::ESC;
            started = true;
        } else {
            outString << colorize::DELIM;
        }
        outString << std::to_string(style.font);
    }

    // add end of style block
    if (started) {
        outString << colorize::END;
    }

    // add text
    outString << inString;

    // add re-default
    if (started) {
        outString << colorize::ESC << std::to_string(colorize::NORMAL) << colorize::END;
    }

    return outString.str();
}

void colorize::printColor(const std::string& inString, std::ostream& ostream,
        const colorize::Style& style) {
    ostream << colorize::colorString(inString, style) << std::endl;
}

