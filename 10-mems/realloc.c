#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>

// struct time {long* pTime;};
int get_time();
int main() {
    /*realloc()
    -> calloc üstünden *temp ile *eskivar a döndürmek
    çalışılmalı
    */
    get_time();
    return 0;
}

int get_time() {
    time_t rawtime = 0; //halihazırda time.h de tanımlı
    struct tm *pTime = NULL;
    bool isRunning = TRUE;

    while (isRunning) {
        time(&rawtime); //update ->

        pTime = localtime(&rawtime); //use

        _sleep(1000);   // works
        printf("%d:%d:%d \n",
            (*pTime).tm_hour,
            (*pTime).tm_min,
            (*pTime).tm_sec);
        //pTime->tm.hour,pTime->tm.minute,pTime->tm.second

    }
    return 0;
}