#include <stdio.h>

int main () {

    int i, j ;
    double x, y;

        for (y = 1.5; y > - 1.5; y -= 0.1) {

        for (x = -1.5; x < 1.5; x +=0.05) {

        double a = x*x+y*y-1;
        if (a*a*a-x*x*y*y*y <= 0.0) {
        printf("*");
        } else {
        printf(" ");
        }
    }
        printf("")

        return 0;
}

