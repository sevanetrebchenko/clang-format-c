
// #pragma once

// // Header comment.

/* C-style comment. */

/**
 * Multiline C-style comment.
 **/
// #include "directory1/test.h"
// #include "header1.h"
// #include "header2.h"
#include <malloc.h>
#include <math.h>
#include <string.h>

// Nested preprocessor directives.
#ifndef DEFINE
    #define CONTROL
    #ifdef CONTROL
        #include <stdio.h>
    #else
        #include <string.h>
    #endif
#endif

#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define EVEN_LONGER_NAME (2)
// Comment.
#define foo(x)           (x * x)
#define bar(y, z)        (y + z)

#define foobar(x, y, z) (x * y * z)

#define A          \
    int aaaa;      \
    int b;         \
    int ccccccccc; \
    int d;

// This is a longer comment.
struct sample_struct_1 {
};

typedef struct sample_struct_2 {
    int i : 1;
    int f : 2;

    // Comment.
    int f2       : 3;
    int dddddddd : 4;
    // Comment.
    int i2       : 6;

    int i3 : 7;
    int f3 : 8;
} sample_struct_2;

typedef enum sample_enum {
    FIRST = 1,
    SECOND = 2,
    THIRD = 3,

    NUM_ELEMENTS
} sample_enum;

typedef union sample_union {
    int i;
    float f;
    char str[20];
} sample_union;

void function_types() {
    // Character.
    signed char signed_char = 'a';
    unsigned char unsigned_char = 'a';

    // Integer.
    signed int signed_int = 0;
    unsigned int unsigned_int = 0;

    // Short.
    signed short signed_short = 0;
    unsigned short unsigned_short = 0;

    // Long.
    signed long signed_long = 0;
    unsigned long unsigned_long = 0;

    // Floating point.
    float float_ = 0.0f;
    double double_ = 0.0;
    long double long_double = 0.0;

    // Pointers.
    void* void_pointer = NULL;
    const void* const_void_pointer = NULL;

    // Arrays.
    int int_array[5];
    float float_array[3] = { 1, 2, 3 };
    sample_struct_2 pod_array[3] = {
        { .i = 0, .f = 0.0f },
        { .i = 10, .f = 10.0f },
        { .i = 25, .f = 25.0f }
    };
}

void empty_function() {
}

void function_casting() {
    int integer = 15;
    float float_ = 10.0f;

    float integer_cast = (float) integer;
    int float_cast = (int) float_; // Truncated.

    void* pointer = NULL;
    sample_struct_2* struct_pointer = (sample_struct_2*) pointer;
}

void function_conditionals() {
    if (1) {
        printf("if");
    }
    else if (1 == 2) {
        printf("else if");
    }
    else {
        printf("else");
    }
}

void function_loops() {
    while (1) {
        printf("while");
    }

    do {
        printf("do while");
    }
    while (1);

    for (int i = 0; i < 10; ++i) {
        printf("for loop");
    }
}

void function_enum(sample_enum argument) {
    switch (argument) {
        case FIRST: {
            printf("FIRST");
            break;
        }
        case SECOND:
        case THIRD: {
            // Fallthrough.
            printf("Fallthrough SECOND / THIRD");
            break;
        }
        case NUM_ELEMENTS:
        default: {
            printf("DEFAULT");
            break;
        }
    }
}

void function_union() {
    sample_union u;

    u.i = 10;
    u.f = 15.0f;
    strcpy(u.str, "Test String");
}

void function_parameters_1(int first, float second, double third, sample_enum fourth, const sample_struct_2* longer_parameter_name) {
}

void function_parameters_2(int first, float second, double third) {
    function_parameters_1(first, second, third, FIRST, NULL);

    int integer = 0;

    int a_long_variable_name = 1 ? 2 : 3;
}

void function_array_of_structures() {
}