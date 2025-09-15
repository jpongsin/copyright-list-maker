//
// Created by Jonathon Pongsin on 3/25/24.
//

#include "compoundInfo.h"

namespace copyrightInfo {
    compoundInfo::compoundInfo(){
        movieTitle = "Title";
        copyrightAuthor = "Author";
        copyrightDate = "0000-00-00";
        copyrightID = "MP00000";
        renewStatus = "n";
        renewDate = "N/A";
        renewID = "N/A";
    }
    compoundInfo::~compoundInfo(){
        movieTitle = " ";
        copyrightAuthor = " ";
        copyrightDate = " ";
        copyrightID = " ";
        renewStatus = " ";
        renewDate = " ";
        renewID = " ";
    }

    std::string compoundInfo::getTitle(){
        return movieTitle;
    }
    std::string compoundInfo::getAuthor(){
        return copyrightAuthor;
    }
    std::string compoundInfo::getCopyDate(){
        return copyrightDate;
    }
    std::string compoundInfo::getCopyID(){
        return copyrightID;
    }
    std::string compoundInfo::getRenew(){
        return renewStatus;
    }
    std::string compoundInfo::getRenewDate(){
        return renewDate;
    }
    std::string compoundInfo::getRenewID(){
        return renewID;
    }

    void compoundInfo::setTitle(std::string &mt){
        movieTitle = mt;

    }
    void compoundInfo::setAuthor(std::string &ca){
        copyrightAuthor=ca;

    }
    void compoundInfo::setCopyDate(std::string &cd){
        copyrightDate=cd;

    }
    void compoundInfo::setCopyID(std::string &ci){
        copyrightID=ci;

    }
    void compoundInfo::setRenew(std::string &rs){
        renewStatus=rs;

    }
    void compoundInfo::setRenewDate(std::string &rd){
        renewDate=rd;

    }
    void compoundInfo::setRenewID(std::string &ri){
        renewID=ri;

    }
    void compoundInfo::showMovieInfo(){
        std::cout<<std::left
                 <<std::setw(60)<<getTitle()
                 <<std::setw(45)<<getAuthor()
                 <<std::setw(20)<<getCopyDate()
                 <<std::setw(20)<<getCopyID()
                 <<std::setw(20)<<getRenew()
                 <<std::setw(20)<<getRenewDate()
                 <<std::setw(20)<<getRenewID()
                 <<std::endl;
    }
} // copyrightInfo
