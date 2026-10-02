#include <stdio.h>

int main()
{
    int followerCount = 100;

    printf("Before increment: %d\n", followerCount);

    printf("Post-increment: %d\n", followerCount++);
    printf("After post-increment: %d\n", followerCount);

    printf("Pre-increment: %d\n", ++followerCount);
    printf("After pre-increment: %d\n", followerCount);

    return 0;
}