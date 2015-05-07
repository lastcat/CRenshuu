#include <stdio.h>
struct mytime {
  int date;
  int hour;//24h
  int minutes;
};
typedef struct mytime mytime;

int between_time_in_minutes(mytime time1, mytime time2){
  if(time1.hour > time2.hour){
    return between_time_in_minutes(time2, time1);
  }
  else{
    if(time2.hour == time1.hour && time1.minutes > time2.minutes)
      return between_time_in_minutes(time2, time1);
    else
      if(time1.minutes > time2.minutes)
        return ((time2.hour - 1) - time1.hour) * 60 + (time2.minutes + 60) - time1.minutes;
      else
        return (time2.hour - time1.hour) * 60 + (time2.minutes - time1.minutes);
  }
}

void print_between_time(mytime time1, mytime time2){
  printf("時刻の違いは%d分です\n", between_time_in_minutes(time1, time2));
}
