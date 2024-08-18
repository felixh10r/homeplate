//// NOTE: THIS FILE IS ONLY NEEDED WHEN CONFIGURING A CUSTOM SLEEP
//// SCHEDULE.
//// IF USING A SINGLE/STATIC SLEEP DURATION THEN THIS FILE CAN BE OMITTED
//#include "config.h"
//
//// How long to sleep between image refreshes
//// - there is no validation of any kind, make sure your slots are continuous
//// - falls back to TIME_TO_SLEEP_MIN if your slots are not continuous
//// - a schedule slot is configured per day, i.e. cronjob style
//// - dow = DayOfWeek, starts at 1 = Monday to 7 = Sunday
//SleepScheduleSlot sleepSchedule[] = {
//    { // On each day from 00:00 to 05:30 sleep for 1 hour
//        .start_dow = 1,
//        .start_hour = 0,
//        .start_minute = 0,
//        .end_dow = 7,
//        .end_hour = 5,
//        .end_minute = 30,
//        .sleep_in_seconds = 7200, // account for startup time 20s
//    },
//    { // On each day from 05:30 to 23:00 sleep for 5 minutes
//        .start_dow = 1,
//        .start_hour = 5,
//        .start_minute = 30,
//        .end_dow = 7,
//        .end_hour = 23,
//        .end_minute = 0,
//        .sleep_in_seconds = 600, // account for startup time 20s
//    },
//    { // On each day from 23:00 to 24:00 sleep for 1 hour
//        .start_dow = 1,
//        .start_hour = 23,
//        .start_minute = 0,
//        .end_dow = 7,
//        .end_hour = 24,
//        .end_minute = 0,
//        .sleep_in_seconds = 7200, // account for startup time 20s
//    }
//};
//
//const size_t sleepScheduleSize = sizeof(sleepSchedule) / sizeof(sleepSchedule[0]);
