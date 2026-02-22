#include <stdio.h>      // For printf and scanf
#include <stdlib.h>     // For rand() and srand()
#include <time.h>       // For time() function (used as random seed)

#define MAX 20          // Maximum allowed size for rows and columns

// Global variables (accessible by all functions)
int rows, cols, mines;                  // Game dimensions and number of mines
char board[MAX][MAX];                   // Real board (contains mines and numbers)
char visible[MAX][MAX];                 // What the player sees

// Initialize both boards
void initializeBoard() {
    for (int i = 0; i < rows; i++) {            // Loop through each row
        for (int j = 0; j < cols; j++) {        // Loop through each column
            board[i][j] = '0';                  // Set all cells to '0' initially
            visible[i][j] = '*';                // Hide all cells from player
        }
    }
}

// Randomly place mines on the board
void placeMines() {
    int placed = 0;                             // Counter for placed mines
    while (placed < mines) {                    // Repeat until all mines are placed
        int r = rand() % rows;                  // Random row index
        int c = rand() % cols;                  // Random column index

        if (board[r][c] != 'M') {               // If no mine already exists there
            board[r][c] = 'M';                  // Place mine
            placed++;                           // Increase counter
        }
    }
}

// Count mines around a specific cell
int countMines(int r, int c) {
    int count = 0;                              // Counter for nearby mines

    for (int i = -1; i <= 1; i++) {              // Check neighbors (row offset)
        for (int j = -1; j <= 1; j++) {          // Check neighbors (col offset)
            int nr = r + i;                      // New row index
            int nc = c + j;                      // New column index

            // Make sure neighbor is inside board boundaries
            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
                if (board[nr][nc] == 'M') {      // If neighbor contains a mine
                    count++;                     // Increase mine counter
                }
            }
        }
    }
    return count;                               // Return number of nearby mines
}

// Calculate numbers for all non-mine cells
void calculateNumbers() {
    for (int i = 0; i < rows; i++) {             // Loop rows
        for (int j = 0; j < cols; j++) {         // Loop columns
            if (board[i][j] != 'M') {            // If cell is not a mine
                board[i][j] = countMines(i, j) + '0';
                // Convert number to character (e.g., 3 → '3')
            }
        }
    }
}

// Print the visible board to the console
void printBoard() {
    printf("\n   ");
    for (int i = 0; i < cols; i++) {
        printf("%2d ", i);                      // Print column indices
    }
    printf("\n");

    for (int i = 0; i < rows; i++) {
        printf("%2d ", i);                      // Print row index
        for (int j = 0; j < cols; j++) {
            printf(" %c ", visible[i][j]);      // Print visible cell content
        }
        printf("\n");
    }
}

// Reveal a cell (recursive for zero expansion)
void reveal(int r, int c) {

    // If out of bounds, stop recursion
    if (r < 0 || r >= rows || c < 0 || c >= cols)
        return;

    // If cell already revealed, stop recursion
    if (visible[r][c] != '*')
        return;

    visible[r][c] = board[r][c];                // Reveal the actual value

    // If cell is '0', reveal all neighbors recursively
    if (board[r][c] == '0') {
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                reveal(r + i, c + j);           // Recursive call
            }
        }
    }
}

// Check if player has won
int checkWin() {
    int hidden = 0;
}                          // Count hidden cells



#include <stdio.h>      // For printf and scanf
#include <stdlib.h>     // For rand() and srand()
#include <time.h>       // For time() function (used as random seed)

#define MAX 20          // Maximum allowed size for rows and columns

// Global variables (accessible by all functions)
int rows, cols, mines;                  // Game dimensions and number of mines
char board[MAX][MAX];                   // Real board (contains mines and numbers)
char visible[MAX][MAX];                 // What the player sees

// Initialize both boards
void initializeBoard() {
    for (int i = 0; i < rows; i++) {            // Loop through each row
        for (int j = 0; j < cols; j++) {        // Loop through each column
            board[i][j] = '0';                  // Set all cells to '0' initially
            visible[i][j] = '*';                // Hide all cells from player
        }
    }
}

