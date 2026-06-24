project(src)

set(SOURCE_FILES
        IInternetProvider.h
        DSLProvider.cpp
        DSLProvider.h
        FiberProvider.cpp
        FiberProvider.h
        Vergleicher.cpp
        Vergleicher.h

)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})