#ifndef FILM_H
#define FILM_H

#include "video.h"

class Film:public Video{

    private:
        int *chapterDurations;
        int chapterNumber;

    public:
        Film();

        Film(string _name, int acquisitionDate, string pathName, int duration, int chapterNumber, int* chapterDuration);

        Film(const Film& film);

        ~Film();

        int* getChapterDurations() const;

        int getChapterNumber() const;

        void setChapterDurations(const int* _chapterDurations, const int _chapterNumber);

        virtual bool compare(const Film film);

        virtual void display() const;

        virtual void play() const;
};

#endif // FILM_H
