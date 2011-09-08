#include <stdio.h>
#include <limits.h>
// Check windows
#if _WIN32 || _WIN64
#if _WIN64
#define BYTESIZE 32
#else
#define BYTESIZE 16
#endif
#endif

// Check GCC
#if __GNUC__
#if __x86_64__ || __ppc64__
#define BYTESIZE 32
#else
#define BYTESIZE 16
#endif
#endif

int main(int argc, char* argv[])
{
    // you see where I was going with that...
    // but everything is really just a constant from limits.h.
    // so it really isn't worth it
}