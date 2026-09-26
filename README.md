# Array Intersection in C

A C program that reads two arrays of non-zero integers and finds their intersection using a dedicated `intersection()` function.

## Overview

The program:

- Reads the size and elements of two arrays
- Uses `0` as a sentinel value to terminate the input
- Displays both input arrays
- Computes their common elements
- Removes duplicate values from the intersection
- Displays the resulting intersection

## Method

The intersection is calculated using the `intersection()` function.

The function compares elements of the two arrays and stores common values in array `C`.

The result is terminated with `0`.

```text
A = {1, 2, 3, 4, 5}
B = {2, 4, 6}

Intersection = {2, 4}
