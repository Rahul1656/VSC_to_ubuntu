#include "../include/bitmask.h"

int set(int n, int k)
{
    return (n | (1 << (k - 1)));
}
  
// Function to clear the kth bit of n
int reset(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}
  
// Function to toggle the kth bit of n
int flip(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}