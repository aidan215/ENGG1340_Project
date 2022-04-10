#include "printer.h"

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

void Printer::battleOfCamlann() {
  ifstream fin("scenes/battle_of_camlann.txt");
  string scene_line;
  while (getline(fin, scene_line)) {
    cout << scene_line << endl;
    usleep(100000);
  }
  fin.close();
}

void Printer::intro() {
  // Introduction of story
  ifstream fin("scenes/Intro.txt");
  string sentences;
  while(getline(fin,sentences)){
    cout << sentences << endl;
    usleep(100000);
  }
  fin.close();
}

void Printer::banditCharacter() {
  cout <<
R"(
           ____
          /    \
         //\    \
        //  \_   \
        \\___/   /_    _
        /          \--;
       /         ,_,\___
       \._.__.    \ \__ \___,--
        || \       \ \
        || |,__     \ \
       \;| |   '---\_| |_
       /\; /  _     ;+ +-'
      / /\/  / \_   /| |
     / / /  /    \  \| |
    /_/  \ /     /  /| |
          \\     \ | |/
          /_\     ||
                  ||
                 /_|
           Health:
)";
}

void Printer::banditAppear() {
  cout << "You are ambushed by bandits!";
}

void Printer::death() {
  cout <<
R"(
______ _____  ___ _____ _   _ 
|  _  \  ___|/ _ \_   _| | | |
| | | | |__ / /_\ \| | | |_| |
| | | |  __||  _  || | |  _  |
| |/ /| |___| | | || | | | | |
|___/ \____/\_| |_/\_/ \_| |_/

You succumb to the darkness of death...
Returning to the last saved state.
)";
}

void Printer::optionsFight() {
  cout << "Attack / Flee : ";
}

void Printer::optionsService() {
  cout << "Yes / No : ";
}

void Printer::accolade() {
  ifstream fin("scenes/accolade.txt");
  string scene_line;
  while (getline(fin, scene_line)) {
    cout << scene_line << endl;
    usleep(100000);
  }
  fin.close();
}

void Printer::ending() {
  ifstream fin("scenes/ending.txt");
  string scene_line;
  while (getline(fin, scene_line)) {
    cout << scene_line << endl;
    sleep(1);
  }
  fin.close();
}
