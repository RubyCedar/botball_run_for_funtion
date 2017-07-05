#include <stdio.h>
#include <time.h>
#include "run_for.h"

void run_for(int time_differ, void (*callfuct)()) {
	
	thread tid;
	tid = thread_create(callfuct);
	thread_start(tid); 
	
	int start_sec = time((time_t*)NULL);
	int current_sec = time((time_t*)NULL);;
	while (current_sec - start_sec < time_differ) {
		
		msleep(500);
		current_sec = time((time_t*)NULL);
	
	}
	thread_destroy(tid);
	
}
