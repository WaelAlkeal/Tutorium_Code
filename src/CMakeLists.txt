project(src)

set(SOURCE_FILES
        Dummy.cpp
        Dummy.h
        Person.cpp
        Person.h
        Taschenrechner.cpp
        Taschenrechner.h

)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})