#include<unistd.h>
#include<stdlib.h>

int main(){
    char buf[100];
    int nread;
    
    nread=read(0,buf,100);
    if(nread == -1)
        write(2, "A read error has occured",26);
    
    if((write(1,buf,nread)) != nread)
        write(2, "A write error has occured\n",27);
    
    exit(0);
}