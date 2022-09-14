int main (void)
{
    int i = 893;

    const int v2 = 0;   // Low b/c it's a var??
    int v1 = v2;

    int *p1 = &v1, &r1 = v1;

    const int *p2 = &v2, *const p3 = &i, &r2 = v2;  // Top; Top and Low

    // ex 2.31: checking our work
    r1 = v2;
    p1 = p2;    // Low level const doesn't match
    p2 = p1;
    p1 = p3;    // Low level const doesn't match
    p2 = p3;

    return 0;
}
