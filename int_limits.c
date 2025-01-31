#include <stdio.h>
#include <limits.h>  // For integer limits
#include <float.h>   // For floating-point limits

int main() {
    // Integer Types
    printf("Integer Limits:\n");
    printf("CHAR_BIT: %d (Number of bits in a char)\n", CHAR_BIT);
    printf("SCHAR_MIN: %d (Signed char minimum)\n", SCHAR_MIN);
    printf("SCHAR_MAX: %d (Signed char maximum)\n", SCHAR_MAX);
    printf("UCHAR_MAX: %u (Unsigned char maximum)\n", UCHAR_MAX);
    printf("CHAR_MIN: %d (Char minimum)\n", CHAR_MIN);  // Depending on platform, char may be signed/unsigned
    printf("CHAR_MAX: %d (Char maximum)\n", CHAR_MAX);
    printf("SHRT_MIN: %d (Short minimum)\n", SHRT_MIN);
    printf("SHRT_MAX: %d (Short maximum)\n", SHRT_MAX);
    printf("USHRT_MAX: %u (Unsigned short maximum)\n", USHRT_MAX);
    printf("INT_MIN: %d (Int minimum)\n", INT_MIN);
    printf("INT_MAX: %d (Int maximum)\n", INT_MAX);
    printf("UINT_MAX: %u (Unsigned int maximum)\n", UINT_MAX);
    printf("LONG_MIN: %ld (Long minimum)\n", LONG_MIN);
    printf("LONG_MAX: %ld (Long maximum)\n", LONG_MAX);
    printf("ULONG_MAX: %lu (Unsigned long maximum)\n", ULONG_MAX);
    printf("LLONG_MIN: %lld (Long long minimum)\n", LLONG_MIN);
    printf("LLONG_MAX: %lld (Long long maximum)\n", LLONG_MAX);
    printf("ULLONG_MAX: %llu (Unsigned long long maximum)\n", ULLONG_MAX);

    // Floating-Point Types
    printf("\nFloating-Point Limits:\n");
    printf("FLT_MIN: %.10e (Float minimum positive value)\n", FLT_MIN);
    printf("FLT_MAX: %.10e (Float maximum positive value)\n", FLT_MAX);
    printf("FLT_EPSILON: %.10e (Float precision, smallest x such that 1.0 + x != 1.0)\n", FLT_EPSILON);
    printf("DBL_MIN: %.10e (Double minimum positive value)\n", DBL_MIN);
    printf("DBL_MAX: %.10e (Double maximum positive value)\n", DBL_MAX);
    printf("DBL_EPSILON: %.10e (Double precision, smallest x such that 1.0 + x != 1.0)\n", DBL_EPSILON);
    printf("LDBL_MIN: %.10Le (Long double minimum positive value)\n", LDBL_MIN);
    printf("LDBL_MAX: %.10Le (Long double maximum positive value)\n", LDBL_MAX);
    printf("LDBL_EPSILON: %.10Le (Long double precision, smallest x such that 1.0 + x != 1.0)\n", LDBL_EPSILON);

    return 0;
}

