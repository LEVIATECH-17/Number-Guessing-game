// Number guessing game by Kwanele Junior Ndaba 19 May 2025 WITS COMMERCE LIBRARY
#include <windows.h>
#include <ctime>
#include <iostream>
#include <string>
#include <random>

using namespace std;

void invalid() {
    std::string message = "Invalid guess!";
    std::cout << message << std::endl;
}
int main() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout <<R"(
         __     __    __    ________    ________
        |  \   |  |  |  |  |__    __|  |    ____|    20
        |   \  |  |  |  |     |  |     |   |___
        |    \ |  |  |  |     |  |     | _____/
        |     \|  |  |  |     |  |     |   ___\
        |  |\     |  |  |     |  |     |   |____
        |__| \____|  |__|     |__|     |________|    25
    )" << endl;
    cout << "" << endl;
    cout << "******************GUESSING GAME*******************" << endl;
    cout << "" << endl;
    cout << " YOU HAVE 5 TRIES"<< endl;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 6);
    
    int guess = distr(gen);
    int counts = 1;
    int num;
    cout << "Guess a number from 1 to 6: " << endl;
    while (true) {
        cin >> num;
        if (num == guess) {
            break;
        }
            if(counts >=5) {
                cout << "Number of Guesess exceeded" << endl;
                cout << "----------YOU LOSE--------"<< endl;
                break;
            }
                if(abs(num - guess) == 1) {
                    cout << "You're very close!" << endl;
                }
                else if(abs(num - guess) == 2) {
                    cout << "Warm guess.." << endl;
                }
                else{
                    cout << "Cold guess" << endl;
                }
        counts ++ ;

    }
    
    fflush(stdin); 
    switch(num) {
        case 1 :
            if (num == guess) {
                cout << "You've won a ticket to Dubai" << endl;
                cout << "Number of guesses : " << counts << endl;
            }
            else{
                invalid();
            }
                if (counts < 4) {
                cout << "You're fast" << endl;
                }
                else{
                    cout << "Too many guesses" << endl;
                }
            break;
        case 2 :
            if (num == guess) {
                cout << "You've won a trip to Anfield" << endl;
                cout << "Number of guesses : " << counts << endl;
            }
            else{
                invalid();
            }
                if (counts < 4) {
                    cout << "You're fast" << endl;
                }
                else{
                    cout << "Too many guesses" << endl;
                    
                }
            break;
        case 3 :
            if (num == guess) {
                cout << "You've won R500 worth Gift card" << endl;
                cout << "Number of guesses : " << counts << endl;
            }
            else{
                invalid();
            }
                if (counts < 4) {
                    cout << "You're fast" << endl;
                }
                else{
                    cout << "Too many guesses" << endl;
                    
                }   
            break;
        case 4 :
            if (num == guess) {
                cout << "You are in sad luck" << endl;
                cout << "Number of guesses : " << counts << endl;
            }
            else{
                invalid();
            }
                if (counts < 4) {
                    cout << "You're fast" << endl;
                }
                else{
                    cout << "Too many guesses" << endl;
                    
                }
            break;
        case 5 :
            if (num == guess) {
                cout << "You've won a ticket to J Cole consert" << endl;
                cout << "Number of guesses : " << counts << endl;
            }
            else{
                invalid();
            }
                if (counts < 4) {
                    cout << "You're fast" << endl;
                }
                else{
                    cout << "Too many guesses" << endl;
                    
                }
            break;
        case 6 :
            if (num == guess) {
                cout << "You're in your Prime!!!   " << endl;
                cout << "Number of guesses : " << counts << endl;
            }
            else{
                invalid();
            }
                if (counts < 4) {
                    cout << "You're fast" << endl;
                }
                else{
                    cout << "Too many guesses" << endl;
                    
                }
            break;
            
    }
    cout << "******************GUESSING GAME*******************" << endl;
    cout <<""<<endl;
    return 0;
}