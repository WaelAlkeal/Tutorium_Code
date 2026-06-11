project(src)

set(SOURCE_FILES
        Dummy.cpp
        Dummy.h
        IShape.h
        Kreis.cpp
        Kreis.h
        Dreieck.cpp
        Dreieck.h
        Rechteck.cpp
        Rechteck.h

)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})