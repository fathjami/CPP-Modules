#ifndef  CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string.h>

bool IsInt(char str[]);
void castInt(char str[]);

void intToChar(int res);

bool IsChar(char str[]);
void castChar(char c);

bool IsFloat(char str[]);
void castFloat(char str[]);

bool IsDouble(char str[]);
void castDouble(char str[]);

bool IsPseudoFloat(char str[]);

void impoPrint();

bool IsPseudoDouble(char str[]);
#endif