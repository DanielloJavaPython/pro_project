#include<iostream>
#include "input.h"

#include "game.h"

void Game::StartGame(){
    width = 20;
    height =20;
    GameOver = false;
    dir = STOP;
    x = width / 2;
    y = height /2;
    SpawnFood();
    score = 0;

    while (!GameOver){
        DrawBoard();
        Input();
        Logic();
    }


}

void Game::DrawBoard(){
    system("clear");

    for (int i = 0; i < width + 2; i++) std::cout << "#";
    std::cout << "\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) std::cout << "#";  

            if (i == y && j == x)
                std::cout << "O";
            else if (i == fruitY && j == fruitX)
                std::cout << "F";
            else
                std::cout << " ";

            if (j == width - 1) std::cout << "#";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < width + 2; i++) std::cout << "#";
    std::cout << "\n";

    std::cout << "Score: " << score << "\n";
}

void Game::Input(){
    if (_kbhit()){
        char key = getchar();
        switch (key){
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': GameOver = true; break; 
        }
    }

}

void Game::Logic(){
    
    switch(dir){
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
        default: break;
    }

    if (x < 0 || x >= width || y < 0 || y >= height)
        GameOver = true;
    
        
    if (x == fruitX && y == fruitY){
        score += 1;
        SpawnFood(); 
    }

    usleep(100000);
}

void Game::SpawnFood(){
    fruitX = rand() % width;
    fruitY = rand() % height;

}

