#include "film.h"
#include <stdlib.h>

Film::Film():Video(){
    chapterNumber = 0;
}

Film::Film(string _name, int _acquisitionDate, string _pathName, int _duration, int _chapterNumber, int *_chapterDurations):Video(_name, _acquisitionDate, _pathName, _duration){
    chapterNumber = _chapterNumber;
    chapterDurations  = new int[chapterNumber];
    for(int i = 0; i<chapterNumber; i++){
        chapterDurations[i] = _chapterDurations[i];
    }
}

Film::Film(const Film& film) : Video(film){
    chapterNumber = film.chapterNumber;
    chapterDurations  = new int[chapterNumber];

    int[] chapterDurations2 = film.getchapterDurations();

    for(int i = 0; i<chapterNumber; i++){
        chapterDurations[i] = chapterDurations2[i];
    }
}

Film::~Film(){
    delete [] chapterDurations;
    chapterDurations = NULL;
}

int Film::getChapterNumber() const{
    return chapterNumber;
}


int *Film::getChapterDurations() const{
    return chapterDurations;
}

void Film::setChapterDurations(const int *_chapterDurations, const int _chapterNumber){
    chapterNumber = _chapterNumber;

    for(int i = 0; i<chapterNumber; i++){
        chapterDurations[i] = _chapterDurations[i];
    }
}

bool Film::compare(const Film film){

    if(chapterNumber != film.getChapterNumber())
        return false;

    bool test = true;

    int[] chapterDurations2 = film.getChapterDurations();

    int i = 0;

    while((i<chapterNumber)&&(test)){
        if(chapterDurations[i] != chapterDurations2[i])
            test = false;
        i++;
    }

    if (test == false)
        return false;

    return Video::compare(film);
}


void Film::display() const {
    Video::display();
    cout<<"numberofChapter = "<<chapterNumber<<endl;
    for(int i = 0; i<chapterNumber; i++){
        cout<<"duration of chapter "<<i<<" : "<<chapterDurations[i]<<endl;
    }
}

void Film::play() const{

    string s = "mplayer " + Multimedia::getPathName() + " &";
    const char *c = s.c_str();
    system(c);
}
