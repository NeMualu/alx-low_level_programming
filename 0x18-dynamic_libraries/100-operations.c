#include <stdio.h>

/**
 * add - My addition function
 * @a: first integer
 * @b: second integer
 *
 * Return: The return the value. @a + @b
*/
int add(int a, int b) {
    return a + b;
}

/**
 * sub - My subtraction function
 * @a: first integer
 * @b: second integer
 *
 * Return: The return the value. @a - @b
*/
int sub(int a, int b) {
    return a - b;
}

/**
 * mul- My multiplication function
 * @a: first integer
 * @b: second integer
 *
 * Return: The return the value. @a * @b
*/
int mul(int a, int b) {
    return a * b;
}

/**
 * div - My division function
 * @a: first integer
 * @b: second integer
 *
 * Return: The return the value. @a / @b
*/
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        fprintf(stderr, "Error: Division by zero\n");
        return 0; // Handle division by zero
    }
}

/**
 * mod - My modulus function
 * @a: first integer
 * @b: second integer
 *
 * Return: The return the value. @a % @b
*/
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0; // Handle modulo by zero
    }
}

