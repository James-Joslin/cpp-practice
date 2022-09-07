#include <iostream>
#include <tuple>

using namespace std;

tuple<float, float, char> input()
{
    float num_1;
    float num_2;
    char op;

    cout << "Enter first number" << endl;
    cin >> num_1;
    cout << "Enter operator" << endl;
    cin >> op;
    cout << "Enter second number" << endl;
    cin >> num_2;

    return {num_1, num_2, op};
};

float calculator(float num_1, float num_2, char op)
{
    float answer;
    switch (op)
    {
        case '+':
            answer = num_1 + num_2;
            break;
        case '-':
            answer = num_1 - num_2;
            break;
        case '*':
            answer = num_1 * num_2;
            break;
        case '/':
            answer = num_1 / num_2;
            break;
        default:
            break;
    };
    return answer;
};