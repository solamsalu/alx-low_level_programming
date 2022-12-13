#include "main.h"

/**
 * _abs - returns absolute value of an int
 * @ab: integer input from which to get an absolute value
 * Return: absolute value of ab.
 */


int _abs(int ab)

{

	return (ab * ((ab > 0) - (ab < 0)));

}
