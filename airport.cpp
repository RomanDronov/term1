#include "airport.h"
#include <QDebug>
Airport::Airport(QString param){
    this->param=param;
}
/*void Airport::print(){
    qDebug()<<"Airport:";
    qDebug()<<"param is "<<this->param;
    for(int i=0;i<this->content.size();++i){
            this->content.at(i)->print();
    }

}*/
