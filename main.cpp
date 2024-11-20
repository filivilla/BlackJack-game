//Black Jack Game

#include <iostream>//preprocessing directive for input and output
#include <ctime>//preporcessing directve for time usage
#include <random>//preporcessing directive for random function
#include <string>//preprocessing directive for string functions
#include <fstream>//preprocessing directive for file functions 
#include"file.h"//access to class 
#include <cassert>//preprocessing directive for usage of assert
#include <vector>//preprocessing directive to include vector 

using namespace std;//name change for cin and cout

struct deck{//struct deck to hold the suits 
int x;

int Hearts[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, x}//heart suit
;int Spades[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, x}; //spades
int Clubs[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, x};//clubs
int Diamonds[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, x}; //diamons
};

int main()//header file for main function 
{
    file object;//object for the class 

    ifstream players("Players.txt");//reading file for other people playing 
    ofstream leaderboard("Leaderboard.out");//file for the outputed scoredbard

    deck card;//struct object to be able to use the different sets 

    int num_players;//number of players,declared variable
    vector<int> bet;//declares a vector of integers for bet
    vector<string> usernames;//declares a vector of string for usernames
    int dealer;//dealers score , variable declared

    if(!players)//checks if the file was opened or not
    {
        cout << "File not found";
        return 1;//terminates the program 
    }//end if 

    object.readfile(players,usernames,bet);

    object.output(usernames,bet);
    

    return 0;//returns 0

}//end main 