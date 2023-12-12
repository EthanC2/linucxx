#pragma once

#include <sys/types.h>

namespace linucxx::file
{
    /*
     *  SUMMARY:
     *	    Reads a line (including the newline character) from a open file `fd` 
     *	    into a dynamically-allocated buffer `buffer`. If the size of `buffer` (`maxlen`)
     *	    is insufficient to store the line of text, then the buffer is reallocated 
     *	    two a buffer twice its current length and the length `maxlen` is updated.
     *
     *  RETURNS:
     *	    The number of bytes read. 0 indicates EOF, -1 indicates an error.
     *
     *  NOTE:
     *	    This function implicitly null-terminates the string.
     * */
    ssize_t read_line(int fd, char** buffer, size_t *maxlen)
    {
	size_t i = 0;
	char ch;

	while ((ch) != getc)
    }
}
