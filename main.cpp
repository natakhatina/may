#include <iostream>
#include "header.h"


int main() {
   timik a;
    a.A.day= 6;
    a.A.month="мая" ;
    a.B.hour= 14;
    a.B.minute=8 ;
    a.B.sec= 0;
    printf ("%-2d%s\n%d%c%d%c%d",a.A.day,a.A.month,a.B.hour,':',a.B.minute,':',a.B.sec);
    return 0;
}