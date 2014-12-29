#include "globaltable.h"

GlobalTable::GlobalTable(){
}

Photo& createPhoto(string _name, int acquisitionDate, string _pathName, string _place){
    Photo *photo = new Photo(_name, _acquisitonDate, _pathName, _place);
    Photo& photo2 = multTable.operator[_name](*photo);

    return photo2;

}

Video& createVideo(string _name, int _acquisitionDate, string _pathName, int _duration){
    Video *video = new Video(_name, _acquisitionDate, _pathName, _duration);
    Video& video2 =  multTable.operator[_name](*video);

    return video2;
}

Film& createFilm(string _name, int _acquisitionDate, string _pathName, int _duration, int _chapterNumber, int * const _chapterDurations){
    Film *film = Film(_name, _acquisitionDate, _pathName, _duration, _chapterNumber, _chapterDurations);
    Film& film2 = multTable.operator[_name](*film);

    return film2;
}

Group& createGroup(string _name, list<Multimedia, allocator<Multimedia> > multList){
    Group *group = Group(_name, multList);
    Group& group2 = groupTable.operator[_name](*video);

    return group2;

}

void suppressMultimedia(string _name){
    Multimedia& mult = multTable.operator[_name]();
    for(map::iterator it = this->begin(); it != this->end(); it++){
        it.deleteMultimedia(&mult);
    }

    multTable::erase(_name);
}

void suppressGroup(string _name){

    multTable.erase(_name);
}

void seekMulitmedia(string _name){

    map::iterator it = multTable.find(_name);

    if(it != multTable.end()){
        it.display();
    }
}

void seekGroup(string _name){

    map::iterator it = groupTable.find(_name);

    if(it != groupTable.end()){
        it.display();
    }
}

void playMultimedia(string _name){

}
