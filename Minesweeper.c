#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

int rows, cols, mines;
char board[MAX][MAX];
char visible[MAX][MAX];

void initializeBoard() {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            board[i][j] = '0';
            visible[i][j] = '*';
        }
}

void placeMines() {
    int placed = 0;
    while (placed < mines) {
        int r = rand() % rows;
        int c = rand() % cols;
        if (board[r][c] != 'M') {
            board[r][c] = 'M';
            placed++;
        }
    }
}

int countMines(int r, int c) {
    int count = 0;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++) {
            int nr = r + i;
            int nc = c + j;

            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols)
                if (board[nr][nc] == 'M')
                    count++;
        }
    return count;
}

void calculateNumbers() {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (board[i][j] != 'M')
                board[i][j] = countMines(i, j) + '0';
}

void printBoard() {
    printf("\n   ");
    for (int i = 0; i < cols; i++)
        printf("%2d ", i);
    printf("\n");

    for (int i = 0; i < rows; i++) {
        printf("%2d ", i);
        for (int j = 0; j < cols; j++)
            printf(" %c ", visible[i][j]);
        printf("\n");
    }
}

void reveal(int r, int c) {
    if (r < 0 || r >= rows || c < 0 || c >= cols)
        return;

    if (visible[r][c] != '*')
        return;

    visible[r][c] = board[r][c];

    if (board[r][c] == '0') {
        for (int i = -1; i <= 1; i++)
            for (int j = -1; j <= 1; j++)
                reveal(r + i, c + j);
    }
}

int checkWin() {
    int hidden = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (visible[i][j] == '*')
                hidden++;

    return hidden == mines;
}

void revealAll() {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            visible[i][j] = board[i][j];
}

int main() {
    srand(time(NULL));

    printf("Rows (max 20): ");
    scanf("%d", &rows);
    printf("Cols (max 20): ");
    scanf("%d", &cols);
    printf("Mines: ");
    scanf("%d", &mines);

    if (rows <= 0 || rows > MAX || cols <= 0 || cols > MAX) {
        printf("Invalid board size!\n");
        return 1;
    }

    if (mines >= rows * cols) {
        printf("Too many mines!\n");
        return 1;
    }

    initializeBoard();
    placeMines();
    calculateNumbers();

    int r, c;

    while (1) {
        printBoard();
        printf("Enter row and col: ");

        if (scanf("%d %d", &r, &c) != 2) {
            printf("Invalid input!\n");
            break;
        }

        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            printf("Out of range!\n");
            continue;
        }

        if (visible[r][c] != '*') {
            printf("Already opened!\n");
            continue;
        }

        if (board[r][c] == 'M') {
            revealAll();
            printBoard();
            printf("💥 Game Over!\n");
            break;
        }

        reveal(r, c);

        if (checkWin()) {
            revealAll();
            printBoard();
            printf("🎉 You Win!\n");
            break;
        }
    }

    return 0;
}
