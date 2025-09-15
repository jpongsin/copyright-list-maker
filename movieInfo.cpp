//
// Created by Jonathon Pongsin on 3/21/24.
//
#include <iostream>
#include <iomanip>
#include <string>

#include "movieInfo.h"

namespace copyrightInfo{
    movieInfo::movieInfo(){
        numInfo = 0;
    }
    movieInfo::~movieInfo(){
        numInfo = 0;
        destroyList();
    }

    void movieInfo::destroyList(){
        std::cout<<"Erasing..."<<std::endl;
        localList.clear();
        numInfo = 0;
        std::cout<<"Done"<<std::endl;
    }
    bool movieInfo::isVectorEmpty(){
        if (localList.empty()){
            return true;
        }
        else{
            return false;
        }

    }
    int movieInfo::getNumInfo(){
        return numInfo;
    }

    void movieInfo::createList(){
        //Check if a list was already made
        if (numInfo!=0){
            destroyList();
        }
        //how many titles would you like to write?
        //After entering cin, cin ignore, because
        //class uses getline.
        std::cout<<"How many titles do you want to write? ";
        std::cin>>numInfo;
        while (numInfo<0||numInfo>999) {
            std::cout<<"How many titles do you want to write? ";
            std::cin>>numInfo;
        }
        std::cin.ignore();
        std::cout<<std::endl;
        std::cout<<"This program now allows you to type "<< getNumInfo()<< " titles."<<std::endl;

    }
    void movieInfo::setMovieInfo(){
        std::string tempTitle;
        std::string tempAuthor;
        std::string tempCopyDate;
        std::string tempCopyID;
        std::string tempRenewStatus;
        std::string tempRenewDate;
        std::string tempRenewID;

        std::cout<<"Enter the motion picture title ";
        getline(std::cin,tempTitle);
        dummyInfo.setTitle(tempTitle);

        std::cout<<"Enter the motion picture author ";
        getline(std::cin,tempAuthor);
        dummyInfo.setAuthor(tempAuthor);

        std::cout<<"Enter the copyright date (yyyy-dd-mm) ";
        getline(std::cin,tempCopyDate);

        while (tempCopyDate.length()<10||tempCopyDate.length()>10) {
            if (tempCopyDate[4]!='-'||tempCopyDate[7]!='-'){
                std::cout<<"Not valid";
            }
            std::cout<<"Enter the copyright date (yyyy-dd-mm) ";
            getline(std::cin,tempCopyDate);
        }
        dummyInfo.setCopyDate(tempCopyDate);

        std::cout<<"Enter the copyright ID ";
        getline(std::cin,tempCopyID);
        dummyInfo.setCopyID(tempCopyID);

        std::cout<<"Enter the renewal status (y/n) ";
        getline(std::cin,tempRenewStatus);
        dummyInfo.setRenew(tempRenewStatus);

        if (tempRenewStatus=="n"){
            tempRenewDate = "N/A";
            tempRenewID = "N/A";
            dummyInfo.setRenewDate(tempRenewDate);
            dummyInfo.setRenewID(tempRenewID);
        }
        else{
            std::cout<<"Enter the renewal date (yyyy-dd-mm) ";
            getline(std::cin,tempRenewDate);
            while (tempCopyDate.length()<10||tempCopyDate.length()>10) {
                if (tempCopyDate[4]!='-'||tempCopyDate[7]!='-'){
                    std::cout<<"Not valid";
                }
                std::cout<<"Enter the renewal date (yyyy-dd-mm) ";
                getline(std::cin,tempRenewDate);
            }
            dummyInfo.setRenewDate(tempRenewDate);

            std::cout<<"Enter the renewal ID ";
            getline(std::cin,tempRenewID);
            dummyInfo.setRenewID(tempRenewID);
        }

        std::cout<<std::endl;
    }

    void movieInfo::setupLocalList(){
        for (int i=0; i<numInfo;){
            setMovieInfo();
            localList.push_back(dummyInfo);
            i++;
        }
    }

    void movieInfo::printLocalList(){
        movieInfoFormat();
        for (int i=0; i<numInfo;){
            localList[i].showMovieInfo();
            i++;
        }
    }

    void movieInfo::movieInfoFormat(){
        std::cout<<std::left
                 <<std::setw(60)<<"Motion Picture Title"
                 <<std::setw(45)<<"Author"
                 <<std::setw(20)<<"Copyright Date"
                 <<std::setw(20)<<"Copyright ID"
                 <<std::setw(20)<<"Renewed?"
                 <<std::setw(20)<<"Renewal Date"
                 <<std::setw(20)<<"Renewal ID"
                 <<std::endl;

        std::cout<<std::left
                 <<std::setw(60)<<"==========================================================="
                 <<std::setw(45)<<"============================================"
                 <<std::setw(20)<<"==================="
                 <<std::setw(20)<<"==================="
                 <<std::setw(20)<<"==================="
                 <<std::setw(20)<<"==================="
                 <<std::setw(20)<<"==================="
                 <<std::endl;
    }
}
