include("D:/C++/Qt/Test/build/Desktop_Qt_6_9_1_MinGW_64_bit-Realese/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/Test-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtmultimedia;qtmultimedia")

qt6_deploy_runtime_dependencies(
    EXECUTABLE D:/C++/Qt/Test/build/Desktop_Qt_6_9_1_MinGW_64_bit-Realese/Test.exe
    GENERATE_QT_CONF
)
