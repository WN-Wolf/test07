int add(int a, int b)
{
    return a + b; // B的第一次修改的地方
}

int add(int a, int b)
{
    int c = a + b;
    return c; // A的第一次修改的地方
}