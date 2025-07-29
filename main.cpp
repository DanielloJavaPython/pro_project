#include<iostream>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#include "installer.h"
#include "game.h"

int main(){
    int opiton;
    while (true){
        system("clear");
        std::cout << "1.Game\n";
        std::cout << "2.Installer\n";
        std::cin >> opiton;

        switch(opiton){
            case 1: 
                Game game;
                game.StartGame();
                break;
            case 2: 
                Installer install;
                install.start();
                break;
            default:
                std::cout << "Somting won't wrong";
                usleep(10000);
                        
        }
    }
}