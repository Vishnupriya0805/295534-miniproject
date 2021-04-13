#include"cal.h"
long Octal_to_Binary(int octalnum)
{
    int decimalnum = 0, i = 0;
    long binarynum = 0;
    while(octalnum != 0)
    {
	 decimalnum = decimalnum + (octalnum%10) * pow(8,i);
	 i++;
	 octalnum = octalnum / 10;
    }
    i = 1;
    while (decimalnum != 0)
    {
	 binarynum = binarynum + (decimalnum % 2) * i;
	 decimalnum = decimalnum / 2;
	 i = i * 10;
    }
    return binarynum;
}
