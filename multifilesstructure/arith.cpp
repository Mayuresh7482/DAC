#include "arith.h"

int addition(int a, int b) {
    return (a + b);
}

int subtract(int a, int b) {
    return (a - b);
}

int multiplication(int a, int b) {
    return (a * b);
}

int division(int a, int b) {
    if (b != 0)
        return (a / b);
    else
        return 0; // You can handle this error differently if you want
}
