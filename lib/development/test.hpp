#pragma once

#define UNIT_TEST(function_invocation)															  \
    do																			  \
    {																			  \
	if (not function_invocation)															  \
	{																		  \
	    fprintf(stderr, "[base file: %s, file: %s, line %d] failed test case: \"%s\"\n", __BASE_FILE__, __FILE__, __LINE__, #function_invocation);    \
	}																		  \
    } while (0)

#define EXPECT(condition)																 \
    do																			 \
    {																			 \
	if (not (condition))																 \
	{																		 \
	    fprintf(stderr, "[base file: %s, file: %s, line %d] failed test case condition: \"%s\"\n", __BASE_FILE__, __FILE__, __LINE__, #condition);   \
	}								    										 \
    }																			 \
    while (0)
