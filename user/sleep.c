#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    
    // check param num
    if(argc<=1){ //there is no param
        printf("Please enter the parameters!\n");
        exit(1); //1 for error
    }
    else{
        int duration=atoi(argv[1]); //transfer string to int
        sleep(duration);
        exit(0); //0 for success
    }
    exit(0);
}