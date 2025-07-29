#ifndef GAME_H
#define GAME_H

class Game{
    public:
        void StartGame();
    private:
        void DrawBoard();
        void Input();
        void Logic();
        void SpawnFood();


        bool GameOver;
        int width, height;
        int x, y;
        int fruitX, fruitY;
        int score;
        
        enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
        Direction dir;

};
#endif