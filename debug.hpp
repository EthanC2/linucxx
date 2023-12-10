#pragma once

#define DPUTS(msg) \
    DPRINTF(msg)

#ifdef DEBUG
    #define DPRINTF(msg, ...)						\
	do								\
	{								\
	    fprintf(stderr, "[%s, line: %d] ", __FILE__, __LINE__);	\
	    fprintf(stderr, msg, __VA_ARGS__);				\
	} while (0)
#else
    #define DPRINTF(msg, ...)
#endif
