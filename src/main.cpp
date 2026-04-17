#include <iostream>
#include "../include/movieInfo.h"

using namespace std;
using namespace copyrightInfo;

enum COPYRIGHT_MENU {RESERVED,TITLES,SETUP,PRINT,DELETE,EXIT};

//prototype
void authorInfo();
void GPLNotice();
void exitMsg();
void menuOption();

int main() {
    movieInfo localMovieList;
    int programOption=RESERVED;
    char overwriteList;

    authorInfo();
    while (programOption != EXIT){
        menuOption();
        cin>>programOption;
        cin.ignore();

        switch(programOption){
            case TITLES:{
                localMovieList.createList();
                break;
            }
            case SETUP:{
                if (localMovieList.getNumInfo()==0){
                    cout<<"You must set the numbers of "
                          "titles first, before entering information."<<endl;
                    break;
                }
                if (!localMovieList.isVectorEmpty()){
                    cout<<"Are you sure you would like "
                          "to overwrite your list? (y/n)"<<endl;
                    cin>>overwriteList;
                    if (overwriteList=='y'){
                        localMovieList.destroyList();
                        localMovieList.createList();
                    }
                    else{
                        break;
                    }
                }

                //Vector input will run until reaching titlesAmount
                localMovieList.setupLocalList();
                localMovieList.printLocalList();
                break;
            }
            case PRINT:{
                //you cannot erase something that is already empty
                if (localMovieList.getNumInfo()==0){
                    cout<<"You must create a list"<<endl;
                    break;
                }
                //PRINT
                localMovieList.printLocalList();
                break;
            }
            case DELETE:{
                //you cannot erase something that is already empty
                if (localMovieList.getNumInfo()==0){
                    cout<<"The list is empty."<<endl;
                    break;
                }

                //if you already have a local list
                localMovieList.destroyList();
                break;
            }
        }
    }

    exitMsg();
    return 0;
}

void authorInfo(){
    cout<<"U.S. COPYRIGHT RENEWAL STATUS LIST CREATOR"<<endl;
    cout<<"For copyrighted works up to 1992"<<endl;
    cout<<"Copyright (C) 2024 Jonathon Pongsin"<<endl;
    cout<<endl;
}

void menuOption(){
    cout<<endl;
    cout<<"Menu: Select the following options"<<endl;
    cout<<"1. SET numbers of titles"<<endl;
    cout<<"2. CREATE a local list (requires setting numbers of titles)"<<endl;
    cout<<"3. VIEW a local list"<<endl;
    cout<<"4. DELETE a local list"<<endl;
    cout<<"5. Exit Program"<<endl;
    cout<<endl;
}

void exitMsg(){
    cout<<"Goodbye"<<endl;
}
