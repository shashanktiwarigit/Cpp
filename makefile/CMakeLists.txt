cmake_minimum_required(VERSION 3.9.1)
project(CMakeHello)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
if(${CMAKE_BUILD_TYPE} MATCHES Debug)
	message("Debug build")
elseif(${CMAKE_BUILD_TPYE} MATCHES Release)
	message("Release Build")
endif()
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
message(${CMAKE_BINARY_DIR})
add_executable(cmake_hello main.cc)
add_subdirectory(lib/math)
find_package(Boost 1.66)
# Check for libray, if found print message, include dirs and link libraries.
if(Boost_FOUND)
    message("Boost Found")
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(cmake_hello ${Boost_LIBRARIES})
elseif(NOT Boost_FOUND)
    error("Boost Not Found")
endif()
target_link_libraries(cmake_hello math)


#[[
cmake_minimum_required(VERSION 3.9.1)
project(CMakeHello)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
message(${CMAKE_BINARY_DIR})
add_subdirectory(lib/math)
add_executable(cmake_hello main.cc)
target_link_libraries(cmake_hello math)
]]



#[[
cmake_minimum_required(VERSION 3.9.1)
project(CMakeHello)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)
message(${CMAKE_BINARY_DIR})
add_library(math SHARED lib/math/operations.cpp)
#add_library(math STATIC lib/math/operations.cpp)
add_executable(cmake_hello main.cpp)
target_link_libraries(cmake_hello math)
]]


#[[
cmake_minimum_required(VERSION 3.9.1)
project(CMakeHello)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
message(${CMAKE_BINARY_DIR})
add_executable(cmake_hello main.cc)
add_subdirectory(lib/math)
find_package(Boost 1.66)
if(BOOST_FOUND)
	message("BOOST FOUND")
	include_directories(${BOOST_INCLUDE_DIRS})
	TARGET_LINK_LIBRARIES(cmake_hello ${BOOST_LIBRARIES})
elseif(NOT BOOST_FOUND)
	error("Boost Not Found")
endif()
target_link_libraries(cmake_hello math)
]]


#[[
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)
message(${CMAKE_BINARY_DIR})
add_library(math SHARED lib/math/operations.cc)
#add_library(math STATIC lib/math/operations.cc)
add_executable(cmake_hello main.cc)
target_link_libraries(cmake_hello math)
]]
