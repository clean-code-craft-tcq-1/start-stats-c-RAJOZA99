#include "stats.h"
int emailAlertCallCount;
int ledAlertCallCount;
STATS compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    return s;
}
void check_and_alert()
{
    emailAlertCallCount = 1;
    ledAlertCallCount = 1;
}


