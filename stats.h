typedef struct Stats
{
  int average;
  int min;
  int max;
}STATS;
STATS compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], STATS computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
