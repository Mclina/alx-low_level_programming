0x0A. C - argc, argv

argv and argc are how command line arguments are passed to main() in C and C++.

argc will be the number of strings pointed to by argv. This will (in practice) be 1 plus the number of arguments, as virtually all implementations will prepend the name of the program to the array.

