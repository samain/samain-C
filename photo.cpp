#include "photo.h"
#include <stdlib.h>

Photo::Photo(){

}

Photo::Photo(string _name, int _acquisitionDate, string _pathName, string _place):Multimedia(_name, _acquisitionDate, _pathName),place(_place){

}

Photo::Photo(const Photo& photo):Multimedia(photo){
    place = photo.place;
}

Photo::~Photo(){
}

string Photo::getPlace() const {
    return place;
}

void Photo::setPlace(const string _place){
    place = _place;
}

bool Photo::compare(const Photo _photo){
    return (Multimedia::compare(_photo))&&(place.compare(_photo.getPlace()) == 0);
}

void Photo::display() const{
    Multimedia::display();
    cout<<"place = "<<place<<endl;
}

void Photo::play() const{

    string s = "mplayer " + Multimedia::getPathName() + " &";
    const char *c = s.c_str();
    system(c);
}
