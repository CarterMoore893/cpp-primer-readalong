/*******************************************************************************
 * Found on page 64, this is a demonstration of top-level and low-level
 * const's. We can say that the pointer is const (top-level) or that the object
 * it points to is const (low-level). Additional definition addendums are below
 ******************************************************************************/
#include <iostream>

int main (void)
{
    int i = 0;
    int *const p1 = &i;     // We can't change the value of (* const p1); top-level
    const int ci = 42;      // Immutable; (const int is top-level) 
    const int *p2 = &ci;    // We can change p2; (const int *) is low-level
    const int *const p3 = p2; // Rightmost (*const p3) is top-level, leftmost (const int *) is not
    const int &r = ci;      // Const references are always low-level
    
    i = ci; // OK
    p2 = p3; // OK

    return 0;
}
