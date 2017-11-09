#include "main.h"

void chassisSet(int left, int right)
{
motorSet(4, left);
motorSet(5, left);
motorSet(6, left);
motorSet(7, right);
motorSet(8, right);
motorSet(9, right);
}
