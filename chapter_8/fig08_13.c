// Fig 8.13: fig08_13.c
// Using function sscanf

#include <stdio.h>

int main(void) {
    char s[] = "31298 873.75"; // initialize array s and set it's values
    int x;
    double y;

    sscanf(s, "%d%lf", &x, &y);

    printf("%s\n%s%6d\n%s%8.3f\n",
            "The values stored in character array s are:",
            "integer:", x, "double:", y);
}

