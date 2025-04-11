cmake_minimum_required(VERSION 3.10)
project(BASEBALL-123)

set(CMAKE_CXX_STANDARD 17)

# 구글 테스트 설치 경로 (Homebrew)
include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/lib)

# 실행 파일 설정
add_executable(runTests
    baseball.cpp
    baseball_test.cpp
)

# GTest 링크
target_link_libraries(runTests gtest gtest_main pthread)
