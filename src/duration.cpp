#include "duration.hpp"
#include <unistd.h>
#include <assert.h>


Duration::Duration() { //Setting time to zero (Constructor)
    time = 0;
}

Duration::~Duration(){ //Destructor

}
//Set value to n'th number over zero
Duration::Duration(int t){
    assert(t>=0);
    time = t;
}

int Duration::GetDuration(){ //Returning private attribute
    return time;
}

bool Duration::tick(){ //Increasing time with 1 as one second
    time++;
    return CheckAndUpdate();
}

//Increment time with dt as number of seconds. Calling the update function afterwards
bool Duration::tick(int dt){
    assert(dt>0);
    time+=dt;

    return CheckAndUpdate();
}

void Duration::SetAlarm(int t){ //Setting up the time for the alarm and setting private attribute of isset to true
    assert(t>time);
    AlarmIsSet=true;
    alarm=t;
}

bool Duration::CheckAndUpdate(){ //Checking if time has been surpassed alarm if the alarm was set with AlarmIsSet
    if(time>alarm && AlarmIsSet==true){
        AlarmIsSet=false;
        return true;
    }
    else {
        return false;
    }
}