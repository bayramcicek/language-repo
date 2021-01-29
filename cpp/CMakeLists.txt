cmake_minimum_required(VERSION 3.17)
project(cpp)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES
        #        odevler/w01_SayiTahmin.cpp
        #        odevler/w02_TekCift.cpp
        #        odevler/w03_OgrenciListesi-BayramCicek-01.cpp

        #        ./acikkaynakgelistirme/01_main.cpp
        #        ./acikkaynakgelistirme/01_MerhabaDunya.cpp
        #        ./acikkaynakgelistirme/02_variables.cpp
        #        ./acikkaynakgelistirme/03_classes.cpp
        #        ./acikkaynakgelistirme/03_workers.cpp
        #        ./acikkaynakgelistirme/03_inheritance.cpp
        #        ./acikkaynakgelistirme/03_polymorphism.cpp
        #        ./acikkaynakgelistirme/03_files.cpp
        #        ./acikkaynakgelistirme/03_exceptions.cpp

        #        sololearn/s00_first.cpp
        #        sololearn/s01_variables.cpp
        #        sololearn/s02_input.cpp
        #        sololearn/s03_arithmetic.cpp
        #        sololearn/s04_conditions.cpp
        #        sololearn/s05_datatypes.cpp
        #        sololearn/s06_arrays.cpp
        #        sololearn/s07_pointers.cpp
        #        sololearn/s08_memory.cpp
        #        sololearn/s09_sizeof.cpp
        #        sololearn/s09_quiz.cpp
        #        sololearn/s10_functions.cpp
        #        sololearn/s11_random.cpp
        #        sololearn/s12_overloading.cpp
        #        sololearn/s13_recursion.cpp
        #        sololearn/s14_array_and_functions.cpp
        sololearn/s15_quiz_palindrome.cpp


        )
add_executable(cpp ${SOURCE_FILES})