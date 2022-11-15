#include duration.cpp
#include <iostream>
#include <assert.h>

Duration::Duration() { //Setting time to zero
    time = 0;
}

//Set value to n'th number over zero
void Duration::SetTime(int t){
    assert(t>=0);
    time = t;
}

int Duration::GetDuration(){ //Returning private attribute
    return time;
}

void Duration::Reset(){ //Resetting time to zero
    time = 0;
}

bool Duration::tick(){ //Increasing time with 1 as one second
    tick++=;
    return CheckAndUpdate();
}

//Increment time with dt as number of seconds. Calling the update function afterwards
bool Duration::tick(int dt){
    assert(dt>0);
    time+=dt;

    return CheckAndUpdate();
}

void Duration::SetAlarm(){ //Setting up the time for the alarm and setting private attribute of isset to true
    assert(t>time);
    AlarmIsSet=true;
    alarm=t;
}

bool Duration::CheckAlarm(){ //Own function to check if the alarm has been set
    return AlarmIsSet;
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