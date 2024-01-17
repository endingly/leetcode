file(GLOB_RECURSE leetcode_file "*.cpp")
add_executable(${PROJECT_NAME} ${leetcode_file})
find_package(GTest CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest GTest::gtest_main)