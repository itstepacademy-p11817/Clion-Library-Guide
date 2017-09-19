//
// Created by Ihar Hudeev on 19/09/2017.
//

#include "library.h"

int mystrlen(const char * str) {
    char * ptr = (char *)str;
    while (*(str++) != 0);
    return (int)(str - ptr - 1);
