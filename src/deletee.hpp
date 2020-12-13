#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void menu();

void deletee() {
  std::string enter;
  std::string output;
  int deleteChoice;
  std::vector<std::string> deleteTodoArray;
  std::string choiceStr;
  std::string confirmation;

  std::cout
  << "Deleting a To Do\n"
  << "----------------"
  << std::endl;

  std::ifstream deleteRohilFile("rohilFile");

  int counter = 1;
  while(getline(deleteRohilFile, output)) {
    if(output == "") {
      continue;
    }else{
      std::cout << counter << ". " << output << std::endl;
      counter++;
      deleteTodoArray.push_back(output);
    }
  }

  std::cout
  << "----------------\n"
  << "which To Do to delete?\n > ";
  //std::cin >> deleteChoice;
  choiceStr = std::to_string(deleteChoice);
  std::getline(std::cin, choiceStr);
  deleteChoice = stoi(choiceStr);
  deleteChoice--;

  std::cout
  << "Are you sure you want to delete the following To Do?\n"
  << "[" << deleteTodoArray[deleteChoice]
  << "] y/n"
  << std::endl;
  std::getline(std::cin, confirmation);

  if(confirmation == "y") {
    std::ifstream readRohilFile("rohilFile");
    while(getline(readRohilFile, output)) {
      if(deleteTodoArray[deleteChoice] == output) {
        output = "";
        deleteTodoArray[deleteChoice] = "";
      }
    }
    readRohilFile.close();

    std::string text;
    for(int i = 0; i < deleteTodoArray.size(); i++) {
    text += deleteTodoArray[i] + '\n';
    }

    std::ofstream writeRohilFile("rohilFile");
    writeRohilFile << text;
    writeRohilFile.close();
  }else{
    menu();
  }

  menu();
}