cmake_minimum_required(VERSION 3.10)
project(MyGTestProject)

# Activer le support de C++11
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Répertoire des sources de GoogleTest
# A mettre à jour en fonction de votre configuration
set(GTEST_DIR ${CMAKE_SOURCE_DIR}/googletest/googletest)
set(GTEST_LIB ${CMAKE_SOURCE_DIR}/googletest/lib)

# Ajouter les headers de GoogleTest
include_directories(${GTEST_DIR}/include)

# Ajouter les fichiers source
set(SOURCES
    codeTP2/Calculator.cpp
    testTP2.cpp
)


# Créer l'exécutable
add_executable(mytest.out ${SOURCES})

# Ajouter les options de compilation
target_compile_options(mytest.out PRIVATE -Wall -Wextra -pthread -g)

# Lier les bibliothèques statiques de GTest
target_link_libraries(mytest.out
    ${GTEST_LIB}/libgtest.a
    ${GTEST_LIB}/libgtest_main.a
    pthread
)