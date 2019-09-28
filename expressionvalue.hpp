
#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP

#include <iostream>
#include <string>
using namespace std;

class ExpressionValue {
public:
ExpressionValue(string code, string result) : code(code), result(result){}
string code;
string result;
};

class Condition {
public:
Condition(string code, string instruction) : code(code), instruction(instruction) {}
string code;
string instruction;
};

class Function {
public:
Function(string code, string name): code(code), name(name) {}
string code;
string name;
};

#endif
