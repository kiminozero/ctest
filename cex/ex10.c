#include <stdio.h>

int main(int argc, char *argv[])
{
    //int i = 0;
    int i = 'o';
    printf("%d\n", i);
    // go through each string in argv
    // why am I skipping argv[0]?
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };
    int num_states = 5;

    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    argv[1]=states[1];
    states[2]=argv[2];
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    for(i = 0; i < num_states; i++,i++) {
        printf("state %d\n", i );
    }

    return 0;
}
