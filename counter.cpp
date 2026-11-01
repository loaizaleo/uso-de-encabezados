// Implementacion de la clase counter declarada en counter.h
#include "counter.h"
#include <climits>

// Constructor por defecto: empieza en 0 y el maximo es INT_MAX
counter::counter()
{
count = 0;
maxValue = INT_MAX;
}

// Constructor con valor maximo
counter::counter(int max)
{
count = 0;
maxValue = max;
}

// Incrementa sin pasar del valor maximo
void counter::increment()
{
if (count < maxValue)
 count++;
}

// Decrementa sin bajar de 0
void counter::decrement()
{
if (count > 0)
 count--;
}

// Fija el valor solo si esta entre 0 y el maximo
void counter::setCount(int val)
{
if (val >= 0 && val <= maxValue)
 count = val;
}

// Fija el valor maximo (debe ser positivo)
void counter::setMaxValue(int val)
{
if (val > 0)
 maxValue = val;
}

int counter::getCount() const
{
return count;
}

int counter::getMaxValue() const
{
return maxValue;
}
