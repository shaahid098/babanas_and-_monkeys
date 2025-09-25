cmake_minimum_required(VERSION 3.24)
project(BananasAndMonkeys)

set(CMAKE_CXX_STANDARD 17)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    #check the compiler being used, if its not Microsoft Visual C then include files

    file(GLOB_RECURSE file_list "catch_string_manip.hpp" "catch_test_case_info.hpp" "catch_xmlwriter.cpp")
    # find files that are known to be missing include statement

    foreach(file ${file_list}) #iterate through said files

        file(READ ${file} file_contents) #open file

        string(FIND "${file_contents}" "#include <cstdint>" file_has_include) # check if file has include

        if(${file_has_include} EQUAL -1) # if file does not have include

            string(CONCAT new_file_contents "#include <cstdint>\n" "${file_contents}")
            #append file contents to the include

            file(WRITE ${file} "${new_file_contents}") # write to file with new contents
        endif()
    endforeach()
endif()

add_executable(Driver
        Driver.cpp
        Banana.h
        Banana.cpp
        Monkey.h
        Monkey.cpp
        )

add_executable( BananaTest
        tests/BananaTest.cpp
        Banana.cpp
        Banana.h)


add_executable( MonkeyTest
        tests/MonkeyTest.cpp
        Monkey.cpp
        Monkey.h
        Banana.cpp
        Banana.h)

target_link_libraries(BananaTest PRIVATE Catch2::Catch2WithMain)
target_link_libraries(MonkeyTest PRIVATE Catch2::Catch2WithMain)