#include "multimedia.h"

Multimedia::Multimedia(){
    acquisitionDate = 0;
}

Multimedia::Multimedia(string _name, int _acquisitionDate, string _pathName):Pointable::Pointable(){
    name = _name;
    acquisitionDate = _acquisitionDate;
    pathName = _pathName;
}

Multimedia::Multimedia(const Multimedia& mult){
    name = mult.name;
    acquisitionDate = mult.acquisitionDate;
    pathName = mult.pathName;
}

Multimedia::~Multimedia(){
    cout<< "nom de l'objet détruit : " + name  <<endl;
    cout<<endl;
}

string Multimedia::getName() const {
    return name;
}

int Multimedia::getAcquisitionDate() const {
     return acquisitionDate;
}

string Multimedia::getPathName() const {
     return pathName;
}

void Multimedia::setName(const string _name){
     name = _name;
}

void Multimedia::setAcquisitionDate(const int _date){
     acquisitionDate = _date;
}

void Multimedia::setPathName(const string _pathName){
     pathName = _pathName;
}

bool Multimedia::compare(const Multimedia mult){
    return (name.compare(mult.getName()) == 0)&&(acquisitionDate == mult.getAcquisitionDate())&&(pathName.compare(mult.getPathName()) == 0);
}

void Multimedia::display() const{
    cout<<"name = "<< name <<endl;
    cout<<"acquisitionDate = "<<acquisitionDate<<endl;
    cout<<"pathName = "<<pathName<<endl;
}

void Multimedia::play() const{
}
