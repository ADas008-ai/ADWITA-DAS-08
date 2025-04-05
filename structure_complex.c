#include<stdio.h>
int main()
{
	struct dist
	{
		int ft;
		int inch;
	}d1,d2,d3;
	d1.ft=5;
	d2.ft=5;
	d1.inch=8;
	d2.inch=9;
	d3.ft=d1.ft+d2.ft;
	d3.inch=d1.inch+d2.inch;
	if(d3.inch>12)
	{
		d3.inch=d3.inch-12;
		d3.ft++;
	}
	printf("%d%d",d3.inch,d3.ft);
}
	}
}
