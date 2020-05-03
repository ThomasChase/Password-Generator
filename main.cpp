/*
Created by Thomas Chase
Created on May 2, 2020
*/

//This program will genterate a random password to the user defined length

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//Function Prototypes
void genNum(int number[], int numLength);   //Generate random number
void genUpper(char upperLetter[], int upperLength);     //Generate random upper case letter
void genLower(char lowerLetter[], int lowerLength);     //Generate random lower case letter
void genSpecial(char special[], int specialLength);     //Generate random special characters

int main()
{
    int length;
    int number[]={0,1,2,3,4,5,6,7,8,9};
    char upperLetter[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char lowerLetter[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char special[]={'!','@','#','$','%','&','?'};

    srand(time(0));

    cout << "**********************************************************" << endl;
    cout << "Please enter the passward length requried greater then 7: ";
    cin >> length;

    int numLength = 10;
    int upperLength = 26;
    int lowerLength = 26;
    int specialLength = 7;

    while(true){
        if(length < 7){
            cout << "Please enter a length greater or equal to 7." << endl;
        }else{
            for(int i = 0; i < length; i++){
                int p = rand() % 4;     //Generate random number between 0 and 4
                switch(p){      //Uses random number previously generated to fill in next chracter
                    case 0:{
                        genNum(number, numLength);
                        break;
                    }
                    case 1:{
                        genUpper(upperLetter, upperLength);
                        break;
                    }
                    case 2:{
                        genLower(lowerLetter, lowerLength);
                        break;
                    }
                    case 3:{
                        genSpecial(special, specialLength);
                        break;
                    }
                }
            }
        }
        break;
    }
    return 0;
}

void genNum(int number[], int numLength){
    int i = rand()%numLength;
    cout << number[i];
}

void genUpper(char upperLetter[], int upperLength){
    int i = rand()%upperLength;
    cout << upperLetter[i];
}

void genLower(char lowerLetter[], int lowerLength){
    int i = rand()%lowerLength;
    cout << lowerLetter[i];
}

void genSpecial(char special[], int specialLength){
    int i = rand()%specialLength;
    cout << special[i];
}
