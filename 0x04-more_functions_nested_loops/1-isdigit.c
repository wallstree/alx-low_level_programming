#include "main.h"
/**
 * _isdigit - chek if the later is small case or not.
 *@c : parameter passed
 *
 *return (int): return 1 if its digit otherwise 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
