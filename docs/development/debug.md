# Debugging Functions
Half of time you spend programming is debugging. And half of the time spent debugging is writing print statements to view the data and transformations
that occur on said data. The `debug.hpp` header provides the `DPUTS(msg)` and `DPRINTF(msg, ...)` that print a message along with the filename and line number.
If `DEBUG` is not defined, then the macros expand to nothing.
