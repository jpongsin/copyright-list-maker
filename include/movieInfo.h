//
// Created by jonathon on 3/27/24.
//

#ifndef COPYRIGHTUPTO1992_NEW_MOVIEINFO_H
#define COPYRIGHTUPTO1992_NEW_MOVIEINFO_H


#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "compoundInfo.h"

namespace copyrightInfo {
    class movieInfo : public compoundInfo {
    private:
        int numInfo;
        std::vector<compoundInfo> localList;
        compoundInfo dummyInfo;

    public:
        //constructors;
        movieInfo();
        ~movieInfo();

        //functions
        bool isVectorEmpty();
        int getNumInfo();
        void destroyList();
        void createList();
        void setMovieInfo();
        void setupLocalList();
        void printLocalList();
        void movieInfoFormat();
    };

}



#endif //COPYRIGHTUPTO1992_NEW_MOVIEINFO_H
