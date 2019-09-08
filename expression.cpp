#include <iostream>
#include <cmath>
#include "expression.hpp"

//Constant
Const::Const(int x){
  _x = x;
} 

Const::~Const(){}

Expression* Const::clone() const{
  return new Const(_x);
}

//Variable
Id::Id(string* var){
  _var = new string(*var);
}

Id::~Id(){}

Expression* Id::clone() const{
    return new Id(_var);
}

//Unary
Unary::Unary(Expression* child){
    _child = child->clone();
}

Unary::~Unary(){
    delete _child;
}

//Incrementation
Inc::Inc(Expression* child) : Unary(child){}

Expression* Inc::clone() const{
    return new Inc(_child);
}

//Decrementation
Dec::Dec(Expression* child) : Unary(child){}

Expression* Dec::clone() const{
    return new Dec(_child);
}

//Unary Minus
Minus::Minus(Expression* child) : Unary(child){}

Expression* Minus::clone() const{
    return new Minus(_child);
}

//Binary
Binary::Binary(Expression* left, Expression* right){
    _left = left->clone();
    _right = right->clone();
}

Binary::~Binary(){
    delete _left;
    delete _right;
}

//Sum
Sum::Sum(Expression* left,Expression* right) : Binary(left, right){}

Expression* Sum::clone() const{
  return new Sum(_left, _right);
}

//Substraction
Sub::Sub(Expression* left,Expression* right) : Binary(left, right){}

Expression* Sub::clone() const{
  return new Sub(_left, _right);
}

//Multiplication
Mul::Mul(Expression* left,Expression* right) : Binary(left, right){}

Expression* Mul::clone() const{
  return new Mul(_left, _right);
}

//Division
Div::Div(Expression* left,Expression* right) : Binary(left, right){}

Expression* Div::clone() const{
  return new Div(_left, _right);
}









