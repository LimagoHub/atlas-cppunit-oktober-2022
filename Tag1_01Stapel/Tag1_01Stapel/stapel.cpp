#include "stapel.h"
#include "StapelException.h"

stapel::stapel()
{
	index = 0;
}

void stapel::push(int value)
{
	if (is_full()) throw StapelException{ "Overflow" };
	data[index++] = value;
}

int stapel::pop()
{
	if (is_empty()) throw StapelException{ "Underflow" };
	return data[--index];
}

bool stapel::is_empty() const
{
	return  index == 0;
}

bool stapel::is_full() const
{
	return index == 10;
}
