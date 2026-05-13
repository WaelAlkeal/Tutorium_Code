project(src)

set(SOURCE_FILES
        Dummy.cpp
        Dummy.h
        SmartDevice.cpp
        SmartDevice.h

)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})