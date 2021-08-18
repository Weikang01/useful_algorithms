#include "EuclidGCD.h"

void EuclidGCD(const int& A, const int& B, int& re)
{
	int s = A > B ? B : A;
	int l = A > B ? A : B;

	int q, r;
	while (true)
	{
		q = l / s;
		r = l % s;
		if (!r)
		{
			re = s;
			return;
		}

		l = s;
		s = r;
	}
}