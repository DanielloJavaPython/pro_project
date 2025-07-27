#include<iostream>
#include"installer.h"

void Installer::start(){
    system("clear");
    ShoweMenu();
    ShoweConfiguration();

}
void Installer::ShoweMenu(){
    int optioninstall;
    std::cout << "\tWarning: Installer currently only works on ArchLinux and similar (Manjaro, etc.)\n";
    std::cout << "\tChoose from the list of programs to install:\n";
    std::cout << "1. Browser\n";
    std::cout << "2. Developer tools\n";
    std::cout << "3. Messengers\n";
    std::cout << "4. Entertainment\n";
    std::cout << "5. Exit to main menu\n";
    std::cin >> optioninstall;
    while (true){
        switch(optioninstall){
            case 1:
                Browser();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: 
                break;
            case 5: 
                break;
            default:
                std::cout << "Somting won't wrong\n";                   
        }        
    }

}

void Installer::ShoweConfiguration(){
    while (true){
        std::string optionconfiguration;
        std::cout << "Do you want to perform initial configuration?\n";
        std::cout << "(Recommended if you have just installed the system)\n";
        std::cout << "Would you like to run initial configuration? Y/N\n";
        std::cin >> optionconfiguration;

        if (optionconfiguration == "T" && optionconfiguration == "t"){
            std::cout << "\tConfigurator start working !!\n";
            system("sudo pacman -Sy yay");
            system("sudo pacman -Sy fakeroot");
            break;
        }
        else if (optionconfiguration == "N" && optionconfiguration == "n"){
            system("clear");
            break;
        }
        else {
            std::cout << "Somting won't wrong";
        }

    }

}

void Installer::Browser(){
    int browser;
    std::cout << "\tChoose a browser from the list below:\n";
    std::cout << "_________________________________________________________\n";
    std::cout << "1. Brave\n";
    std::cout << "2. Firefox\n";
    std::cout << "3. Opera\n";
    std::cout << "4. Chromium\n";
    std::cout << "5. Return to main menu\n";
    std::cin >> browser;

    while(true){
        switch(browser){
            case 1:
                system("sudo yay -Sy brave-bin");
                break;
            case 2:
                system("sudo pacman -Sy firefox"); 
                break;
            case 3:
                system("sudo yay -Sy opera");
                break;
            case 4:
                system("sudo pacman -S chromium");
                break;
            case 5:
                ShoweMenu();
                break;
            default:
                std::cout << "Somting won't wrong\n";

        }
        
    }
}

void Installer::DeveloperTools(){
    
}

void Installer::Messengers(){

}

void Installer::Enterteiment(){
    
}