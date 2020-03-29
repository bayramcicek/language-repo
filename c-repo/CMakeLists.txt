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


        c00-intro.c
        #        c01-storage.c
        #        c02-variable.c
        #        c03-input.c
        #        c04-input-v2.c
        #        c05-input-v3.c
        #        c06-input-v4.c
        #        c07-input-v5.c
        #        c08-input-v6.c
        #        c09-operator.c
        #        c10-conditions.c
        #        c11-switch.c
        #        c12-for-global-static.c
        #        c13-recursive.c
        #        c14-array-pointer.c
        #        c14-array-pointer-v2.c
        #        c14-array-pointer-v3.c
        #        c14-array-pointer-v4.c
        #        c15-array-func.c
        #        c16-array-func.c
        #        c17-sizeof.c
        #        c18-strings.c
        #        c19-strings-v2.c
        #        c20-strings-v3.c
        #        c21-string-functions.c
        #        c22-string-h.c
        #        c23-string-func-v2.c
        #        c24-array-of-strings.c
        #        c25-func-pointers.c
        #        c26-array-of-func-pointers.c
        #        c27-void-pointer.c
        #        c28-func-void-ptr.c
        #        c29-func-pointer.c
        #        c30-struct.c
        #        c31-typedef.c
        #        c32-struct.c
        #        c33-ptrs-to-structures.c
        #        c34-struct-func.c
        #        c35-array-struct.c
        #        c36-onions.c
        #        c37-struct-union.c
        #        c38-ptr-unions.c
        #        c39-union-2.c
        #        c40-array-union.c
        #        c41-memory.c
        #        c42-memory2.c
        #        c43-calloc.c
        #        c44-realloc.c
        #        c45-memory-string.c
        #        c46-dynamic-arrays.c


        )

add_executable(Crepo ${SOURCE_FILES})