// Randomly place mines on the board
void placeMines() {
    int placed = 0;                             // Counter for placed mines
    while (placed < mines) {                    // Repeat until all mines are placed
        int r = rand() % rows;                  // Random row index
        int c = rand() % cols;                  // Random column index

        if (board[r][c] != 'M') {               // If no mine already exists there
            board[r][c] = 'M';                  // Place mine
            placed++;                           // Increase counter
        }
    }
}

// Count mines around a specific cell
int countMines(int r, int c) {
    int count = 0;                              // Counter for nearby mines

    for (int i = -1; i <= 1; i++) {              // Check neighbors (row offset)
        for (int j = -1; j <= 1; j++) {          // Check neighbors (col offset)
            int nr = r + i;                      // New row index
            int nc = c + j;                      // New column index

            // Make sure neighbor is inside board boundaries
            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
                if (board[nr][nc] == 'M') {      // If neighbor contains a mine
                    count++;                     // Increase mine counter
                }
            }
        }
    }
    return count;                               // Return number of nearby mines
}

// Calculate numbers for all non-mine cells
void calculateNumbers() {
    for (int i = 0; i < rows; i++) {             // Loop rows
        for (int j = 0; j < cols; j++) {         // Loop columns
            if (board[i][j] != 'M') {            // If cell is not a mine
                board[i][j] = countMines(i, j) + '0';  
                // Convert number to character (e.g., 3 → '3')
            }
        }
    }
}

// Print the visible board to the console
void printBoard() {
    printf("\n   ");
    for (int i = 0; i < cols; i++) {
        printf("%2d ", i);                      // Print column indices
    }
    printf("\n");

    for (int i = 0; i < rows; i++) {
        printf("%2d ", i);                      // Print row index
        for (int j = 0; j < cols; j++) {
            printf(" %c ", visible[i][j]);      // Print visible cell content
        }
        printf("\n");
    }
}

// Reveal a cell (recursive for zero expansion)
void reveal(int r, int c) {

    // If out of bounds, stop recursion
    if (r < 0 || r >= rows || c < 0 || c >= cols)
        return;

    // If cell already revealed, stop recursion
    if (visible[r][c] != '*')
        return;

    visible[r][c] = board[r][c];                // Reveal the actual value

    // If cell is '0', reveal all neighbors recursively
    if (board[r][c] == '0') {
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                reveal(r + i, c + j);           // Recursive call
            }
        }
    }
}

// Check if player has won
int checkWin() {
    int hidden = 0;                             // Count hidden cells

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (visible[i][j] == '*')           // If cell still hidden
                hidden++;
        }
    }

    return hidden == mines;                     // Win if only mines remain hidden
}

// Reveal entire board (used when game ends)
void revealAll() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            visible[i][j] = board[i][j];        // Copy real board to visible
        }
    }
}

int main() {

    srand(time(NULL));                          // Seed random generator

    printf("Rows (max 20): ");
    scanf("%d", &rows);                         // Read number of rows

    printf("Cols (max 20): ");
    scanf("%d", &cols);                         // Read number of columns

    printf("Mines: ");
    scanf("%d", &mines);                        // Read number of mines

    // Validate board size
    if (rows <= 0 || rows > MAX || cols <= 0 || cols > MAX) {
        printf("Invalid board size!\n");
        return 1;                               // Exit program with error
    }

    // Validate mine count
    if (mines >= rows * cols) {
        printf("Too many mines!\n");
        return 1;
    }

    initializeBoard();                          // Initialize boards
    placeMines();                               // Place mines
    calculateNumbers();                         // Compute surrounding numbers

    int r, c;                                   // User input coordinates

    while (1) {                                 // Infinite game loop
        printBoard();                           // Show current board
        printf("Enter row and col: ");

        if (scanf("%d %d", &r, &c) != 2) {      // Validate input
            printf("Invalid input!\n");
            break;
        }

        // Check bounds
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            printf("Out of range!\n");
            continue;                           // Skip to next iteration
        }

        // If already opened
        if (visible[r][c] != '*') {
            printf("Already opened!\n");
            continue;
        }

        // If mine selected → game over
        if (board[r][c] == 'M') {
            revealAll();
            printBoard();
            printf("Game Over!\n");
            break;
        }

        reveal(r, c);                           // Reveal selected cell

        if (checkWin()) {                       // Check win condition
            revealAll();
            printBoard();
            printf("You Win!\n");
            break;
        }
    }

    return 0;                                   // End of program
}
