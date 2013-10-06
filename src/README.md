examples
========

xor_swap
--------

Program to demonstrate swapping two variables using XOR.
Usage: `xor_swap <x> <y>`
Where x and y are integers less than 256.

```
src$ gcc -o xor_swap xor_swap.c 
src$ ./xor_swap 4 255
Starting values: x = 4, y = 255
x = 00000100
y = 11111111
x = x^y
x = 11111011
y = 11111111
y = x^y
x = 11111011
y = 00000100
x = x^y
x = 11111111
y = 00000100
Ending values: x = 255, y = 4
```
