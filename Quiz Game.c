#include <stdio.h>
#include <stdlib.h>

int main() {
    int score = 0;
    int answer;

    printf("Welcome to the C Programming Quiz Game!\n");
    printf("------------------------------------------\n");
    printf("Rules :\n");
    printf("-> 10 Questions\n");
    printf("-> 5 Points for each correct answer\n");
    printf("-> 0 Points for wrong answers\n");
    printf("------------------------------------------\n");

    // Question 1 - Variables
    printf("1. Which of the following is a valid variable name in C?\n");
    printf("   1) int\n   2) total_marks\n   3) 1#score\n   4) float-value\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score += 5;

    // Question 2 - Data Types
    printf("\n2. What is the size of an int variable in most 32-bit compilers?\n");
    printf("   1) 1 byte\n   2) 2 bytes\n   3) 4 bytes\n   4) 8 bytes\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score += 5;

    // Question 3 - Operators
    printf("\n3. Which operator is used for logical AND in C?\n");
    printf("   1) &\n   2) &&\n   3) and\n   4) %%\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score += 5;

    // Question 4 - Loops
    printf("\n4. Which loop is guaranteed to execute at least once?\n");
    printf("   1) for loop\n   2) while loop\n   3) do-while loop\n   4) None\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score += 5;

    // Question 5 - Arrays
    printf("\n5. What is the index of the first element in an array in C?\n");
    printf("   1) 0\n   2) 1\n   3) 2\n   4) It depends\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score += 5;

    // Question 6 - Strings
    printf("\n6. Which library function is used to find the length of a string?\n");
    printf("   1) strlength()\n   2) stringlen()\n   3) length()\n   4) strlen()\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4) score += 5;

    // Question 7 - Functions
    printf("\n7. What is the default return type of a function if not specified in C?\n");
    printf("   1) float\n   2) void\n   3) int\n   4) char\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score += 5;

    // Question 8 - Pointers
    printf("\n8. What symbol is used to declare a pointer variable in C?\n");
    printf("   1) *\n   2) &\n   3) @\n   4) %%\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score += 5;

    // Question 9 - Conditional Statements
    printf("\n9. Which keyword is used for decision-making in C?\n");
    printf("   1) case\n   2) if\n   3) loop\n   4) switchon\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score += 5;

    // Question 10 - File Handling
    printf("\n10. Which function is used to open a file in C?\n");
    printf("   1) getfile()\n   2) fileopen()\n   3) openfile()\n   4) fopen()\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4) score += 5;

    // Final Score
    printf("\n------------------------------------------\n");
    printf("?? Quiz Completed!\n");
    printf("Your Total Score: %d out of 50\n", score);

    if (score == 50)
        printf("Perfect Score! You're a C Pro!\n");
    else if (score >= 40)
        printf("Excellent! Keep it up!\n");
    else if (score >= 25)
        printf("Good job! A little more practice and you'll master it.\n");
    else
        printf("Keep learning! You'll improve in no time.\n");
    return 0;
}
