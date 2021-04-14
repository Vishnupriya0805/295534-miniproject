#include"..\inc\cal.h"
#include<math.h>

long Decimal_to_Binary(int decimalnum)
{
    long binarynum=0;
    int r,temp=1;
    while(decimalnum!=0)
    {
        r = decimalnum%2;
        decimalnum = decimalnum/2;
        binarynum = binarynum + r*temp;
        temp = temp * 10;
    }
    return binarynum;
}
