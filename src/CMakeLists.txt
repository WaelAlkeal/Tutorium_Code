project(src)

set(SOURCE_FILES
        Vater.cpp
        Vater.h
        Mutter.cpp
        Mutter.h
        Sohn.cpp
        Sohn.h

)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})