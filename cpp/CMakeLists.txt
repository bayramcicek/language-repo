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
        sololearn/s05_datatypes.cpp

        )
add_executable(cpp ${SOURCE_FILES})