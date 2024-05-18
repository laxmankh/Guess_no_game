#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    // Set console output to UTF-8
    SetConsoleOutputCP(CP_UTF8);

    int no, random, cnt = 0;
    srand(time(NULL));

    // Unicode emojis
    char* welcomeEmoji = "\U0001F44B";    // 👋
    char* correctEmoji = "\U0001F389";    // 🎉
    char* greaterEmoji = "\U0001F53C";    // 🔼
    char* lesserEmoji = "\U0001F53D";     // 🔽
    char* heartEmoji = "\U00002764\U0000FE0F"; // ❤️

    printf("Welcome to our Random Guessing Number game!! %s\n", welcomeEmoji);
    random = (rand() % 100) + 1; // Generate a random number between 1 and 100

    // Uncomment the next line if you want to debug and see the random number
    // printf("Random number (for debugging): %d\n", random);

    do {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &no);
        cnt++; // Increment attempt count

        if (random > no) {
            printf("The guessing number is greater than the current number %s\n", greaterEmoji);
        } else if (random < no) {
            printf("The guessing number is less than the current number %s\n", lesserEmoji);
        } else {
            printf("Congratulations!! The guessing number is correct, which is %d, and you required %d attempts %s\n", random, cnt, correctEmoji);
            printf("Game Made by Laxman %s\n", heartEmoji);
        }
    } while (no != random);

    return 0;
}
