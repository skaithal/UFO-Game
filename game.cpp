/* Sanjana Aithal, Codecademy Take Home Challenge */

#include <iostream>
#include <ostream>
#include <unordered_map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <limits>

std::unordered_map<int, std::string> createDict(){

    std::ifstream inFile;
    std::string noun;
    std::unordered_map<int, std::string> noun_dictionary; 

    // open nouns.txt
    inFile.open("nouns.txt");
    if(!inFile) {
        std::cerr << "Unable to open file nouns.txt" << std::endl;
        exit(1);
    }

    // store nouns in a dictionary
    int i = 0;
    while(inFile >> noun){
        noun_dictionary[i] = noun;
        i++;
    }

    // close nouns.txt
    inFile.close();

    // return dictionary
    return noun_dictionary; 
}

int generateRand(){
    int random_number; 

    srand((int)time(0));
    random_number = (std::rand() % 4300);

    return random_number; 
}

int setRand(std::unordered_map<int, int> indices_dictionary){
    int rand_index = generateRand();

    while(indices_dictionary.find(rand_index) != indices_dictionary.end()){ rand_index = generateRand(); }
    indices_dictionary[rand_index] = 1; 

    return rand_index; 
}

std::vector<std::vector<std::string> > buildSpaceShip(){
    std::vector<std::vector<std::string> > ships;
    std::vector<std::string> s1; 
    std::vector<std::string> s2;
    std::vector<std::string> s3;
    std::vector<std::string> s4;
    std::vector<std::string> s5;
    std::vector<std::string> s6;
    std::vector<std::string> s7;

    s1.push_back("                  .\n");
    s1.push_back("                  |\n");
    s1.push_back("               .-\"^\"-.\n");
    s1.push_back("              /_....._\\\n");
    s1.push_back("          .-\"`         `\"-.\n");
    s1.push_back("         (  ooo  ooo  ooo  )\n");
    s1.push_back("          '-.,_________,.-'\n");
    s1.push_back("               /     \\\n");
    s1.push_back("              /       \\\n");
    s1.push_back("             /    O    \\\n");
    s1.push_back("            /   --|--   \\\n");
    s1.push_back("           /      |      \\\n");
    s1.push_back("          /      / \\      \\\n");

    s2.push_back("                  .\n");
    s2.push_back("                  |\n");
    s2.push_back("               .-\"^\"-.\n");
    s2.push_back("              /_....._\\\n");
    s2.push_back("          .-\"`         `\"-.\n");
    s2.push_back("         (  ooo  ooo  ooo  )\n");
    s2.push_back("          '-.,_________,.-'\n");
    s2.push_back("               /     \\\n");
    s2.push_back("              /   O   \\\n");
    s2.push_back("             /  --|--  \\\n");
    s2.push_back("            /     |     \\\n");
    s2.push_back("           /     / \\     \\\n");
    s2.push_back("          /               \\\n");

    s3.push_back("                  .\n");
    s3.push_back("                  |\n");
    s3.push_back("               .-\"^\"-.\n");
    s3.push_back("              /_....._\\\n");
    s3.push_back("          .-\"`         `\"-.\n");
    s3.push_back("         (  ooo  ooo  ooo  )\n");
    s3.push_back("          '-.,_________,.-'\n");
    s3.push_back("               /  O  \\\n");
    s3.push_back("              / --|-- \\\n");
    s3.push_back("             /    |    \\\n");
    s3.push_back("            /    / \\    \\\n");
    s3.push_back("           /             \\\n");
    s3.push_back("          /               \\\n");

    s4.push_back("                  .\n");
    s4.push_back("                  |\n");
    s4.push_back("               .-\"^\"-.\n");
    s4.push_back("              /_....._\\\n");
    s4.push_back("          .-\"`         `\"-.\n");
    s4.push_back("         (  ooo  ooo  ooo  )\n");
    s4.push_back("          '-.,_________,.-'\n");
    s4.push_back("               /--|--\\\n");
    s4.push_back("              /   |   \\\n");
    s4.push_back("             /   / \\   \\\n");
    s4.push_back("            /           \\\n");
    s4.push_back("           /             \\\n");
    s4.push_back("          /               \\\n");

    s5.push_back("                  .\n");
    s5.push_back("                  |\n");
    s5.push_back("               .-\"^\"-.\n");
    s5.push_back("              /_....._\\\n");
    s5.push_back("          .-\"`         `\"-.\n");
    s5.push_back("         (  ooo  ooo  ooo  )\n");
    s5.push_back("          '-.,_________,.-'\n");
    s5.push_back("               /  |  \\\n");
    s5.push_back("              /  / \\  \\\n");
    s5.push_back("             /         \\\n");
    s5.push_back("            /           \\\n");
    s5.push_back("           /             \\\n");
    s5.push_back("          /               \\\n");

    s6.push_back("                  .\n");
    s6.push_back("                  |\n");
    s6.push_back("               .-\"^\"-.\n");
    s6.push_back("              /_....._\\\n");
    s6.push_back("          .-\"`         `\"-.\n");
    s6.push_back("         (  ooo  ooo  ooo  )\n");
    s6.push_back("          '-.,_________,.-'\n");
    s6.push_back("               / / \\ \\\n");
    s6.push_back("              /       \\\n");
    s6.push_back("             /         \\\n");
    s6.push_back("            /           \\\n");
    s6.push_back("           /             \\\n");
    s6.push_back("          /               \\\n");

    s7.push_back("                  .\n");
    s7.push_back("                  |\n");
    s7.push_back("               .-\"^\"-.\n");
    s7.push_back("              /_....._\\\n");
    s7.push_back("          .-\"`         `\"-.\n");
    s7.push_back("         (  ooo  ooo  ooo  )\n");
    s7.push_back("          '-.,_________,.-'\n");
    s7.push_back("               /     \\\n");
    s7.push_back("              /       \\\n");
    s7.push_back("             /         \\\n");
    s7.push_back("            /           \\\n");
    s7.push_back("           /             \\\n");
    s7.push_back("          /               \\\n");

    ships.push_back(s1); // 0
    ships.push_back(s2); // 1
    ships.push_back(s3); // 2
    ships.push_back(s4); // 3
    ships.push_back(s5); // 4
    ships.push_back(s6); // 5
    ships.push_back(s7); // 6

    return ships;
}

