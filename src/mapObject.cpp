#include "mapObject.h"


mapObject::mapObject(int ID)
{
    id = ID;
    type_id = EXPANSION::MAP_OBJECT_TYPE_BASE;
    type_name = "mapObject";
    //ctor
}

mapObject::~mapObject()
{
    //dtor
}



void mapObject::onRender(){

}

void mapObject::onPrint(){
    std::cout << name << std::endl;
}


std::string mapObject::getTypeName(){
    return type_name;
}

void mapObject::reqSetName(int indexOfSameType){
    name =  type_name + "-" + MVC::to_string(indexOfSameType);
}

void mapObject::updateTypeName(std::string child_type_name){
    type_name = type_name + "." + child_type_name;
}

void mapObject::setTypeID(int TYPE_ID){
    type_id = TYPE_ID;
}


int mapObject::getTypeID(){
    return type_id;
}

int mapObject::getID(){
    return id;
}
