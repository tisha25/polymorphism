#include<iostream>

using namespace std ;

class cricket{
    
    public:
    
    void getTotalover(){
        
       cout<<"total over of class cricket:-" ;
    }
       
};
class t2omatch:public cricket{
    public:
    
    void getTotalover(){
        
        cout<<"t20 match over :-2over"<<endl;
    } 
};
class testmatch:public cricket{
    public:
    
    void getTotalover(){
        
        cout<<"test match over :-420over"<<endl;
    }
    
};


main(){
    
    t2omatch obj;
    obj.cricket::getTotalover();
    obj.getTotalover();
    
    testmatch obj2;
    obj.cricket::getTotalover();
    obj2.getTotalover();
    
}
