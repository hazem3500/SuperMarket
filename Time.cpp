#include "Time.h"
#include <ctime>

Time::Time()
{
        time_t now ;
        struct tm *now_tm;
        int hr,min;
        now = time(NULL);
        now_tm = localtime(&now);
        hr = now_tm->tm_hour;
        min = now_tm->tm_min;
        hours=hr;
        minutes=min;
        cout<<hours<<endl<<minutes<<endl;
}
/*Time operator+ (int shDur) //Shopping Duration
{
    Time t;
    t.hours=hours+shDur ;
    t.minutes=minutes+shDur ;
    return t ;
}*/

/*Time operator+ (int shDur) //Shopping Duration
{
    
    hours=hours+shDur ;
    minutes=minutes+shDur ;
    return *this ;
}*/
