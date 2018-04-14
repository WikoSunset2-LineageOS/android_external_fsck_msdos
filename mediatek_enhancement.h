#ifndef __MEDIATEK_ENHANCEMENT_H__
#define __MEDIATEK_ENHANCEMENT_H__

// ------------------------------------------
// xLog Info
// ------------------------------------------
#include <cutils/log.h>
#define FSCK_XLOG_TAG "FSCK"

// ------------------------------------------
// Time Info
// ------------------------------------------
#include <sys/time.h>
extern struct timeval fsck_total_time, fsck_p1_time, fsck_p2_time, fsck_p3_time, fsck_p4_time ;
unsigned long print_time(struct timeval *time) ;
void start_count(struct timeval *) ;
void end_count(const char *, struct timeval *) ;

#endif

