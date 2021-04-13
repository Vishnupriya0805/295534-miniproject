#include"cal.h"
long Octal_to_Decimal(int octalnum)
{
    int decimalnum = 0, temp = 0;

    while(octalnum != 0)
    {
        decimalnum = decimalnum + (octalnum%10) * pow(8,temp);
        temp++;
        octalnum = octalnum / 10;
    }

    return decimalnum;
}
