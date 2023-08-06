#include <stdio.h>
#include <unistd.h>

int main() {
    char c = 0;
    int k = 0;
    while(k < 100){
        read(0, &c, 1);
        if(c == 0) break;
        if(c == 10) k++;
        write(1, &c, 1);
    }
    
    return 0;
}