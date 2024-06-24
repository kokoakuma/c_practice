#include <stdio.h>
typedef struct {
	char name[10];
	int height;
	int weight;
} PDATA;
double calc_bmi(const PDATA *);
int main(void)
{
	PDATA pd[] = {
		{ "Ito", 170, 71 },
		{ "Sato", 182, 74 },
		{ "Takahashi", 166, 54 },
		{ "Hasegawa", 153, 59 },
		{ "Yano", 161, 61 }
	};
	int len, i;
	len = (int)(sizeof pd / sizeof pd[0]);
	for (i = 0; i < len; ++i)
	{
		printf("%sさんのBMIは%.1fです。\n", pd[i].name, calc_bmi(&pd[i]));
	}
	return 0;
}
double calc_bmi(const PDATA *pp)
{
	double bmi;
	bmi = pp -> weight / (((double)pp -> height / 100) * ((double)pp -> height / 100));
	return bmi;
}