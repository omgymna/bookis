//Parity source code by Jacob Hall | jlh0915

#include "major1.h"

int Parity(int par_num)
{
	int par = 0;

	while (par_num)
	{
		par = !par;
		par_num = par_num & (par_num - 1);
	}

	return par;
}
