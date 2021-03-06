#include "Minus.h"

/****************************************************
 * Function Name:       constructor.
 * The Input:           left expression, right expression.
 * The Output:
 * Function Operation:  constructs a binary expresssion of substraction.
 ****************************************************/
Minus::Minus(Expression* e1, Expression* e2) {
    this->right = e1;
    this->left = e2;
}

/****************************************************
 * Function Name:       calculate.
 * The Input:
 * The Output:          double result.
 * Function Operation:  calculates (left - right)
 ****************************************************/
double Minus::calculate(){
    return this->right->calculate() - this->left->calculate();
}