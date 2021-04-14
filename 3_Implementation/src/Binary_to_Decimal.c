#include"..\inc\cal.h"
#include<math.h>
int Binary_to_Decimal(long binarynum)
{
    int decimalnum = 0, temp = 0, r;
    while (binarynum!=0)
    {
        r = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + r*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
