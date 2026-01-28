#include<stdio.h>
enum Direction {UP, DOWN, LEFT, RIGHT};
int playerX=5;
int playerY=5;
void movePlayer(enum Direction dir) {
    switch(dir) {
        case UP:
            playerY--;
            printf("Player moved up to (%d, %d)\n", playerX, playerY);
            break;
        case DOWN:
            playerY++;
            printf("Player moved down to (%d, %d)\n", playerX, playerY);
            break;
        case LEFT:
            playerX--;
            printf("Player moved left to (%d, %d)\n", playerX, playerY);
            break;
        case RIGHT:
            playerX++;
            printf("Player moved right to (%d, %d)\n", playerX, playerY);
            break;
            default:printf("Invalid direction!\n"); 
    }
}
int main() {
    printf("Welcome to the simple game!\n");
    printf("Initial Player Position: (%d, %d)\n", playerX, playerY);
    movePlayer(UP);
    movePlayer(LEFT);
    movePlayer(DOWN);
    movePlayer(RIGHT);
    printf("Final Player Position: (%d, %d)\n", playerX, playerY);
    printf("game over!\n");
    return 0;
}