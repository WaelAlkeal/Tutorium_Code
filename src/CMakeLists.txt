project(src)

set(SOURCE_FILES
        SmartDevice.cpp
        SmartDevice.h
        SmartDeviceFSM.cpp
        SmartDeviceFSM.h

)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})