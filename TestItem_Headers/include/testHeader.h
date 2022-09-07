int factorial(int number)
{
    long long i, factorial = 1LL;
    for (i = 1; i <= number; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
};
