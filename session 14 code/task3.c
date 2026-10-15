#include <stdio.h>

void formatFollowersCount(int count) {
    if (count < 1000) {
        printf("%d\n", count);
    } else if (count >= 1000000) {
        printf("%.1fM\n", count / 1000000.0);
    } else {
        printf("%.1fK\n", count / 1000.0);
    }
}

int main() {
    formatFollowersCount(1500);
    formatFollowersCount(1200000);
    formatFollowersCount(850);

    return 0;
}
