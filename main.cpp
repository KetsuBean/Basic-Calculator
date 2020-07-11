//  Basic Calculator
//  This program will just take two numbers and preform a basic mathematical function
//  with them.
//
//  07/11/2020
//  Kevin Dao

#include <iostream>

using namespace std;

//prototypes for functions
int additionCalc(int, int);
int subtractionCalc(int, int);
int divisionCalc(int, int);
int multiplicationCalc(int, int);

int main() {
    
    char operation;
    int num1, num2;
    int result;
    
    cout << "This program takes two numbers and preforms a basic mathematical function." << endl << endl;
    
    //loop to make sure correct operator is input
    int i = 0;
    do {
        cout << "Please enter an operator: (+, -, /, *)" << endl;
        cin >> operation;
        
        switch (operation) {
            case '+':
            case '-':
            case '*':
            case '/':
                i = -1;
                break;
                
            default:
                i = 0;
                break;
        }
        
    } while (i != -1);
    
    //number inputs
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
            result = 0;
            break;
    }
    
    //result output
    cout << endl << "Result is " << result << endl;
    
    return 0;
}


//functions for calculations
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
