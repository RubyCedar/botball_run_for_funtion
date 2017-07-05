#include <stdio.h>
#include <time.h>
#include "run_for.h"
void fun() {
	while(1) {
		motor(0, 1000);
		motor(2, 1000);
	}
}
int main() {
	run_for(10, fun);
}
