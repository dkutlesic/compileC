#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP 1

#include <iostream>
using namespace std;

class Expression{
public:
  virtual ~Expression(){}
  
  virtual Expression* clone() const = 0;
};


class Const:public Expression{
public:
  Const(int);
  ~Const();
  
  Expression* clone() const;
private: 
  int _x;
};

class Id:public Expression{
public:
  Id(string*);
  ~Id();
  
  Expression* clone() const;
private: 
  string* _var;
};

class Unary:public Expression{
public:
    Unary(Expression*);
    ~Unary();
protected:
    Expression* _child;
};

class Inc:public Unary{
public:
    Inc(Expression*);
    //~Inc();
    
    Expression* clone() const;
};

class Dec:public Unary{
public:
    Dec(Expression*);
    //~Dec();
    
    Expression* clone() const;
};

class Minus:public Unary{
public:
    Minus(Expression*);
    //~Minus();
    
    Expression* clone() const;
};

class Binary:public Expression{
public:
    Binary(Expression*, Expression*);
    ~Binary();
protected:
    Expression* _left;
    Expression* _right;
};

class Sum:public Binary{
public:
  Sum(Expression*, Expression*);
  //~Sum();
  
  Expression* clone() const;
};

class Sub:public Binary{
public:
  Sub(Expression*, Expression*);
  //~Sum();
  
  Expression* clone() const;
};

class Mul:public Binary{
public:
  Mul(Expression* , Expression*);
  //~Mul();
  
  Expression* clone() const;
};

class Div:public Binary{
public:
  Div(Expression* , Expression*);
  //~Div();
  
  Expression* clone() const;
};

#endif