#pragma once

#define EXPECT(condition)																 \
    do																			 \
    {																			 \
	if (not (condition))																 \
	{																		 \
	    fprintf(stderr, "[base file: %s, file: %s, line %d] failed expected condition: \"%s\"\n", __BASE_FILE__, __FILE__, __LINE__, #condition);    \
	}								    										 \
    }																			 \
    while (0)
