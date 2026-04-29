project(src)

set(SOURCE_FILES
        Dummy.cpp
        Dummy.h

)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})