void returnSpaceShip(int index){
    std::vector<std::vector<std::string> > ship = buildSpaceShip();
    
    for(int j = 0; j < ship[index].size(); j++){
        std::cout << ship[index][j]; 
    }

    std::cout << std::endl;
}

void generateIntroMessage(){
    std::cout << "UFO: The Game" << std::endl;
    std::cout << "Instructions: save us from alien abduction by guessing letters in the codeword." << std::endl;
}

void returnIncorrectGuesses(std::vector<char> incorrect_guesses){
    std::cout << "Incorrect Guesses: " << std::endl;
    if(incorrect_guesses.empty()){
        std::cout << "None" << std::endl;
    }
    else{
        for(int j = 0; j < incorrect_guesses.size(); j++){
            std::cout << incorrect_guesses[j] << " "; 
        }
    }
    std::cout << "\n" << std::endl;
}

std::unordered_map<char, std::vector<int> > convertKeywordDictionary(std::string keyword){
    std::unordered_map<char, std::vector<int> > keyword_dictionary;

    for(int i = 0; i < keyword.size(); i++){
        // if you can't find the char, add & append, else find previous instance and append to that key
        if(keyword_dictionary.find(putchar(toupper(keyword[i]))) == keyword_dictionary.end()){
            keyword_dictionary[putchar(toupper(keyword[i]))].push_back(i);
        }
        else{
            keyword_dictionary.at(putchar(toupper(keyword[i]))).push_back(i);
        }
    }

    return keyword_dictionary;
}

std::string createDefaultCodeWord(std::string key_word){
    std::string default_code;
    for(int i = 0; i < key_word.size(); i++){
        default_code += "_"; 
    }

    return default_code;
}

std::string displayCodeWord(std::unordered_map<char, std::vector<int> > keyword_dictionary, std::string code_word, char user_input){

    std::vector<int> char_indices = keyword_dictionary.at(user_input); 

    for(std::vector<int>::iterator it = char_indices.begin(); it != char_indices.end(); it++){                  code_word[*it] = user_input; }
    
    return code_word; 
}

void displayPositiveMessage(){
    int random_number; 
    srand((int)time(0));
    random_number = (std::rand() % 4);

    std::string positive_messages[5] = {"Aww, that's okay you'll get it next time!", "Practice makes perfect!", "Don't give up; you'll get there!", "You're so close; I believe in you!", "If at first you don't succeed, try, try again!"}; 

    std::cout << positive_messages[random_number] << std::endl;;

}

char handleInput(std::unordered_map<char, bool> all_guesses){
    std::string user_input; 
    std::cout << "Please enter your guess: ";

    while(!(std::cin >> user_input) || user_input.length()!=1 || !isalpha(user_input[0]) || all_guesses.find(user_input[0]) != all_guesses.end()){
        std::cout << "\nPlease enter a valid character & one that you have no already guessed as your guess: " << std::endl;
        std::cin.clear();     
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return user_input[0]; 
}

void playGame(){
    
    std::string key_word;
    std::unordered_map<int, int> indices_dictionary; 
    std::vector<char> incorrect_guesses;
    std::unordered_map<char, std::vector<int> > keyword_dictionary; 
    std::unordered_map<char, bool> all_guesses;
    int progress = 0; 
    
    // 1. create dict of values
    std::unordered_map<int, std::string> noun_dictionary = createDict();

    // 2. assign key word, convert to dictionary
    key_word = noun_dictionary[setRand(indices_dictionary)];
    keyword_dictionary = convertKeywordDictionary(key_word);

    // 3. generate intro message 
    generateIntroMessage();

    // 4. six turns
    int num_guesses_wrong = 0; 
    std::string code_word = createDefaultCodeWord(key_word);

    while(true){
        if(num_guesses_wrong == 6){break;}
        if(progress == keyword_dictionary.size()){break;}
        char user_input;

        returnSpaceShip(num_guesses_wrong);
        returnIncorrectGuesses(incorrect_guesses);
        std::cout << "Codeword: \n" << code_word << "\n" << std::endl;
        
        
        user_input = handleInput(all_guesses);

        if(keyword_dictionary.find(putchar(toupper(user_input))) != keyword_dictionary.end()){
            code_word = displayCodeWord(keyword_dictionary, code_word, putchar(toupper(user_input))); 
            std::cout << "Correct! You're closer to cracking the codeword" << std::endl;
            all_guesses[putchar(toupper(user_input))] = true;
            progress++; 
        }
        else{
            std::cout << "Incorrect! The tractor beam pulls the person in further. ";
            displayPositiveMessage();
            incorrect_guesses.push_back(putchar(toupper(user_input)));
            num_guesses_wrong++;
            all_guesses[putchar(toupper(user_input))] = true;
        }

    } 
    
    if(num_guesses_wrong == 6){
        std::cout << "Try again next time!" << std::endl;
    }
    else{
        std::cout << "Correct! You saved the person and earned a medal of honor!" << std::endl;
        std::cout << "The codeword is: " << code_word << ".";
    }
    
}

int main(){

    playGame();
    return 0;
}

