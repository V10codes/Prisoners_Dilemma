#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;


// Both confess - P1 = 10 years ans P2 = 10 years
// P1 - C and P2 = NC ----> P2 gets 20 years and P1 free and vice versa
// if both do not confess get 5 years

//get input from Player
string getInputPlayerChoice()
{  
    string tempChoice="";
    cout << "Enter Your Choice  :" << endl;
    cin >> tempChoice;
    return tempChoice;

}

//randomize computer answer
string randomize()
{
    //srand(time(0));
    if(rand()%2==0){   
        return "C";
    }
    else{
        return "NC";
    }   
}

//Check
bool checkChoice(string Choice)
{
    string temp = randomize();
    if(Choice.compare(temp)==0){
        return true;
    }
    else{
        return false;
    }
}

// Output who wins
void displayWinner(string Choice)
{
    if(checkChoice(Choice)){
        {
            if(Choice == "C"){
                cout << "Player 1 (Computer) Choice: " << Choice << endl;
                cout << "Player 2 (User) Choice: " << Choice << endl;
                cout << "BOTH OF YOU GET 10 YEARS IN PRISON." << endl;
            }
            else if(Choice == "NC"){
                cout << "Player 1 (Computer) Choice: " << Choice << endl;
                cout << "Player 2 (User) Choice: " << Choice << endl;
                cout << "BOTH OF YOU GET 5 YEARS IN PRISON." << endl;
            }
        }
        
    }
    else{
        if(Choice == "C"){
            cout << "Player 1 (Computer) Choice: " << "NC" << endl;
            cout << "Player 2 (User) Choice: " << Choice << endl;
            cout << "YOU ARE FREE " << endl;
            cout << "[^^^oOo^^^]" << endl;
        }
        else{
            cout << "Player 1 (Computer) Choice: " << "C" << endl;
            cout << "Player 2 (User) Choice: " << Choice << endl;
            cout << "YOU ARE F'KED " << endl;
            cout << "YOU GO TO JAIL " << endl;
            cout << "|||||||||||||| " << endl;
        }

    }
}

int main(){
    cout << "TYPE EXIT OR exit TO EXIT" << endl;
    cout << "TYPE C IF YOU CONFESSED" << endl;
    cout << "TYPE NC IF YOU DID NOT CONFESS" << endl;
    while(true){
        string PlayerChoice = getInputPlayerChoice();
        if(PlayerChoice != "C" && PlayerChoice != "NC"){
            if(PlayerChoice == "EXIT" || PlayerChoice == "exit"){
                break;
            }
            cout << " ERROR: Enter Correct Choice " << endl;
        }
        
        checkChoice(PlayerChoice);
        displayWinner(PlayerChoice);
        cout << endl;
    }
    return 0;
}