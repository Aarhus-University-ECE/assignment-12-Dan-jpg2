#ifndef __Duration_hpp_
#define __Duration_hpp_
#include <stdbool.h>

class Duration {
    private:
        //Attributes for said alarm
        int time;
        int alarm = 0;
        bool AlarmIsSet = false;
        //Checking / updating alarm
        bool CheckAndUpdate();

    public:

        Duration();
        void SetTime(int t);
        int GetDuration();
        void reset();
        bool tick();
        bool tick(int dt);
        void SetAlarm();
        bool CheckAlarm();
};

#endif 