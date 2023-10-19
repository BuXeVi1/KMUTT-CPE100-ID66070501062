#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

// Define the game board size
#define WIDTH 20
#define HEIGHT 10

// Define the ASCII characters
#define PACMAN 'C'
#define WALL '#'
#define FOOD '.'
#define GHOST 'G'

// Game state variables
char board[HEIGHT][WIDTH];
int pacManX, pacManY;
int ghostX, ghostY;
int score;

bool gameOver;

// Function to initialize the game board
void initializeBoard() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1) {
                board[i][j] = WALL;
            } else {
                board[i][j] = FOOD;
            }
        }
    }

    pacManX = WIDTH / 2;
    pacManY = HEIGHT / 2;
    board[pacManY][pacManX] = PACMAN;

    ghostX = 1;
    ghostY = 1;
    board[ghostY][ghostX] = GHOST;

    score = 0;
    gameOver = false;
}

// Function to display the game board
void displayBoard() {
    system("cls");
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

// Function to handle user input
void handleInput() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                pacManX--;
                break;
            case 'd':
                pacManX++;
                break;
            case 'w':
                pacManY--;
                break;
            case 's':
                pacManY++;
                break;
            case 'q':
                gameOver = true;
                break;
        }
    }
}

// Function to update the game state
void updateGame() {
    if (pacManX == ghostX && pacManY == ghostY) {
        gameOver = true;
        return;
    }

    if (board[pacManY][pacManX] == FOOD) {
        score++;
        board[pacManY][pacManX] = ' ';
    }

    board[pacManY][pacManX] = PACMAN;
    board[ghostY][ghostX] = ' ';

    // Update the ghost's position (you can implement AI logic here)
    if (pacManX < ghostX) ghostX--;
    if (pacManX > ghostX) ghostX++;
    if (pacManY < ghostY) ghostY--;
    if (pacManY > ghostY) ghostY++;
    board[ghostY][ghostX] = GHOST;
}

int main() {
    initializeBoard();

    while (!gameOver) {
        displayBoard();
        handleInput();
        updateGame();
        Sleep(100);  // Sleep for a short time to control game speed
    }

    displayBoard();
    printf("Game Over! Your Score: %d\n", score);

    return 0;
}
