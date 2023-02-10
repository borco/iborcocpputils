set(LIB_NAME iborcocpputils)

qt_add_library(${LIB_NAME} STATIC
    src/iborcocpputils/enumhelper.h
    src/iborcocpputils/singleton.h
)

target_link_libraries(${LIB_NAME} PUBLIC
    Qt6::Core
)

target_include_directories(${LIB_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/
)
