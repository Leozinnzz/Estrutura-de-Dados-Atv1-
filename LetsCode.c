#include <stdio.h> 

int main() {

    int dur, min, seg; 

    printf("Quanto tempo durou o evento? ");
    scanf("%d", &dur);

    printf("o evento durou: %02d:%02d:%02d " , (dur / 3600), (dur % 3600) / 60, dur % 60);

    return 0;
}