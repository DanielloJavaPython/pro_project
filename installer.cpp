#include<iostream>
#include"installer.h"

void Installer::start(){
    system("clear");
    ShoweConfiguration();
    ShoweMenu();

}
void Installer::ShoweMenu(){
    system("clear");
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
                DeveloperTools();
                break;
            case 3:
                Messengers();
                break;
            case 4:
                Enterteiment(); 
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
        system("clear");
        std::string optionconfiguration;
        std::cout << "Do you want to perform initial configuration?\n";
        std::cout << "(Recommended if you have just installed the system)\n";
        std::cout << "Would you like to run initial configuration? Y/N\n";
        std::cin >> optionconfiguration;

        if (optionconfiguration == "T" || optionconfiguration == "t"){
            std::cout << "\tConfigurator start working !!\n";
            system("sudo pacman -Sy yay");
            system("sudo pacman -Sy fakeroot");
            break;
        }
        else if (optionconfiguration == "N" || optionconfiguration == "n"){
            system("clear");
            return;
        }
        else {
            std::cout << "Somting won't wrong\n";
        }

    }

}

void Installer::Browser(){
    int browser;
    
    while(true){
        system("clear");
        std::cout << "\tChoose a browser from the list below:\n";
        std::cout << "_________________________________________________________\n";
        std::cout << "1. Brave\n";
        std::cout << "2. Firefox\n";
        std::cout << "3. Opera\n";
        std::cout << "4. Chromium\n";
        std::cout << "5. Return to main menu\n";
        std::cin >> browser;
        
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
                return;
            default:
                std::cout << "Somting won't wrong\n";
                break;

        }
        std::cout << "\nPress enter to continue...\n";
        std::cin.ignore();
        std::cin.get();
        
    }
}

void Installer::DeveloperTools(){
    int developertools;
    while (true){
        system("clear");
        std::cout << "\tChoose a tool from the list below:\n";
        std::cout << "_________________________________________________________\n";
        std::cout << "1. Visual Studio Code (Code)\n";
        std::cout << "2. GCC, base-devel\n";
        std::cout << "3. GIT\n";
        std::cout << "4. GDB\n";
        std::cout << "5. Make\n";
        std::cout << "6. CMake\n";
        std::cout << "7. Docker\n";
        std::cout << "8. Python3, python-pip\n";
        std::cout << "9. Code::Blocks\n";
        std::cout << "10. Return to main menu\n";
        std::cin >> developertools;

        switch(developertools){
            case 1:
                system("yay -S code");
                break;
            case 2:
                system("sudo pacman -S gcc");
                system("sudo pacman -S base-devel"); 
                break;
            case 3:
                system("sudo pacman -S git");
                break;
            case 4:
                system("sudo pacman -S gdb");
                break;
            case 5:
                system("sudo pacman -S make");
                break;;
            case 6:
                system("sudo pacman -S cmake");
                break;
            case 7:
                system("sudo pacman -S docker"); 
                break;
            case 8:
                system("sudo pacman -S python");
                system("sudo pacman -S python-pip");
                break;
            case 9:
                system("sudo pacman -S code");
                break;
            case 10:
                ShoweMenu();
                return;    
            default:
                std::cout << "Somting won't wrong\n";
                break;

        }
        std::cout << "\nPress enter to continue...\n";
        std::cin.ignore();
        std::cin.get();
        
    }


    
}

void Installer::Messengers(){
    int messengers;

    while (true){
        system("clear");
        std::cout << "\tChoose a messenger from the list below:\n";
        std::cout << "_________________________________________________________\n";
        std::cout << "1. Discord\n";
        std::cout << "2. Thunderbird\n";
        std::cout << "3. Telegram\n";
        std::cout << "4. Signal\n";
        std::cout << "5. Return to main menu\n";
        std::cin >> messengers;

        switch(messengers){
            case 1:
                system("sudo pacman -Sy discord");
                break;
            case 2:
                system("sudo pacman -Sy thunderbird"); 
                break;
            case 3:
                system("yay -S telegram-desktop");
                break;
            case 4:
                system("yay -S signal-desktop");
                break;
            case 5:
                ShoweMenu();
                return;
            default:
                std::cout << "Somting won't wrong\n";
                break;

        }

        std::cout << "\nPress enter to continue...\n";
        std::cin.ignore();
        std::cin.get();
    }

}

void Installer::Enterteiment(){
    int enterteiment;

    while (true){
        system("clear");
        std::cout << "\tChoose a messenger from the list below:\n";
        std::cout << "_________________________________________________________\n";
        std::cout << "1. Steam\n";
        std::cout << "2. Lutris\n";
        std::cout << "3. YTMusic\n";
        std::cout << "4. Return to main menu\n";
        std::cin >> enterteiment;

        switch(enterteiment){
            case 1:
                system("sudo pacman -Sy steam");
                break;
            case 2:
                system("sudo pacmna -Sy lutris");
                break;
            case 3:
                system("yay -S youtube-music 3.10.0-1");
                break;
            case 4:
                ShoweMenu();    
                return;
            default:
                std::cout << "Somting won't wrong\n";
                break;    
        }
        
        std::cout << "\nPress enter to continue...\n";
        std::cin.ignore();
        std::cin.get();
        
    }
    
}