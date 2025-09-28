cmake_minimum_required(VERSION 3.19)
project(Test LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Multimedia MultimediaWidgets)

qt_standard_project_setup()

qt_add_executable(Test
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    task.h task.cpp
    taskmaneger.h taskmaneger.cpp
    resources.qrc




)
target_link_libraries(Test PRIVATE Qt6::Core Qt6::Widgets Qt6::Multimedia Qt6::MultimediaWidgets)

include(GNUInstallDirs)

install(TARGETS Test
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Test
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

qt6_add_resources(Test "resources"
    PREFIX "/"
    FILES
        resources/song1.mp3
        resources/song2.mp3
)
