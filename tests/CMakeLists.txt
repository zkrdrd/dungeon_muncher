cmake_minimum_required(VERSION 3.10)
project(CharacterTest)

# Настройка Google Test
find_package(GTest REQUIRED)
include(GoogleTest)

set(CMAKE_BUILD_TYPE Debug) 

# Указываем директорию с заголовочными файлами (например, include/)
include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/entities
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/specifications
)

# --- Тест персонажа (character_test) --- 
# Добавление исполняемого файла теста
add_executable(character_test 
    character_test.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/../entities/character.cpp
)

# Линковка Google Test
target_link_libraries(character_test GTest::GTest GTest::Main)

# Добавление теста в CTest
gtest_discover_tests(
    character_test
    PROPERTIES
    TIMEOUT 10
    LABELS "UnitTests"
    DISCOVERY_MODE PRE_TEST
)
#set(CTEST_OUTPUT_JUNIT "results.xml")

# --- ---