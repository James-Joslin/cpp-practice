#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int input)
{
    // Ignore values less than or equal to 1
    if (input <= 1)
    {
        return false;
    }
    // Values 2 to 3 are prime
    if (input <= 3 && input > 1)
    {
        return true;
    }
    // Ignore values 
    if (input % 2 == 0 || input % 3 == 0)
        return false;
 
    // Checks for prime or non prime
    for (int i = 5;
         i * i <= input; i = i + 6) {
 
        // If n is divisible by i
        // or i + 2, return false
        if (input % i == 0
            || input % (i + 2) == 0)
            return false;
    }
    return true;
}

bool cFuge (int size, int num)
{
    int diff = size - num;
    cout << "Difference: " << diff << endl;
    vector<int> primeFactors;
    cout << "Prime Factors: ";

    if (size < 2 || num < 2)
    {
        return false;
    };

    for (int i = 2; i < size; i++)
    {
        if (size % i == 0 && isPrime(i))
        {
            primeFactors.push_back(i);
            cout << i << " ";
        }
    };
    cout << endl;
    if (primeFactors.size() == 0)
    {
        if (diff == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        int sum;
        int low = primeFactors[0];
        int high = primeFactors[(primeFactors.size()-1)];
        bool a, b = false;
        
        int quotient = diff/high;
        // Check sum of factors for diff
        for (int i = 1; i < quotient+1; i++)
        {
            sum = (high * quotient) + (low * i);
            if (sum == diff)
            {
                a = true;
                break;
            }
        }
        // check sum of factors for num
        quotient = num/high;
        for (int i = 0; i < quotient+1; i++)
        {
            sum = (high * quotient) + (low * i);
            if (sum == num)
            {
                b = true;
                break;
            }
        }

        if ((a && b))
        {
            return true;
        };
    }
}