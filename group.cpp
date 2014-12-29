#include "group.h"

Group::Group(){
}

Group::Group(string _name, list<Multimedia, allocator<Multimedia> > multList):list<Multimedia, allocator<Multimedia> >(multList), Pointable::Pointable(){
    name  = _name;
}

Group::~Group(){
    cout<< "nom de l'objet détruit : " + name  <<endl;
    cout<<endl;
}

string Group::getName(){
    return name;
}

void Group::setName(string _name){
    name = _name;
}

void Group::addMultimedia(const Multimedia _mult){
    list<Multimedia, allocator<Multimedia> >::push_front(_mult);
}

void Group::deleteMultimedia(const Multimedia _mult){
    for (list<Multimedia, allocator<Multimedia> >::iterator it = this->begin(); it != this->end(); it++){
        const Multimedia *multaux = new Multimedia(*it);
        if(_mult.compare(*multaux)){
            it = list<Multimedia, allocator<Multimedia> >::erase(it);
        }
    }
}

void Group::display(){
    cout<<"nom du groupe : " + name <<endl;
    for(list<Multimedia, allocator<Multimedia> >::iterator it = this->begin(); it != this->end(); it++){
        it->display();
    }
}
