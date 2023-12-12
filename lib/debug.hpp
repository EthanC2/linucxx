#pragma once

#include <stdio.h>

#ifdef DEBUG
    #define DPUTS(msg)								\
	do									\
	{									\
	    fprintf(stderr, "[%s, line %d] %s\n", __FILE__, __LINE__, msg);	\
	} while (0)
#else
    #define DPUTS(msg)
#endif

#ifdef DEBUG
    #define DPRINTF(msg, ...)						\
	do								\
	{								\
	    fprintf(stderr, "[%s, line %d] ", __FILE__, __LINE__);	\
	    fprintf(stderr, msg, __VA_ARGS__);				\
	} while (0)
#else
    #define DPRINTF(msg, ...)
#endif
