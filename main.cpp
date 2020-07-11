//  Basic Calculator
//  This program will just take two numbers and preform a basic mathematical function
//  with them.
//
//  07/11/2020
//  Kevin Dao

#include <iostream>

using namespace std;

int additionCalc(int, int);
int subtractionCalc(int, int);
int divisionCalc(int, int);
int multiplicationCalc(int, int);

int main() {
    
    char operation;
    int num1, num2;
    int result;
    
    cout << "This program takes two numbers and preforms a basic mathematical function." << endl << endl;
    cout << "Please enter an operator: (+, -, /, *)" << endl;
    
    cin >> operation;
    
    cout << endl << "Please enter a number";
    cin >> num1;
    
    cout << endl << "Please enter another number";
    cin >> num2;
    
    switch (operation) {
        case '+':
            result = additionCalc(num1, num2);
        case '-':
            result = subtractionCalc(num1, num2);
        case '*':
            result = multiplicationCalc(num1, num2);
        case '/':
            result = divisionCalc(num1, num2);
            break;
            
        default:
            cout << "An incorrect operation was typed";
            result = 0;
            break;
    }
    
    
    cout << endl << "Result is " << result << endl;
    
    return 0;
}

int additionCalc(int n1, int n2)
{
    int r;
    
    r = n1 + n2;
    
    return r;
}

int subtractionCalc(int n1, int n2)
{
    int r;
    
    r = n1 - n2;
    
    return r;
}

int multiplicationCalc(int n1, int n2)
{
    int r;
    
    r = n1 * n2;
    
    return r;
}

int divisionCalc(int n1, int n2)
{
    int r;
    
    r = n1 / n2;
    
    return r;
}
