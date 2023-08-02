#include "main.h"
/**
 * set_string - set the value of a pointer to char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
*/
void set_string(char **s, char *to)
{
	*s = to;
}
