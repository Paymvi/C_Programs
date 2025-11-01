

// Include is used to bring in standard libraries... there is no semicolon there
#include <stdio.h> // Lets me use printf, fopen, fgets
#include <stdlib.h> // Lets me use malloc, free, exit
#include <string.h> // Gives you functions to manipulate strings

#define MAX_LINE 1024

/*  The comments are my own notes to help me understand C
    More Notes:
    - C uses the "str" prefix a lot because it stands for strings
    - C is close to the hardware
    - C code can run on almost any operating system
    - You manage memory directly in C
*/


int main(){


    FILE *file = fopen("results.csv", "r");
    if (file == NULL) {
        perror("Error opening file"); // perror stands for "print error"
        return 1;
    }

    char line[MAX_LINE]; // This is the buffer (temporary storage) for each line read from the file
    int total = 0, passed = 0, failed = 0;

    while (fgets(line, sizeof(line), file)){ // This reads one line at a time

        line[strcspn(line, "\n")] = 0; // Remove the new line at the end

        // Split line by comma
        // strtok splits a string based on delimiter like ","
        char *token = strtok(line, ",");
        char *status = strtok(NULL, ",");

        if (status != NULL){
            total++;
            if (strcmp(status, "PASS") == 0) { // strcmp compares two strings
                passed++;
            } else if (strcmp(status, "FAIL") == 0){
                failed++;
            }
        }

    }

    double passRate = (total > 0) ? (passed * 100.0 / total) : 0.0; // The ending is so that you don't divide by 0 is there are not tests
    printf("Total tests: %d\nPassed: %d\nFailed: %d\nPass Rate: %.2f%%\n", total, passed, failed, passRate);

    fclose(file);   // Close the file to free system resources
    return 0;       // Indicates successful completion of the program

}

