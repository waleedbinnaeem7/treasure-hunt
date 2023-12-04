#include <stdio.h>

int main() {
    int treasureMap[5][5] = {
        {34, 21, 32, 41, 25},
        {14, 42, 43, 14, 31},
        {54, 45, 52, 42, 23},
        {33, 15, 51, 31, 35},
        {21, 52, 33, 13, 33}
    };

    int c_row = 0, c_col = 0;

    printf("Treasure hunt!\n");

    
    int initialClues[] = {11, 34, 42};
    for (int i = 0; i < 3; i++) {
        int clue = initialClues[i];
        printf("Visited index (%d, %d) with clue %d\n", c_row + 1, c_col + 1, clue);

        c_row = clue / 10 - 1;
        c_col = clue % 10 - 1;
    }

    
    while (1) {
        int clue = treasureMap[c_row][c_col];
        printf("Visited index (%d, %d) with clue %d\n", c_row + 1, c_col + 1, clue);

        if (c_row + 1 == clue / 10 && c_col + 1 == clue % 10) {
            printf("Treasure found at index (%d, %d)!\n", c_row + 1, c_col + 1);
            break;
        }

        c_row = clue / 10 - 1;
        c_col = clue % 10 - 1;
    }

    return 0;
}
