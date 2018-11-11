#pragma once
#include <stdio.h>

#if !defined(NDEBUG)
    #define DEBUG_LOG(LOG) printf("[DEBUG_LOG]: %s \nIn function %s, from %s, line %d\n\n", LOG, __FUNCTION__, __FILE__, __LINE__);
#else
    #define DEBUG_LOG(LOG)
#endif
