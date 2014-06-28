/* Copyright (C) 2014 Leslie Zhai <xiang.zhai@i-soft.com.cn> */

#include <stdio.h>
#include <iconv.h>

#include "myiconv.h"

char *myiconv(const char *tocode, const char *fromcode, const char *from) 
{
    char *to = NULL;
    size_t from_size, to_size;
    iconv_t i;
    i = iconv_open(tocode, fromcode);
    if (i == -1) 
        return to;
    to_size = from_size = strlen(from);
    to = malloc(to_size);
    if (!to) 
        return to;
    iconv(i, &from, &from_size, &to, &to_size);
    iconv_close(i);
    return to;
}
