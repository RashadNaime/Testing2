/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 1st, 2018, 11:28am
 * Purpose:  Randomly choose from a file
 */

//System Libraries Here
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string getColr(); 
string getCard();
string getCard(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    for(int i=1;i<=10;i++){
    cout<<getColr()<<endl;
    }
    //TEST out the card shuffle 
    string card1,card2,card3,card4,card5;
     card1=getCard(rand()%52+1);
    do{
    card2=getCard(rand()%52+1);
    }while(card1==card2);
    do{
    card3=getCard(rand()%52+1);
    }while(card1==card3||card2==card3);
    do{
    card4=getCard(rand()%52+1);
    }while(card1==card4||card2==card4||card3==card4);
    do{
    card5=getCard(rand()%52+1);
    }while(card1==card5||card2==card5||card3==card5||card4==card5);
    
    //output 5 unique cards 
    cout<<card1<<" "<<card2<<" "<<card3<<" "<<card4<<" "<<card5<<endl;
     
     
     
    
    //Exit
    return 0;
}

string getColr(){
    //Declare variables 
    fstream in; 
    string color;
    int nLines;
    
    //initialize variables 
    in.open("color.dat");
    nLines=rand()%8+1;//possible 8 colors in the file \
// look through file to find color
    for(int line=1;line<=nLines;line++){
        in>>color; 
    }
    //close the file
    in.close();
    //Return the random color 
    return color; 
                 } 
string getCard(){
      //Declare variables 
    fstream in; 
    string card;
    int nLines;
    
    //initialize variables 
    in.open("card.dat");
    nLines=rand()%52+1;//possible 8 colors in the file \
// look through file to find color
    for(int line=1;line<=nLines;line++){
        in>>card; 
    }
    //close the file
    in.close();
    //Return the random color 
    return card; 
}
     
string getCard(int nLines){
      //Declare variables 
    fstream in; 
    string card;
    
    
    //initialize variables 
    in.open("card.dat");
// look through file to find color
    for(int line=1;line<=nLines;line++){
        in>>card; 
    }
    //close the file
    in.close();
    //Return the random color 
    return card; 
}