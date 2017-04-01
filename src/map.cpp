#include "map.h"
#include "cityObject.h"
#include "mapObject.h"

map::map()
{
    //ctor
    mapObject_count = 0;
    mapObject_max_ID = 0;
}

map::~map()
{
    //dtor
}

void map::addObject(int TYPE){
    int id = getNextID();
    if(id==-1)
        return;

    switch(TYPE){
    case EXPANSION::MAP_OBJECT_TYPE_CITY:{
        cityObject *obj = new cityObject(id);
        obj->reqSetName(countObjectByTypeID(TYPE));
        addObject(obj);
        obj->onPrint();
        break;
    }

    default:{
        break;
    }


    }
}

void map::addObject(mapObject *obj){
    objects[mapObject_count] = obj;
    mapObject_count++;
}
int map::getNextID(){
    if(mapObject_count < mapObject_max_amount){
        mapObject_max_ID+=1;
        return mapObject_max_ID;
    }else{
        return -1;
    }
}

int map::countObjectByTypeID(int TYPE_ID){

    for(int i=0 ; i<mapObject_count ; i++){
        int c = 0;
        if(objects[i]->getTypeID()==TYPE_ID){
            c++;
        }
        return c;
    }
}
