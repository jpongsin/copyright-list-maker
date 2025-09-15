//
// Created by jonathon on 3/27/24.
//

#ifndef COPYRIGHTUPTO1992_NEW_COMPOUNDINFO_H
#define COPYRIGHTUPTO1992_NEW_COMPOUNDINFO_H


#include <iostream>
#include <iomanip>
#include <string>

namespace copyrightInfo {

    class compoundInfo {
    private:
        //prompt every string. assume string is always valid
        std::string movieTitle;
        std::string copyrightAuthor;
        //only validate check the date
        std::string copyrightDate;
        std::string copyrightID;
        //only validate check the char
        std::string renewStatus;
        //ask if renewal date is known, if YES, goto validate check the date.
        std::string renewDate;
        std::string renewID;

    public:
        compoundInfo();
        ~compoundInfo();

        std::string getTitle();
        std::string getAuthor();
        std::string getCopyDate();
        std::string getCopyID();
        std::string getRenew();
        std::string getRenewDate();
        std::string getRenewID();

        void setTitle(std::string &mt);
        void setAuthor(std::string &ca);
        void setCopyDate(std::string &cd);
        void setCopyID(std::string &ci);
        void setRenew(std::string &rs);
        void setRenewDate(std::string &rd);
        void setRenewID(std::string &ri);

        void showMovieInfo();
    };


} // copyrightInfo


#endif //COPYRIGHTUPTO1992_NEW_COMPOUNDINFO_H
