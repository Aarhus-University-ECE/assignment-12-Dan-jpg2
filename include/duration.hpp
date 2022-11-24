#ifndef _DURATION_CLASS_HPP_
#define _DURATION_CLASS_HPP_
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
        Duration(int t);
        ~Duration();
        int GetDuration();
        bool tick();
        bool tick(int dt);
        void SetAlarm(int t);
};

#endif 