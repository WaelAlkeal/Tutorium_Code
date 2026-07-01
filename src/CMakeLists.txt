project(src)

set(SOURCE_FILES
        Humidifier.cpp
        Humidifier.h
        HumidFSM.cpp
        HumidFSM.h
        CO2FSM.cpp
        CO2FSM.h
        AreaMonitor.cpp
        AreaMonitor.h
        FileHandler.cpp
        FileHandler.h
        CO2Messung.cpp
        CO2Messung.h
        IDispatcher.h


)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})