cc_binary(
    name = "cheat",
    srcs = [
        "cheat.cpp",
    ],
    deps = [
        ":sheet",
        ":colorize",
    ],
)

cc_library(
    name = "sheet",
    srcs = [
        "sheet.cpp",
    ],
    hdrs = [
        "sheet.h",
    ],
    deps = [
        ":colorize",
    ],
)

cc_library(
    name = "colorize",
    srcs = [
        "colorize.cpp",
    ],
    hdrs = [
        "colorize.h",
    ],
)
