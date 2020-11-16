cmake_minimum_required(VERSION 3.12)
project(Crepo C)

set(CMAKE_C_STANDARD 11)
set(SOURCE_FILES

        #        ders/veri-005-binary-search-tree.c
        #        ders/veri-004-lists-2.c
        #        ders/veri-003-lists.c
        #        ders/veri-002-arrays-and-pointers-2.c
        #        ders/test00.c
        #        ders/veri-odev-1-bayram-cicek.c
        #        ders/main.c
        #        ders/veri-odev-2.c
        #        ders/veri-odev-2-re1.c
        #        ders/cpl00.c
        #        ders/cpl01.c
        #        ders/hackerrank000.c
        #        ders/test01-static.c


        #        c_tutorial/c00-intro.c
        #        c_tutorial/c01-storage.c
        #        c_tutorial/c02-variable.c
        #        c_tutorial/c03-input.c
        #        c_tutorial/c04-input-v2.c
        #        c_tutorial/c05-input-v3.c
        #        c_tutorial/c06-input-v4.c
        #        c_tutorial/c07-input-v5.c
        #        c_tutorial/c08-input-v6.c
        #        c_tutorial/c_tutorial/c09-operator.c
        #        c_tutorial/c10-conditions.c
        #        c_tutorial/c11-switch.c
        #        c_tutorial/c12-for-global-static.c
        #        c_tutorial/c13-recursive.c
        #        c_tutorial/c14-array-pointer.c
        #        c_tutorial/c14-array-pointer-v2.c
        #        c_tutorial/c14-array-pointer-v3.c
        #        c_tutorial/c14-array-pointer-v4.c
        #        c_tutorial/c15-array-func.c
        #        c_tutorial/c16-array-func.c
        #        c_tutorial/c17-sizeof.c
        #        c_tutorial/c18-strings.c
        #        c_tutorial/c19-strings-v2.c
        #        c_tutorial/c20-strings-v3.c
        #        c_tutorial/c21-string-functions.c
        #        c_tutorial/c22-string-h.c
        #        c_tutorial/c23-string-func-v2.c
        #        c_tutorial/c24-array-of-strings.c
        #        c_tutorial/c25-func-pointers.c
        #        c_tutorial/c26-array-of-func-pointers.c
        #        c_tutorial/c27-void-pointer.c
        #        c_tutorial/c28-func-void-ptr.c
        #        c_tutorial/c29-func-pointer.c
        #        c_tutorial/c30-struct.c
        #        c_tutorial/c31-typedef.c
        #        c_tutorial/c32-struct.c
        #        c_tutorial/c33-ptrs-to-structures.c
        #        c_tutorial/c34-struct-func.c
        #        c_tutorial/c35-array-struct.c
        #        c_tutorial/c36-onions.c
        #        c_tutorial/c37-struct-union.c
        #        c_tutorial/c38-ptr-unions.c
        #        c_tutorial/c39-union-2.c
        #        c_tutorial/c40-array-union.c
        #        c_tutorial/c41-memory.c
        #        c_tutorial/c42-memory2.c
        #        c_tutorial/c43-calloc.c
        #        c_tutorial/c44-realloc.c
        #        c_tutorial/c45-memory-string.c
        #        c_tutorial/c46-dynamic-arrays.c

        #        dc_fall_2020/week01/dynamic_array_allocation_one_dimen.c
        #        dc_fall_2020/week01/dynamic_array_allocation_two_dimen.c
        #        dc_fall_2020/week02-03/MatrisCarpimiDinamik.c
        #        dc_fall_2020/week02-03/MatrisCarpimiStatik.c
        #        dc_fall_2020/week04-05/liste.c
        #        dc_fall_2020/week04-05/liste_ders.c
        #        dc_fall_2020/week06/ciftYonluListe.c
        dc_fall_2020/week06/ikiliAramaAgaci.c

        )

add_executable(Crepo ${SOURCE_FILES})
