/*
 * @Author: your name
 * @Date: 2021-08-25 20:10:36
 * @LastEditTime: 2021-08-25 20:31:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /BubbleSorting/ComputingTime.cpp
 */
#include <time.h>
class ComputingTime{
    private:
    timespec starttime, endtime;
    public:
    int SetStartTime();
    int SetEndTime();
    double GetTimeDiffInSecond();
};
int ComputingTime::SetStartTime(){
    clock_gettime(CLOCK_REALTIME, &starttime);
    return 0;
}
int ComputingTime::SetEndTime(){
    clock_gettime(CLOCK_REALTIME, &endtime);
}
double ComputingTime::GetTimeDiffInSecond(){
    struct timespec temp ={0};
    if ((endtime.tv_nsec-starttime.tv_nsec)<0) {
    temp.tv_sec = endtime.tv_sec-starttime.tv_sec-1;
    temp.tv_nsec = 1000000000.0+endtime.tv_nsec-starttime.tv_nsec;
    } else {
    temp.tv_sec = endtime.tv_sec-starttime.tv_sec;
    temp.tv_nsec = endtime.tv_nsec-starttime.tv_nsec;
    }
  return  temp.tv_sec + (double) temp.tv_nsec / 1000000000.0;
}