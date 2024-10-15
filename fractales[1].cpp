#include<iostream>

using namespace std ;

int main(int argc, char ** argv){
    float module(float x, float y);
    float re, im, zre, zim;
    void complexe (float x,float y);
    
    cout<<"entrer un nombre complexe: \n: partie réelle Re= \n";
    cin>>re;
    cout<<"partie imaginaire im= \n ";
    cin>>im;
    complexe (re, im );
     cout<<module(re, im);
     
     zre=zim=0;
     short i=0;
     int limite=100;
         while(module (zre, zim)<4 && i <limite){
              zre=zre*zre-zim*zim+re;
               zim=zre*zim+zre*zim+im;
               complexe (zre, zim);
               i++;
         }
         if (i==limite)
             cout <<"cette suite de nombre pourrait appartenir à l'ensemble des suite de mandel brot";
             else
                 cout<<"cette suite de nombre n'appartient pas à l'ensemble de mandel brot.";
    
    return 0;
    }
    
  float module(float x, float y){
      return x*x+y*y;
  }
  
  void complexe (float x,float y){
      if(y<0)
        cout<<"\t"<<x<<y<<"i \n";
    else
        cout<<"\t"<<x<<"+"<<y<<"i \n";
  }