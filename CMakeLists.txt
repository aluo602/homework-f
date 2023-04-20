cmake_minimum_required(VERSION 3.25)

project(find VERSION 0.1 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(finddialog)

target_sources(finddialog
    PRIVATE
        main.cpp
        finddialog.ui

    PUBLIC

)

target_compile_features(finddialog PRIVATE cxx_std_20)

# Define target properties for Android with Qt 6 as:
#    set_property(TARGET finddialog APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation


target_link_libraries(finddialog
    PRIVATE
    Qt6::Widgets
)
