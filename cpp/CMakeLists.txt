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
        #        sololearn/s15_quiz_palindrome.cpp
        #        sololearn/s16_object.cpp
        #        sololearn/s17_class.cpp
        #        sololearn/s18_abstr_encaps.cpp
        #        sololearn/s19_access_specifiers.cpp
        #        sololearn/s20_constructors.cpp
        #        sololearn/s21_constructors_2.cpp
        #        sololearn/s22_quiz_queue_management.cpp
        #        sololearn/s23_class/MyClass.cpp
        #        sololearn/s23_class/MyClass.h
        #        sololearn/s24_destructor/s24_destructors.cpp
        #        sololearn/s24_destructor/s24_destructors.h
        #        sololearn/s25_const/s25_const.cpp
        #        sololearn/s25_const/s25_const.h
        #        sololearn/s26_initializers.cpp
        #        sololearn/s27_initializers/Init.cpp
        #        sololearn/s27_initializers/Init.h
        #        sololearn/s28_composition/Birthday.h
        #        sololearn/s28_composition/Person.cpp
        #        sololearn/s29_friend.cpp
        #        sololearn/s30_this.cpp
        #        sololearn/s31_operator_overloading.cpp
        #        sololearn/s32_quiz.cpp
        #        sololearn/s33_inheritance.cpp
        #        sololearn/s34_protected.cpp
        #        sololearn/s35_derived_const_dest.cpp
        #        sololearn/s36_polymorphisim.cpp
        #        sololearn/s37_virtual_func.cpp
        sololearn/s38_abstraction.cpp


        )
add_executable(cpp ${SOURCE_FILES})