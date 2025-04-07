#include "A.h"

A::A(int i, int j)
{
	this->i = i;
	this->j = j;
}


A::~A()
{
}

int B::sum(A obj)
{
	return obj.i + obj.j;
}

int B::sub(A obj)
{
	return obj.i - obj.j;
}